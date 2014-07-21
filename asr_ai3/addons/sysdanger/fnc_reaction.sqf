//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_2(_grp,_rtype);
private ["_leader","_enemy","_dest","_weapons","_wc","_weap","_fg"];
_leader = leader _grp;
_grp setVariable [QGVAR(reacting),(diag_ticktime + 60 + random 120)];
//_grp enableAttack false;

sleep (10 + random 20);
if (count (_grp call CBA_fnc_getAlive) == 0) exitWith {};

switch (_rtype) do {
	case "attack": {
		// evaluate strength
		if (_leader call FUNC(enemyForce) < 0.5) then {
			_enemy = _leader findNearestEnemy _leader;
			if (!isNull _enemy) then {
				_dest = getPosATL _enemy;
				[_grp, _dest, 10, "SAD", "COMBAT", "RED", "NORMAL"] call CBA_fnc_addWaypoint;
			};
		} else { // reset
			_grp setVariable [QGVAR(reacting),diag_ticktime];
		};
	};
	case "defend": {
		_grp setCombatMode "GREEN";
		_weapons = [getposATL _leader, vehicles, 100, {_x emptypositions "Gunner" > 0 && !(_x isKindOf "Plane")}] call FNCMAIN(getNearest);
		_wc = count _weapons;
		if (_wc > 0) then {
			{ //get some units to man the weapons
				if (_wc > 0 && _x != _leader) then {
					if (random 1 < 0.5) then {
						_weap = _weapons select (_wc - 1);
						_mc = _weap getVariable [QGVAR(mountcount), 0];
						if (_mc < ceil (2 + random 3)) then { // mount up to a few times
							_x assignasgunner _weap;
							[_x] ordergetin true;
							INC(_mc);
							_weap setVariable [QGVAR(mountcount), _mc];
						};
						DEC(_wc);
					};
				};
			} forEach units _grp;
		} else {
			// get inside some houses
			[_grp,150,600] spawn FUNC(checkHouses); // must replace this with something better
		};
	};
	case "support": {
		scopename "support";
		_fg = [_grp,GVAR(radiorange)] call FNCMAIN(nearFactionGroups); TRACE_2("",_grp,_fg);
		if (count _fg > 0) then	{
			{ // find some friendlies in trouble
				if (({damage _x > 0.1} count units _x) > 1) then {
					_leader = leader _x;
					if (_leader call FUNC(enemyForce) > 0.5) then {
						_dest = getPosATL _leader;
						[_grp, _dest, 30, "SUPPORT", "AWARE", "YELLOW", "FULL"] call CBA_fnc_addWaypoint;
						[_grp, _dest, 30, "SAD", "COMBAT", "RED", "NORMAL"] call CBA_fnc_addWaypoint;
						breakTo "support";
					};
				};
			} forEach _fg;
		} else { // reset
			_grp setVariable [QGVAR(reacting),diag_ticktime];
		};
	};
};
