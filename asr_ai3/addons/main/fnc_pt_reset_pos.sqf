
_unit = _this select 0;

//check what time we're supposed to reset
_timeSleep = (_unit getVariable [QGVAR(RT), 0]);
if(_timeSleep == 0) exitWith {
    
};
_timeSleep = _timeSleep + diag_ticktime;
//not yet time, sleep until then
if(diag_ticktime < _timeSleep) then {
    [_unit, _timeSleep] spawn {
        sleep ((_this select 1) - diag_ticktime);
        //then restart
        [_this select 0] call FUNC(pt_reset_pos);
    };
}else {
    //format ["resetPos resetting"] call BIS_fnc_log;
    _unit setUnitPos "AUTO";
    _unit  setVariable ["POS_RESET_PEND",0,false];
};