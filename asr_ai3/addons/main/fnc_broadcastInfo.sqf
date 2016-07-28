//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_grp", "_info"];
private _leader = leader _grp;
// if leader valid and not already sending and has radio
if (_leader call FUNC(isValidUnitC) && {!(_grp getVariable [QGVAR(sending), false])} && _grp call FUNC(hasRadio)) then {
	_grp setVariable [QGVAR(sending),true];
	// get all groups on the same side on comms
	private _recgroups = [getposATL _leader, allGroups, GVAR(radiorange), {_x != _grp && {_x call FUNC(hasRadio)} && {side _leader == side _x}}] call FUNC(getNearest);
	TRACE_2("Groups in range of unit",_recgroups,_leader);
	if (count _recgroups > 0) then {
		sleep (GVAR(rrdelaymin) + random GVAR(rrdelayplus)); // delay sending info
		if (_leader call FUNC(isValidUnitC)) then {
			{[_leader, _x, _info] call FUNC(sendInfo)} forEach _recgroups; // broadcast; I don't know if they should spend more time
		};
	}; // done sending
	_grp setVariable [QGVAR(sending),false];
};
