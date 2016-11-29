//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];

if (_unit call FUNC(isValidUnit)) then {
    if (GVAR(setskills)) then {_unit call FUNC(setUnitSkill)};
    _unit addEventHandler ["HandleDamage", FUNC(handleDamage)];
    _unit setVariable [QGVAR(configured),true];
};
