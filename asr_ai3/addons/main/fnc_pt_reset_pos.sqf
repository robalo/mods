
#include "script_component.hpp"
private ["_unit", "_timeSleep"];
PARAMS_2(_unit, _originalCallTime);

//check what time we're supposed to reset
_timeSleep = (_unit getVariable [QGVAR(RT), 0]);
_unit setVariable [QGVAR(RT), -1, false];

if(_timeSleep == 0) exitWith {
    
};
//not yet time, sleep until then
if(time < (_originalCallTime + _timeSleep)) then {
    [_unit, _timeSleep, _originalCallTime] spawn {
        sleep (_this select 1);
        //then restart
        [_this select 0, _this select 2] call FUNC(pt_reset_pos);
    };
}else {
    _unit setUnitPos "AUTO";
    _unit  setVariable [QGVAR(POS_RESET_PEND),0,false];
};