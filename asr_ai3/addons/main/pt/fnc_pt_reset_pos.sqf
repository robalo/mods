
_unit = _this select 0;

//check what time we're supposed to reset
_timeSleep = (_unit getVariable ["DT", 0]) - diag_ticktime;
_timeSleep = _timeSleep * 2;
if(_timeSleep == 0) exitWith {
    
};
_timeSleep = _timeSleep + diag_ticktime;
format ["resetPos comparing %1, %2", _timeSleep, diag_ticktime] call BIS_fnc_log;
//not yet time, sleep until then
if(diag_ticktime < _timeSleep) then {
    [_unit, _timeSleep] spawn {
        
        format ["resetPos sleeping for %1", (_this select 1) - diag_ticktime] call BIS_fnc_log;
        sleep ((_this select 1) - diag_ticktime);
        format ["resetPos done sleeping"] call BIS_fnc_log;
        //then restart
        _resetUnitPos = compile preprocessFile "fnc_pt_reset_pos.sqf";
        [_this select 0] call _resetUnitPos;
    };
}else {
    format ["resetPos resetting"] call BIS_fnc_log;
    _unit setUnitPos "AUTO";
    _unit  setVariable ["POS_RESET_PEND",0,false];
};