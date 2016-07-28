//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_group", "_range"];
private _leader = leader _group;
private _faction = faction _leader;
private _rg = [getposATL _leader, allGroups, _range, {_x != _group && {faction (leader _x) == _faction}}] call FUNC(getNearest);
TRACE_3("Friendlies around",_group,_faction,_rg);
_rg
