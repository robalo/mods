//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_2(_grp,_info);
private ["_leader","_recgroups"];
_leader = leader _grp;
if (_leader call FUNC(isValidUnit)) then {
	if (_leader knowsAbout _info > 1) then {
		if (!(_grp getVariable [QGVAR(sending), false])) then { // not busy talking
			if (_grp call FUNC(hasRadio)) then { // have radio in group
				_grp setVariable [QGVAR(sending),true];
				// get all groups on the same side on comms
				_recgroups = [getposATL _leader, allGroups, GVAR(radiorange), {_x != _grp && _x call FUNC(hasRadio) && side _leader == side _x}] call FUNC(getNearest);
				TRACE_2("Groups in range of unit",_recgroups,_leader);
				if (count _recgroups > 0) then {
					sleep (10 + random 20); // sending info takes a little time
					{[_leader, _x, _info] call FUNC(sendInfo)} forEach _recgroups; // broadcast; I don't know if they should spend more time
				}; // done sending
				_grp setVariable [QGVAR(sending),false];
			};
		};
	};
};
