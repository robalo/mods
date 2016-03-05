//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];

if (!isNull _unit && {alive _unit} && {!(_unit getVariable ["asr_ai_exclude", false])}) then {

    if (_unit == leader _unit) then {
        private "_grp";
        _grp = group _unit;
        if (_grp getVariable [QGVAR(initgroupsize), -1] == -1) then {_grp setVariable [QGVAR(initgroupsize), count units _grp]};
    };

    if (GVAR(setskills) > 0) then {_unit call FUNC(setUnitSkill)};

    if (isPlayer leader _unit) then {
        if (GVAR(disableAIPGfatigue) > 0) then {_unit enableFatigue (isPlayer _unit)};
    };

    _unit setVariable [QGVAR(configured),true];

};
