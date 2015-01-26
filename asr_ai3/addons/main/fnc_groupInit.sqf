//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_grp);
if (_grp getVariable [QGVAR(initgroupsize), -1] == -1) then {_grp setVariable [QGVAR(initgroupsize), count units _x]};
/*
// leader usually stays put a bit more while ordering the team to move around, make use of this "feature"
if ({isPlayer _x} count (units _grp) > 0) exitWith {};
private ["_wpntype","_leader"];
_leader = leader _grp;
{
	_wpntype = (primaryWeapon _x) call FUNC(getWeaponType);
	if (_wpntype == "SNIPER" || _wpntype == "MG" || _wpntype == "AR") exitWith {
		if (_x != _leader) then {
			if (local _leader) then {
				_grp selectLeader _x;
			} else {
				[[_x], QUOTE(FUNC(selectLeader)), _leader, false, true] call BIS_fnc_MP;
			};
		};
	};
} forEach units _grp;
*/