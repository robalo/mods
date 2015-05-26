// help the AI hear weapons fired
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_7(_shooter,_weapon,_muzzle,_mode,_ammo,_magazine,_projectile);

if (diag_fps < 45 || {isNull _projectile} || {!(_ammo isKindOf "BulletCore")}) exitWith {};

private ["_cfg","_range","_k","_sdweap","_sdammo","_distance","_detectupto","_audible","_ammofactor","_initspeed","_supp","_audiblecoef","_veh","_firelight","_weaponinitspeed"];

// get muzzle config
if (_muzzle == _weapon) then {
	_cfg = configFile>>"cfgWeapons">>_weapon;
} else {
	_cfg = configFile>>"cfgWeapons">>_weapon>>_muzzle;
};

_veh = vehicle _shooter;
_sdweap = false;
_sdammo = false;

_audible = [configFile>>"CfgAmmo">>_ammo>>"audiblefire", "number", 8] call CBA_fnc_getConfigEntry;
_supp = "";
if (_veh == _shooter) then {
	{ if (_weapon == _x select 0) exitWith {_supp = _x select 1} } forEach (weaponsItems _shooter);
};
if (_supp != "") then {
	_audiblecoef = [configFile>>"cfgWeapons">>_supp>>"ItemInfo">>"AmmoCoef">>"audibleFire","number",1] call CBA_fnc_getConfigEntry;
	_sdweap = _audiblecoef < 1;
	_audible = _audible*_audiblecoef;
};
_firelight = [configFile>>"cfgWeapons">>_weapon>>"fireLightIntensity", "number", 0.2] call CBA_fnc_getConfigEntry;
_sdweap = _sdweap || _firelight < 0.1;

_initspeed = [configFile>>"CfgMagazines">>_magazine>>"initSpeed", "number", 0] call CBA_fnc_getConfigEntry;
_weaponinitspeed = [configFile>>"cfgWeapons">>_weapon>>"initSpeed", "number", 0] call CBA_fnc_getConfigEntry;
switch (true) do {
	case (_weaponinitspeed > 0): {
		_initspeed = _weaponinitspeed;
	};
	case (_weaponinitspeed < 0): {
		_initspeed = (abs _weaponinitspeed) * _initspeed;
	};
};
if (_initspeed < 360) then {_sdammo = true};

TRACE_4("CHECK IF SILENCED",_weapon,_sdweap,_sdammo,_initspeed);

if (_sdweap && _sdammo) exitWith {
	if (GVAR(debug) == 1 && {isPlayer gunner _veh || isPlayer driver _veh}) then {hintSilent "ASR DEBUG: supressed weapon with subsonic ammo"};
};

// apply userconfig coefficient
_range = GVAR(loudrange);

_ammofactor = _audible / 8;
if (_ammofactor > 1 || _sdweap) then {_range = _range * _ammofactor};

if (_range < 100) exitWith {LOG("short sound range, exiting")};

_detectupto = _range / 1.5; // maximum distance for which calculated knowledge is at least 0.5

if (isPlayer gunner _veh || isPlayer driver _veh) then {
	// for players, reduce the range they're heard from when in forests or houses, to balance against AI's super see-through-things vision
	if ([_veh,"(forest + houses)",4] call FUNC(isNearStuff)) then {_detectupto = _detectupto * 0.5};
	if (GVAR(debug) == 1) then {hintSilent format["ASR DEBUG: gunshot hearing aid: minimum reveal of 0.5 at max range of %1 meters", _detectupto]};
};

{
	if (group _x != group _shooter) then {
		_distance = _veh distance _x;
		// gain knowledge based on weapon sound and range
		_k = 1.5 * (1 - _distance/_range);
		// when in forest, not so accurate
		if ([_x,"(forest + houses)",4] call FUNC(isNearStuff)) then {_k = _k * 0.5};
		_x reveal [_veh,_k];
		TRACE_3("unit hears this shooter",_x,_veh,_k);
	};
} forEach (_veh nearEntities [["SoldierWB","SoldierEB","SoldierGB","StaticWeapon"],_detectupto]);
