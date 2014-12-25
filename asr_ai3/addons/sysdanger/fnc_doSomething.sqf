// if no player in group and no waypoints active, experiment with some random reactions
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_4(_unit,_grp,_dangerCausedBy,_dangerUntil);

private ["_fne","_cwp"];
scopeName "main";

_unit doWatch _dangerCausedBy;

//if no target, pick one!
if (isNull assignedTarget _unit) then {
	{
		if ((side _unit) getFriend (_x select 2) < 0.6) then {
			_fne = _unit findNearestEnemy (_x select 0);
			_unit doTarget _fne;
			breakTo "main";
		};
	} forEach (_unit nearTargets 1000);
};

if ({isPlayer _x} count (units _grp) > 0 || !unitReady _unit) exitWith {}; // not if player or unit is busy

if (_grp getVariable [QGVAR(reacting),0] < diag_ticktime) then { // what to do ?

	_cwp = currentWaypoint _grp;
	if (_cwp > 0 && _cwp < count waypoints _grp) then { // going somewhere ?
		if (GVAR(seekcover) == 1 && isNil QGVAR(mToCover) && waypointType [_grp,_cwp] != "HOLD") then { // check for cover near and divert
			[_unit,_dangerCausedBy,_dangerUntil,50] call FUNC(moveToCover);
		};
		if (random 1 < GVAR(usebuildings)) then { // use building
			[_grp] spawn FUNC(checkHouses);
		};
	} else { // do something -- skip if GAIA
		if (count (_grp getVariable ["GAIA_zone_intend",[]]) == 0) then {
			switch (round random 3) do {
				case 0: { // attack
					if (GVAR(reactions) select 0 == 1) then {
						[_grp,"attack"] spawn FUNC(reaction);
					};
				};
				case 1: { // defend
					if (GVAR(reactions) select 1 == 1) then {
						[_grp,"defend"] spawn FUNC(reaction);
					};
				};
				case 2: { // support
					if (GVAR(reactions) select 2 == 1) then {
						[_grp,"support"] spawn FUNC(reaction);
					};
				};
			};
		};
	};

} else { // already doing something, do better

	if (GVAR(seekcover) == 1 && isNil QGVAR(mToCover)) then { // check for cover near and divert
		[_unit,_dangerCausedBy,_dangerUntil,50] call FUNC(moveToCover);
	};
	if (random 1 < GVAR(usebuildings)) then { // use building
		[_grp] spawn FUNC(checkHouses);
	};

};
