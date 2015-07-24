//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_unit);
private "_grp";

if (!isNull _unit && {alive _unit} && {!(_unit getVariable ["asr_ai_exclude", false])}) then {

    if (_unit == leader _unit) then {
        _grp = group _unit;
        if (_grp getVariable [QGVAR(initgroupsize), -1] == -1) then {_grp setVariable [QGVAR(initgroupsize), count units _grp]};
    };

    if (GVAR(setskills) > 0) then {_unit call FUNC(setUnitSkill)};
	if (GVAR(packNVG) == 1) then {_unit call FUNC(setupGear)};

    _unit setVariable [QGVAR(configured),true];

};
