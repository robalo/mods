//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_unit);

if (!isNull _unit && {alive _unit} && {!(_unit getVariable ["asr_ai_exclude", false])}) then {

    if (_unit == leader _unit) then {
        private "_grp";
        _grp = group _unit;
        if (_grp getVariable [QGVAR(initgroupsize), -1] == -1) then {_grp setVariable [QGVAR(initgroupsize), count units _grp]};
    };

    if (GVAR(setskills) > 0) then {_unit call FUNC(setUnitSkill)};
	if (GVAR(packNVG) == 1) then {_unit call FUNC(setupGear)};

    if (GVAR(copymystance) == 1 && {isPlayer leader _unit}) then {
        _unit spawn {
            private ["_lead"];
            while {alive _this} do {
                _lead = leader _this;
                if (isPlayer _lead && !isPlayer _this) then {
                    switch (stance _lead) do {
                        case "CROUCH": {_this setUnitPosWeak "MIDDLE"};
                        case "PRONE": {_this setUnitPosWeak "DOWN"};
                        default {_this setUnitPosWeak "AUTO"};
                    };
                };
                sleep 2;
            };
        };
    };

    _unit setVariable [QGVAR(configured),true];

};
