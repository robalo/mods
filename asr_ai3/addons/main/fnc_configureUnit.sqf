//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];

if (_unit call FUNC(isValidUnit)) then {
    _unit call FUNC(setUnitCamo);
    if (GVAR(setskills)) then {_unit call FUNC(setUnitSkill)};
    _unit addEventHandler ["HandleDamage", FUNC(handleDamage)]; // no longer needed since 1.68 changelog said; update: still needed
    _unit setVariable [QGVAR(configured),true];
};
