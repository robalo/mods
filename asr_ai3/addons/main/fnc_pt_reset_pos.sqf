//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private ["_unit", "_timeSleep"];
_unit = _this select 0;
_originalCallTime = _this select 1;

//check what time we're supposed to reset
_timeSleep = (_unit getVariable [QGVAR(RT), 0]);
_unit setVariable [QGVAR(RT), -1, false];

if(_timeSleep == 0) exitWith {
    
};
//not yet time, sleep until then

TRACE_1("reset sleeping for: ", _unit);
if(time < (_originalCallTime + _timeSleep)) then {
    [_unit, _timeSleep, _originalCallTime] spawn {
        sleep (_this select 1);
        //then restart
        [_this select 0, _this select 2] call FUNC(pt_reset_pos);
    };
}else {
    TRACE_1("resetting: ", _unit);
    _unit setUnitPos "AUTO";
    _unit setVariable [QGVAR(POS_RESET_PEND),0,false];
    _unit doMove getPosATL _unit;
    [_unit, "resetting pos"] call FUNC(pt_setStatusText);
};
