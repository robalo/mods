//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_grp);
private ["_leader","_weapons","_wc","_weap","_mc","_ehid"];
_leader = leader _grp;
_weapons = [getposATL _leader, vehicles, 100, {!(_x isKindOf "Plane" || _x isKindOf "Tank") && {_x call FUNC(canMountAIGunner)}}] call FUNC(getNearest);
TRACE_2("empty weapons",_grp,_weapons);
_wc = count _weapons;
if (_wc > 0) then {
	{ //get some units to man the weapons
		if (_wc > 0 && {_x != _leader} && {random 1 < 0.8}) then {
			DEC(_wc);
			_weap = _weapons select _wc;
			_ehid = _weap getVariable [QGVAR(getInWeaponsEH), -1];
			if (_ehid == -1) then {
				_ehid = _weap addEventHandler ["GetIn", {_this spawn FUNC(getInWeaponsEH)}];
				_weap setVariable [QGVAR(getInWeaponsEH), _ehid];
			};
			_mc = _weap getVariable [QGVAR(mountcount), 0];
			if (_mc < ceil (2 + random 4)) then { // mount up to a few times
				doStop _x;
				_x assignAsGunner _weap;
				[_x] orderGetIn true;
				INC(_mc);
				_weap setVariable [QGVAR(mountcount), _mc];
			};
		};
	} forEach units _grp;
};
