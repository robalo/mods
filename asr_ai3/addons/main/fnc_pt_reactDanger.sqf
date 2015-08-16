
_unit = _this select 0;
_dangerCausedBy = _this select 1;
_dangerCause = _this select 2;
_grp = group _unit;
_time = diag_ticktime;

        //format ["danger, was ready %1, time %2 vs time %3", unitReady _unit, _time, _unit getVariable [QGVAR(DT),0]] call BIS_fnc_log;
if (unitReady _unit && {!isPlayer _unit} && {_time > (_unit getVariable [QGVAR(DT),0])}) then {
    //am I in building?
    if(_unit call FUNC(pt_isUnderRoof)) then {
        //format ["inStruct"] call BIS_fnc_log;
        [_unit, _dangerCausedBy, _dangerCause] call FUNC(pt_inStruct);
    } else {
        //format ["outStruct"] call BIS_fnc_log;
        [_unit, _dangerCausedBy, _dangerCause] call FUNC(pt_outStruct);
    };
};
if(_unit == leader _unit && _unit getVariable ["ATK_PEND", 0] == 0) then {
    _unit  setVariable ["ATK_PEND",1,false];
    _unit  setVariable ["ATTACKER_POS",(getPosATL _dangerCausedBy)],false];
    //format ["attackCalled"] call BIS_fnc_log;
    [_unit, getPosATL _dangerCausedBy] call FUNC(pt_attack);
};

//add reset for unitPos so that they will not get stuck down
if(_unit getVariable ["POS_RESET_PEND", 0] == 0) then {
    _unit  setVariable ["POS_RESET_PEND",1,false];
    [_unit] call FUNC(pt_resetUnitPos);
};