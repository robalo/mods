//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_3(_unit,_dangerCausedBy,_dangerUntil);

private ["_fne","_coverRange","_grp"];
scopeName "main";

// if no target, pick one!
if (isNull assignedTarget _unit) then {
	{
		if ((side _unit) getFriend (_x select 2) < 0.6) then {
			_fne = _unit findNearestEnemy (_x select 0);
			_unit doTarget _fne;
			breakTo "main";
		};
	} forEach (_unit nearTargets 300);
};

_grp = group _unit;

if (unitReady _unit && {{isPlayer _x} count units _grp == 0}) then {
	// mount weapons
	if (random 1 < GVAR(getinweapons)) then {_grp call FUNC(getInWeapons)};

	// check for cover near and divert
	_coverRange = if (currentWaypoint _grp == count waypoints _grp) then {100} else {20};
	[_unit,_dangerCausedBy,_dangerUntil,_coverRange] call FUNC(moveToCover);
};
