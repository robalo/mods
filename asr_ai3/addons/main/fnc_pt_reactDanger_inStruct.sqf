
#include "script_component.hpp"
_unit = _this select 0;
_dangerCausedBy = _this select 1;
_dangerCause = _this select 2;


if(_dangerCause == 2) then {

    [_unit, "ducking"] call FUNC(pt_setStatusText);
    [_unit, true] call FUNC(pt_downPos);
    _unit  setVariable [QGVAR(DT),time + GVAR(DT_IN_STRUCT_HIT),false];

    if(_unit == leader _unit) then {
        _unit  setVariable [QGVAR(AT),time + GVAR(AT_IN_STRUCT_HIT),false];
        _unit  setVariable [QGVAR(AD),GVAR(AD_IN_STRUCT_HIT),false];
    };
}else {
    [_unit, "not ducking"] call FUNC(pt_setStatusText);
    _unit  setVariable [QGVAR(DT),time + GVAR(DT_IN_STRUCT_NOT_HIT),false];
    if(_unit == leader _unit) then {
        _unit  setVariable [QGVAR(AT),time + GVAR(AT_IN_STRUCT_NOT_HIT),false];
        _unit  setVariable [QGVAR(AD),GVAR(AD_IN_STRUCT_NOT_HIT),false];
    };
};