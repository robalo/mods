// unit throws smoke towards the closest known enemy (if there is one) if it's not busy doing something else
//#define DEBUG_MODE_FULL
#include "script_component.hpp"

PARAMS_1(_unit);
DEFAULT_PARAM(1,_wait,1);
private ["_cant","_smokemuz","_smokeshell","_nearestEnemy","_hasSmoke","_smokepos","_dangerpos"];
GVAR(smokin) = true;

_cant = {
	private "_ret";
	_ret = 0 == [configfile>>"CfgMovesMaleSdr">>"States">>(animationState _this)>>"canPullTrigger", "number", 1] call CBA_fnc_getConfigEntry;
	_ret
};

sleep _wait;
if !(_unit call FUNC(isValidUnit)) exitWith {GVAR(smokin) = nil};

// throw it towards closest known enemy
_nearestEnemy = _unit findNearestEnemy _unit;
if (!isNull _nearestEnemy) then {
	_hasSmoke = _unit call FUNC(hasSmoke);
	TRACE_3("",_unit,_nearestEnemy,_hasSmoke);
	if (!(_unit call _cant) && count _hasSmoke == 2) then {
		_smokemuz = _hasSmoke select 0;
		_smokeshell = _hasSmoke select 1;
		TRACE_3("THROWING",_unit,_smokemuz,_smokeshell);
		_dangerpos = _unit getHideFrom _nearestEnemy;
		if (_unit distance _dangerpos > 50) then {
			_smokepos = [_unit, 2, ([_unit, _dangerpos] call BIS_fnc_dirTo)] call BIS_fnc_relPos;
			_unit doWatch _smokepos;
			_unit selectWeapon _smokemuz;
			_unit fire [_smokemuz,_smokemuz,_smokeshell];
			_unit doWatch objNull;
		};
	};
};

GVAR(smokin) = nil;
