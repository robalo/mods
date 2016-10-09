//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit","_damage"];

if (GVAR(fallDown) && {local _unit} && {_damage > 0.1} && {_unit call FUNC(isValidUnitC)}) then {
    [_unit] spawn FUNC(fallDown);
};
