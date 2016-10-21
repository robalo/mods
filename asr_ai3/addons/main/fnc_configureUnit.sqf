//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];

if (_unit call FUNC(isValidUnit)) then {

    if (_unit == leader _unit) then {
        private _grp = group _unit;
        if (_grp getVariable [QGVAR(initgroupsize), -1] == -1) then {_grp setVariable [QGVAR(initgroupsize), count units _grp]};
    };

    if (GVAR(setskills)) then {_unit call FUNC(setUnitSkill)};
    _unit addEventHandler ["HandleDamage", FUNC(handleDamage)];
    _unit setVariable [QGVAR(configured),true];
};
