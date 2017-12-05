//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_local"];

if (isServer) then {
    //reset skills when unit joins/leaves player group in MP
    if (GVAR(setskills)) then {_unit call FUNC(setUnitSkill)};
};
