//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_2(_group,_range);
private ["_leader","_faction","_rg"];
_leader = leader _group;
_faction = faction _leader;
_rg =	[getposATL _leader, allGroups, _range, {_x != _group && {faction (leader _x) == _faction}}] call FUNC(getNearest);
TRACE_3("Friendlies around",_group,_faction,_rg);
_rg
