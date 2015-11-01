
#include "script_component.hpp"
_unit = _this select 0;
_dangerCausedBy = _this select 1;
_dangerCause = _this select 2;


if(((_unit targetKnowledge _dangerCausedBy select 5) < 6)) then {
    if([_unit, _dangerCausedBy] call FUNC(pt_checkVis)) then {
        [_unit, _dangerCausedBy, _dangerCause] call FUNC(pt_reactDanger_inStruct_amVis);
    }else {
        //was hit
        if(_dangerCause == 2) then {
            [_unit, true] call FUNC(pt_downPos);
            _unit  setVariable [QGVAR(DT),time + GVAR(DT_IN_STRUCT_HIT),false];
            _unit  setVariable [QGVAR(RT),GVAR(RT_IN_STRUCT_HIT),false];

            if(_unit == leader _unit) then {
                _unit  setVariable [QGVAR(AT),time + GVAR(AT_IN_STRUCT_HIT),false];
                _unit  setVariable [QGVAR(AD),GVAR(AD_IN_STRUCT_HIT),false];
            };
        }else {
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
};