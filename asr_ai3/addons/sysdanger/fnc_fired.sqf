//enhances awareness, enabling AI to hear loud weapons better and react to shots fired

//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_6(_shooter,_weapon,_muzzle,_mode,_ammo,_magazine);
GVAR(fired) = true;

private ["_cfg","_snda","_snd","_range","_k","_sdweap","_sdammo","_distance","_detectupto","_audible","_ammofactor","_burst","_initspeed","_supp","_audiblecoef","_veh"];

// get muzzle config
if (_muzzle == _weapon) then {
	_cfg = configFile>>"cfgWeapons">>_weapon;
} else {
	_cfg = configFile>>"cfgWeapons">>_weapon>>_muzzle;
};

_veh = vehicle _shooter;
_sdweap = false;
_sdammo = false;

//TODO: add check for integral suppressor (config-based); move this to a function
_supp = "";
if (_veh == _shooter) then {
	{	if (_weapon == _x select 0) exitWith {_supp = _x select 1} } forEach (weaponsItems _shooter);
};

_audible = [configFile>>"CfgAmmo">>_ammo>>"audiblefire", "number", 12] call CBA_fnc_getConfigEntry;
if (_supp != "") then {
	_audiblecoef = [configFile>>"cfgWeapons">>_supp>>"ItemInfo">>"AmmoCoef">>"audibleFire","number",1] call CBA_fnc_getConfigEntry;
	_sdweap = _audiblecoef < 0.7;
	_audible = _audible*_audiblecoef;
};

_initspeed = [configFile>>"CfgMagazines">>_magazine>>"initSpeed","number",0] call CBA_fnc_getConfigEntry;
if (_initspeed < 360) then {_sdammo = true};

TRACE_3("CHECK IF SILENCED",_weapon,_sdweap,_sdammo);

if (_sdweap && _sdammo) exitWith {
	GVAR(fired) = nil;
	LOG("silencer and subsonic ammo, exiting");
};

if (_mode != _muzzle) then {
	_cfg = _cfg>>_mode;
};
if (_sdweap) then {
	if (_mode in ([configFile>>"cfgWeapons">>_supp>>"ItemInfo">>"modes","array",[]] call CBA_fnc_getConfigEntry)) then {
		_cfg = configFile>>"cfgWeapons">>_supp>>"ItemInfo">>_mode;
	};
};

_snda = getArray(_cfg>>"soundbegin");
TRACE_1("Sound probab array",_snda);
if (count _snda < 2) exitWith {
	GVAR(fired) = nil;
	LOG("no sounds defined, exiting");
};
_snd = getArray(_cfg>>(_snda select 0));
TRACE_1("Sound cfg array",_snd);
if (count _snd < 4) exitWith {
	GVAR(fired) = nil;
	LOG("bad sound config, exiting");
};
if (_snd select 0 == "") exitWith {
	GVAR(fired) = nil;
	LOG("empty sound, exiting");
};
_range = _snd select 3;
if (typeName _range != "SCALAR") exitWith {
	GVAR(fired) = nil;
	LOG("sound range not a number, exiting");
};

if (!_sdweap && _range < 200) then { //JSRS has them at 130, since it's for SP will just set a fixed range of 1000 instead
	if (isClass (configFile >> "cfgPatches" >> "JSRS2_Distance")) then {
		if ("" != [configFile>>"cfgWeapons">>_weapon>>"jsrs_soundeffect", "text", ""] call CBA_fnc_getConfigEntry) then {
			_range = 1000;
		};
	};
};

// apply userconfig coefficient
_range = _range * GVAR(gunshothearing);

_ammofactor = _audible / 12;
if (_ammofactor > 1 || _sdweap) then {
	_range = _range * _ammofactor;
};

_burst = [_cfg>>"burst","number",1] call CBA_fnc_getConfigEntry;

if (_burst > 3) then {
	//a little hack to prevent AI gunners from shooting long bursts while turning around
	if (!isPlayer _shooter) then {
		if (_veh == _shooter) then {
			_shooter forceSpeed 0; // stop
		};
	};

	sleep (_burst*2); // reveal with delay, stop to shoot, helps performance too

	if (!isPlayer _shooter) then {
		if (_veh == _shooter) then {
			if (isNil {_shooter getVariable QGVAR(shooting)}) then {
				_shooter forceSpeed -1; // release
			};
		};
	};
};

if (_range < 50) exitWith {
	GVAR(fired) = nil;
	LOG("short sound range, exiting");
};

_detectupto = _range / 1.5; // maximum distance for which calculated knowledge is at least 0.5

if (isPlayer gunner _veh || isPlayer driver _veh) then {
	// for players, reduce the range they're heard from when in forests or houses, to balance against AI's super see-through-things vision
	if ([_veh,"(forest + houses)",4] call FUNC(isNearStuff)) then {
		_detectupto = _detectupto * 0.5;
	};
	if (GVAR(debug) == 1) then {
		hint format["ASR DEBUG: gunshot hearing aid: minimum reveal of 0.5 at max range of %1 meters", _detectupto];
	};
};

{
	if (group _x != group _shooter) then {
		_distance = _veh distance _x;
		// gain knowledge based on weapon sound and range
		_k = 1.5 * (1 - _distance/_range);
		// when in forest, not so accurate
		if ([_x,"(forest + houses)",4] call FUNC(isNearStuff)) then {
			_k = _k * 0.5;
		};
		_x reveal [_veh,_k];
		TRACE_3("unit hears this shooter",_x,_veh,_k);
	};
} forEach (_veh nearEntities [["CAManBase","StaticWeapon"],_detectupto]);

sleep 5; if (!isMultiplayer) then {sleep 10};

GVAR(fired) = nil;
