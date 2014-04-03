// if no player in group and no waypoints active, experiment with some random reactions
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_4(_unit,_grp,_dangerCausedBy,_dangerUntil);

if ({isPlayer _x} count (units _grp) > 0) exitWith {}; // not if player in group

if (_grp getVariable [QGVAR(reacting),0] < diag_ticktime) then { // what to do ?

	if (currentWaypoint _grp > 0 && currentWaypoint _grp < count waypoints _grp) then { // going somewhere ?
		if (GVAR(seekcover) == 1) then { // check for cover near and divert
			_grp lockwp true;
			[_unit,_dangerCausedBy,_dangerUntil,50] call FUNC(moveToCover);
		};
		if (random 1 < GVAR(usebuildings)) then { // use building
			[_grp] spawn FUNC(checkHouses);
		};
	} else { // do something
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

} else { // already doing something, do better

	if (GVAR(seekcover) == 1) then { // check for cover near and divert
		_grp lockwp true;
		[_unit,_dangerCausedBy,_dangerUntil,50] call FUNC(moveToCover);
	};
	if (random 1 < GVAR(usebuildings)) then { // use building
		[_grp] spawn FUNC(checkHouses);
	};

};
