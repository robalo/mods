// help the AI hear weapons fired
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_7(_shooter,_weapon,_muzzle,_mode,_ammo,_magazine,_projectile);
#define _MAXREVEAL_ 1.7

//limit
if (diag_fps < 42 || {isNull _projectile} || {!(_ammo isKindOf "BulletCore")}) exitWith {};

private ["_cfg","_range","_k","_sdweap","_sdammo","_distance","_detectupto","_audible","_ammofactor","_initspeed","_supp","_audiblecoef","_veh","_weaponinitspeed"];

// get muzzle config
if (_muzzle == _weapon) then {
	_cfg = configFile>>"cfgWeapons">>_weapon;
} else {
	_cfg = configFile>>"cfgWeapons">>_weapon>>_muzzle;
};

_veh = vehicle _shooter;

//check weapon and ammo properties
_sdweap = false;
_sdammo = false;

_audible = getNumber (configFile>>"CfgAmmo">>_ammo>>"audiblefire");
_supp = "";
if (_veh == _shooter) then {
	{ if (_weapon == _x select 0) exitWith {_supp = _x select 1} } forEach (weaponsItems _shooter);
};
if (_supp != "") then {
	_audiblecoef = getNumber (configFile>>"cfgWeapons">>_supp>>"ItemInfo">>"AmmoCoef">>"audibleFire");
	_sdweap = _audiblecoef < 1;
	_audible = _audible*_audiblecoef;
};
_sdweap = _sdweap || {getNumber (_cfg>>"fireLightIntensity") < 0.1};

_initspeed = getnumber (configFile>>"CfgMagazines">>_magazine>>"initSpeed");
_weaponinitspeed = [_cfg>>"initSpeed", "number", 0] call CBA_fnc_getConfigEntry;
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

//check range
_range = GVAR(loudrange); // calculated with userconfig coefficient in preinit
_ammofactor = _audible / 12;
if (_ammofactor > 1 || _sdweap) then {_range = _range * _ammofactor};
if (_range < 100) exitWith {LOG("short sound range, exiting")};
//reduce in forests/houses/rain/wind
if ([_veh,"(forest + houses + rain + windy)",2] call FUNC(isNearStuff)) then {_detectupto = ceil (_detectupto * 0.75)};

// maximum distance for which calculated knowledge is at least 1
_detectupto = ceil (_range * (1 - (1/_MAXREVEAL_)));

//debug
if (isPlayer gunner _veh || isPlayer driver _veh) then {
	if (GVAR(debug) == 1) then {hintSilent format["ASR DEBUG: gunshot hearing aids up to %1 meters", _detectupto]};
};

//alert
{

	if (group _x != group _shooter) then {	[_x,_veh,_MAXREVEAL_,_range] call FUNC(reveal) };

} forEach (_veh nearEntities [["SoldierWB","SoldierEB","SoldierGB","StaticWeapon"],_detectupto]);
