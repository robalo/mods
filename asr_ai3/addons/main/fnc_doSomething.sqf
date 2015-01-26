//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_4(_unit,_grp,_dangerCausedBy,_dangerUntil);

private ["_fne","_leader","_cwp","_coverRange"];
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
	} forEach (_unit nearTargets 600);
};

_leader = leader _grp;
if (isPlayer _leader) exitWith {}; // exit if busy or leader is player 

_coverRange = 150;

// check if not already doing something or GAIA has control
if (GVAR(reactions) > 0 && {_grp getVariable [QGVAR(reacting),-1] < diag_ticktime} && {count (_grp getVariable ["GAIA_zone_intend",[]]) == 0}) then {

	if (currentWaypoint _grp == count waypoints _grp) then { // no active wp, do something

		// mount weapons
		if (random 1 < GVAR(getinweapons)) then {_grp call FUNC(getInWeapons)};

		//check force balance
		if (_leader call FUNC(enemyForce) > 0.6) then { // outnumbered

			_grp setVariable [QGVAR(reacting),(diag_ticktime + 600 + random 1200)];
			_grp spawn {
				sleep (10 + random 20);
				if (count (_this call CBA_fnc_getAlive) == 0) exitWith {};
				_this setCombatMode "GREEN";
				_this enableAttack false;
				[_this,150,600] spawn FUNC(checkHouses); // hide inside houses - the purpose of this has changed, need to rework it
			};

		} else { // go to work

			_grp setVariable [QGVAR(reacting),(diag_ticktime + 120 + random 240)];
			_grp spawn {
				sleep (10 + random 20);
				if (count (_this call CBA_fnc_getAlive) == 0) exitWith {};

				scopename "support";
				private ["_fg","_dest","_leader","_enemy"];
				_fg = [_this,GVAR(radiorange)] call FUNC(nearFactionGroups); TRACE_2("friendly groups nearby",_this,_fg);
				if (count _fg > 0 && {random 1 > 0.6}) then { // support
					{ // reinforce friendlies in trouble
						if (({damage _x > 0.1} count units _x) > 1) then {
							_dest = getPosATL leader _x;
							[_this, _dest, 30, "MOVE", "COMBAT", "YELLOW", "FULL"] call CBA_fnc_addWaypoint;
							[_this, _dest, 30, "SAD", "COMBAT", "RED", "NORMAL"] call CBA_fnc_addWaypoint;
							breakTo "support";
						};
					} forEach _fg;
				} else { // attack
					_leader = leader _this;
					_enemy = _leader findNearestEnemy _leader;
					if (!isNull _enemy) then {
						_dest = getPosATL _enemy;
						[_this, _dest, 10, "SAD", "COMBAT", "RED", "NORMAL"] call CBA_fnc_addWaypoint;
					};
				};
			};

		};//go to work

	} else {
		// group busy with something, shorten range to check for cover
		_coverRange = 30;
	};

};//react

// check for cover near and divert
[_unit,_dangerCausedBy,_dangerUntil,_coverRange] call FUNC(moveToCover);
