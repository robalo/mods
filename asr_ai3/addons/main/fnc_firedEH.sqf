// help the AI hear weapons fired
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_shooter", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];
#define _MAXREVEAL_ 1.7

//limit
if (diag_fps < 42 || {isNull _projectile} || {!(_ammo isKindOf "BulletCore")}) exitWith {};

// get muzzle config
private "_cfg";
if (_muzzle == _weapon) then {
	_cfg = configFile>>"cfgWeapons">>_weapon;
} else {
	_cfg = configFile>>"cfgWeapons">>_weapon>>_muzzle;
};

private _veh = vehicle _shooter;

//check weapon and ammo properties
private _sdweap = false;
private _sdammo = false;

private _audible = getNumber (configFile>>"CfgAmmo">>_ammo>>"audiblefire");
private _supp = "";
if (_veh == _shooter) then {
	{ if (_weapon == _x select 0) exitWith {_supp = _x select 1} } forEach (weaponsItems _shooter);
};
if (_supp != "") then {
	private _audiblecoef = getNumber (configFile>>"cfgWeapons">>_supp>>"ItemInfo">>"AmmoCoef">>"audibleFire");
	_sdweap = _audiblecoef < 1;
	_audible = _audible*_audiblecoef;
};
_sdweap = _sdweap || {getNumber (_cfg>>"fireLightIntensity") < 0.1};

private _initspeed = getnumber (configFile>>"CfgMagazines">>_magazine>>"initSpeed");
private _weaponinitspeed = [_cfg>>"initSpeed", "number", 0] call CBA_fnc_getConfigEntry;
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
	if (GVAR(debug_firedeh) && {isPlayer gunner _veh || isPlayer driver _veh}) then {hintSilent "ASR DEBUG: suppressed weapon with subsonic ammo"};
};

//check range
private _range = GVAR(loudrange); // calculated with userconfig coefficient in preinit
private _ammofactor = _audible / 60;
if (_ammofactor > 1 || _sdweap) then {_range = _range * _ammofactor};
if (_range < 200) exitWith {LOG("short sound range, exiting")};

// maximum distance for which calculated knowledge is at least 1
private _detectupto = ceil (_range * (1 - (1/_MAXREVEAL_)));

//reduce in forests/houses/rain/wind
if ([_veh,"(forest + houses + rain + windy)",2] call FUNC(isNearStuff)) then {_detectupto = ceil (_detectupto * 0.75)};

//debug
if (isPlayer gunner _veh || isPlayer driver _veh) then {
	if (GVAR(debug_firedeh)) then {hintSilent format["ASR DEBUG: gunshot hearing aids up to %1 meters", _detectupto]};
};

//alert
{
	if (group _x != group _shooter) then { [_x,_veh,_MAXREVEAL_,_range] call FUNC(reveal) };
} forEach (_veh nearEntities [["SoldierWB","SoldierEB","SoldierGB","StaticWeapon"],_detectupto]);
