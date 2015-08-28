
#include "script_component.hpp"

private ["_unit", "_dangerCause", "_dangerCausedBy"];
_unit = _this select 0;
_dangerCausedBy = _this select 1;
_dangerCause = _this select 2;


if(_unit knowsAbout _dangerCausedBy > GVAR(AI_KNOWLEDGE_THRESHOLD)) then {
    //format ["inStruct knows about danger"] call BIS_fnc_log;
    if([_unit, _dangerCausedBy] call FUNC(pt_checkVis)) then {
    
        //format ["inStruct knows about danger, and is in vis"] call BIS_fnc_log;
        [_unit, _dangerCausedBy, _dangerCause] call FUNC(pt_reactDanger_inStruct_amVis);
    }else {
        //was hit
        if(_dangerCause == 2) then {
            //format ["inStruct was hit"] call BIS_fnc_log;
            [_unit, true] call FUNC(pt_downPos);
            _unit  setVariable [QGVAR(DT),time + GVAR(DT_IN_STRUCT_HIT),false];
            _unit  setVariable [QGVAR(RT),GVAR(RT_IN_STRUCT_HIT),false];

            if(_unit == leader _unit) then {
                _unit  setVariable [QGVAR(AT),time + GVAR(AT_IN_STRUCT_HIT),false];
                _unit  setVariable [QGVAR(AD),GVAR(AD_IN_STRUCT_HIT),false];
            };
        }else {
            //format ["inStruct was not hit"] call BIS_fnc_log;
            _unit  setVariable [QGVAR(DT),time + GVAR(DT_IN_STRUCT_NOT_HIT),false];
            if(_unit == leader _unit) then {
                _unit  setVariable [QGVAR(AT),time + GVAR(AT_IN_STRUCT_NOT_HIT),false];
                _unit  setVariable [QGVAR(AD),GVAR(AD_IN_STRUCT_NOT_HIT),false];
            };
        }
    };
}else {
        if(_dangerCause == 2) then {
            [_unit, true] call FUNC(pt_downPos);
        } else {
            [_unit, false] call FUNC(pt_downPos);
        };
        
        _unit  setVariable [QGVAR(DT),time + GVAR(DT_IN_STRUCT_UNKNOWN_ENEMY),false];
        _unit  setVariable [QGVAR(RT),GVAR(RT_IN_STRUCT_UNKNOWN_ENEMY),false];
        if(_unit == leader _unit) then {
            _unit  setVariable [QGVAR(AD),0,false];
            _unit  setVariable [QGVAR(AT),0,false];
        };
    //format ["inStruct does not know of enemy"] call BIS_fnc_log;
};