//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_pos", ["_withRadio", false]];
doStop _unit;
if (_withRadio) then {
    _unit commandMove _pos;
} else {
    _unit doMove _pos;
};
_unit moveTo _pos;
_unit setDestination [_pos, "LEADER DIRECT", true];
