// unit throws smoke towards the closest known enemy (if there is one) if it's not busy doing something else
//#define DEBUG_MODE_FULL
#include "script_component.hpp"

PARAMS_1(_unit);
DEFAULT_PARAM(1,_wait,1);
private ["_cant","_smokemuz","_smokeshell","_smokeveh","_nearestEnemy","_hasSmoke","_smokepos","_dangerpos","_anim","_pos","_dir","_throwdist"];

GVAR(smokin) = true;

_cant = {
	private "_ret";
	_ret = 0 == [configfile>>"CfgMovesMaleSdr">>"States">>(animationState _this)>>"canPullTrigger", "number", 1] call CBA_fnc_getConfigEntry;
	_ret
};

sleep _wait;
if !(_unit call FUNC(isValidUnitC)) exitWith {GVAR(smokin) = false};
if (primaryWeapon _unit == "") exitWith {GVAR(smokin) = false};

// throw it towards closest known enemy

_nearestEnemy = _unit findNearestEnemy _unit;
if (isNull _nearestEnemy) exitWith {GVAR(smokin) = false};

_hasSmoke = _unit call FUNC(hasSmoke);
if (count _hasSmoke != 2) exitWith {GVAR(smokin) = false};

_anim = switch (stance _unit) do {
	case "STAND": {"AwopPercMstpSgthWrflDnon_Start1"};
	case "CROUCH": {"AwopPknlMstpSgthWrflDnon_Start"};
	case "PRONE": {"AwopPpneMstpSgthWrflDnon_Start"};
	default {""};
};
if (_anim == "") exitWith {GVAR(smokin) = false};

if (_unit call _cant) exitWith {GVAR(smokin) = false};

TRACE_4("",_unit,_nearestEnemy,_hasSmoke,_anim);
_smokemuz = _hasSmoke select 0;
_smokeshell = _hasSmoke select 1;
_smokeveh = [configfile>>"CfgMagazines">>_smokeshell>>"ammo", "text", ""] call CBA_fnc_getConfigEntry;
TRACE_4("THROWING",_unit,_smokemuz,_smokeshell,_smokeveh);
_dangerpos = _unit getHideFrom _nearestEnemy;
if (_unit distance _dangerpos > 50) then {
	_smokepos = [_unit, 2, ([_unit, _dangerpos] call BIS_fnc_dirTo)] call BIS_fnc_relPos;
	_unit doTarget _nearestEnemy;
	_unit doWatch _smokepos;
	_unit selectWeapon _smokemuz;
	_unit playMoveNow _anim;
	//_unit fire [_smokemuz,_smokemuz,_smokeshell];
	#ifndef DEBUG_MODE_FULL
	_unit removeMagazine _smokeshell;
	#endif
	_pos = getPosATL _unit;
	_dir = direction _unit;
	waitUntil {animationState _unit != _anim};
	if !(_unit call _cant) then {
		_throwdist = 7 + floor random 8;
		_pos = [(_pos select 0) + _throwdist*sin _dir, (_pos select 1) + _throwdist*cos _dir, (_pos select 2) + 1 + random 2];
	};
	_unit doWatch objNull;
	sleep 2; _smoke = _smokeveh createVehicle _pos;
};

sleep 10;
GVAR(smokin) = false;
