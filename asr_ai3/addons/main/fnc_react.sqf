//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_4(_unit,_grp,_dangerCausedBy,_dangerUntil);

if (isPlayer _unit) exitWith {};

private ["_fne","_coverRange"];
scopeName "main";

//if no target, pick one!
if (!isNull _dangerCausedBy) then {_unit doWatch _dangerCausedBy};
if (isNull assignedTarget _unit) then {
	{
		if ((side _unit) getFriend (_x select 2) < 0.6) then {
			_fne = _unit findNearestEnemy (_x select 0);
			_unit doTarget _fne;
			breakTo "main";
		};
	} forEach (_unit nearTargets 400);
};

if (!unitReady _unit || {{isPlayer _x} count units _grp > 0}) exitWith {}; // exit if busy or player in group

// mount weapons
if (random 1 < GVAR(getinweapons)) then {_grp call FUNC(getInWeapons)};

// check for cover near and divert
_coverRange = if (currentWaypoint _grp == count waypoints _grp) then {150} else {30};
[_unit,_dangerCausedBy,_dangerUntil,_coverRange] call FUNC(moveToCover);
