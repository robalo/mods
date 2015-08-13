
_unit = _this select 0;
_dangerCausedBy = _this select 1;
_dangerCause = _this select 2;
_grp = group _unit;
_time = diag_ticktime;
_isUnderRoof = compile preprocessFile "fnc_isUnderRoof.sqf";
_inStruct = compile preprocessFile "fnc_pt_reactDanger_inStruct.sqf";
_outStruct = compile preprocessFile "fnc_pt_reactDanger_outStruct.sqf";
_attack = compile preprocessFile "fnc_pt_reactDanger_attack.sqf";
_resetUnitPos = compile preprocessFile "fnc_pt_reset_pos.sqf";

        format ["danger, was ready %1, time %2 vs time %3", unitReady _unit, _time, _unit getVariable ["DT",0]] call BIS_fnc_log;
if (unitReady _unit && {!isPlayer _unit} && {_time > (_unit getVariable ["DT",0])}) then {
    //am I in building?
    if(_unit call _isUnderRoof) then {
        format ["inStruct"] call BIS_fnc_log;
        [_unit, _dangerCausedBy, _dangerCause] call _inStruct;
    } else {
        format ["outStruct"] call BIS_fnc_log;
        [_unit, _dangerCausedBy, _dangerCause] call _outStruct;
    };
};
if(_unit == leader _unit && _unit getVariable ["ATK_PEND", 0] == 0) then {
    _unit  setVariable ["ATK_PEND",1,false];
    format ["attackCalled"] call BIS_fnc_log;
    [_unit, getPosATL _dangerCausedBy] call _attack;
};

//add reset for unitPos so that they will not get stuck down

    format ["resetPos pre-precall"] call BIS_fnc_log;
if(_unit getVariable ["POS_RESET_PEND", 0] == 0) then {

    format ["resetPos precall"] call BIS_fnc_log;
    _unit  setVariable ["POS_RESET_PEND",1,false];
    [_unit] call _resetUnitPos;
};