//enhances awareness, enabling AI to react to munitions

//#define DEBUG_MODE_FULL

#define __RANGE_FAR 1000
#define __RANGE_MEDIUM 500
#define __RANGE_CLOSE 50
#define __RANGE_MINIMUM 50

#include "script_component.hpp"
PARAMS_7(_shooter,_weapon,_muzzle,_mode,_ammo,_magazine,_projectile);
private ["_early","_range","_timeout","_exPos","_distance","_lastime","_veh"];

// determine range based on ammo type
// for smoke and flares, alert shortly after getting fired, instead of waiting for the projectile to self-destruct // also don't hide from these ones even if they land close
_early = false;
_range = 0;

switch (true) do {
	case (_ammo isKindOf "MissileCore"): {
		_range = __RANGE_MEDIUM;
	};
	case (_ammo isKindOf "BombCore"): {
		_range = __RANGE_FAR;
	};
	case (_ammo isKindOf "RocketCore"): {
		_range = __RANGE_MEDIUM;
	};
	case (_ammo isKindOf "ShellCore"): {
		_range = __RANGE_FAR;
	};
	case (_ammo isKindOf "SubmunitionCore"): {
		_range = __RANGE_FAR;
	};
	case (_ammo isKindOf "ShotDeployCore"): {
		_range = __RANGE_MEDIUM;
	};
	case (_ammo isKindOf "FlareCore"): {
		_range = __RANGE_MEDIUM;
		_early = true;
	};
	case (_ammo isKindOf "SmokeShellCore"): {
		_range = __RANGE_CLOSE;
		_early = true;
	};
	case (_ammo isKindOf "GrenadeBase"): {
		_range = __RANGE_MEDIUM;
	};
	case (_ammo isKindOf "TimeBombCore"): {
		_range = __RANGE_MEDIUM;
	};
	case (_ammo isKindOf "FuelExplosion"): {
		_range = __RANGE_FAR;
	};
	case (_ammo isKindOf "Grenade"): {
		_range = __RANGE_MEDIUM;
		if (_ammo isKindOf "GrenadeHand_stone") then {
			_range = __RANGE_CLOSE;
		};
		if (_ammo isKindOf "SmokeShell") then {
			_range = __RANGE_CLOSE;
			_early = true;
		};
	};
};

if (_range < __RANGE_MINIMUM) exitWith {
	TRACE_1("short range, exiting",_range);
};

if (_early) then {
	_timeout = time + ([configFile>>"CfgAmmo">>_ammo>>"timetolive", "number", 1] call CBA_fnc_getConfigEntry)/4;
};

scopeName "main";

switch (_weapon) do {
	case "Throw": {
		while {alive _projectile} do {
			_exPos = getPosATL _projectile;
			sleep 1;
			if (_early) then {
				if (time > _timeout) then {breakTo "main"};
			};
		};
	};
	case "Put": {
		_exPos = getPosATL _projectile;
		while {alive _projectile} do {
			sleep 3;
		};
	};
	default {
		while {alive _projectile} do {
			_exPos = getPosATL _projectile;
			sleep 0.075;
			if (_early) then {
				if (time > _timeout) then {breakTo "main"};
			};
		};
	};
};

if (isNil "_exPos") exitWith {LOG("could not find explosive's position, exiting")};

_veh = vehicle _shooter;
if (isPlayer gunner _veh || isPlayer driver _veh) then {
	if (GVAR(debug) == 1) then {
		hintSilent format["ASR DEBUG: explosion hearing aid: alerting units in range of %1 meters from explosion", _range];
	};
};

{
	if (group _x != group _shooter && !isPlayer _x && !isPlayer (leader _x)) then {
		sleep (0.5 + random 1);
		if (behaviour _x == "SAFE") then {_x setBehaviour "AWARE"};
		if (random 3 > 1) then {_x lookAt _exPos;	_x doWatch _exPos};
		_distance = _exPos distance _x;
		TRACE_3("Unit hears this explosion",_x,_ammo,_distance);
		if (_distance < 150 && !_early) then {
			if (_x == vehicle _x) then { // for units not in vehicles or static weapons
				_lastime = _x getVariable [QGVAR(lastMoveToCoverTime),-120];
				if (time > _lastime + 120) then {
					if (_x == leader _x || random 5 > 1) then {
						[_x,objNull,time,100] call FUNC(moveToCover);
						_x setVariable [QGVAR(lastMoveToCoverTime),time];
					};
				};
			};
			if (behaviour _x == "AWARE") then {waitUntil {unitReady _x}; _x setBehaviour "COMBAT"};
		};
	};
} forEach (_exPos nearEntities [["CAManBase","StaticWeapon"],_range]);
