
#include "script_component.hpp"
private ["_unit", "_timeSleep"];
_unit = _this select 0;

//check what time we're supposed to reset
_timeSleep = (_unit getVariable [QGVAR(RT), 0]);
    format ["resetPos called, %1", _timeSleep] call BIS_fnc_log;
if(_timeSleep == 0) exitWith {
    
};
//not yet time, sleep until then
if(time < _timeSleep) then {
    [_unit, _timeSleep] spawn {
        
    format ["resetPos sleeping, %1", ((_this select 1) - time)] call BIS_fnc_log;
        sleep ((_this select 1) - time);
        //then restart
    format ["resetPos done sleeping"] call BIS_fnc_log;
        [_this select 0] call FUNC(pt_reset_pos);
    };
}else {
    format ["resetPos resetting"] call BIS_fnc_log;
    _unit setUnitPos "AUTO";
    _unit  setVariable [QGVAR(POS_RESET_PEND),0,false];
};