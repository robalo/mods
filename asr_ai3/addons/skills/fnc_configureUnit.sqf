//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];

if (_unit call FNCMAIN(isValidUnit)) then {
    _unit call FUNC(setUnitCamo);
    if (GVAR(setskills)) then {_unit call FUNC(setUnitSkill)};
    _unit setVariable [QGVAR(configured), true];
};
