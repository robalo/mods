
_amVis = compile preprocessFile  "fnc_pt_checkVis.sqf";
_inStruct_amVis = compile preprocessFile  "fnc_pt_reactDanger_inStruct_amVis.sqf";
_downPos = compile preprocessFile  "fnc_pt_downPos.sqf";


_unit = _this select 0;
_dangerCausedBy = _this select 1;
_dangerCause = _this select 2;


if(_unit knowsAbout _dangerCausedBy > GVAR(AI_KNOWLEDGE_THRESHOLD)) then {
    format ["inStruct knows about danger"] call BIS_fnc_log;
    if([_unit, _dangerCausedBy] call _amVis) then {
    
        format ["inStruct knows about danger, and is in vis"] call BIS_fnc_log;
        [_unit, _dangerCausedBy, _dangerCause] call _inStruct_amVis;
    }else {
        //was hit
        if(_dangerCause == 0) then {
            format ["inStruct was hit"] call BIS_fnc_log;
            [_unit] call _downPos;
            _unit  setVariable [QGVAR(DT),diag_ticktime + GVAR(DT_IN_STRUCT_HIT),false];
            _unit  setVariable [QGVAR(RT),GVAR(RT_IN_STRUCT_HIT),false];

            if(_unit == leader _unit) then {
                _unit  setVariable [QGVAR(AT),GVAR(AT_IN_STRUCT_HIT),false];
                _unit  setVariable [QGVAR(AD),GVAR(AD_IN_STRUCT_HIT),false];
            };
        }else {
            format ["inStruct was not hit"] call BIS_fnc_log;
            _unit  setVariable [QGVAR(DT),diag_ticktime + GVAR(DT_IN_STRUCT_NOT_HIT),false];
            if(_unit == leader _unit) then {
                _unit  setVariable [QGVAR(AT),GVAR(AT_IN_STRUCT_NOT_HIT,false];
                _unit  setVariable [QGVAR(AD),GVAR(AD_IN_STRUCT_NOT_HIT,false];
            };
        }
    };
}else {
    format ["inStruct does not know of enemy"] call BIS_fnc_log;
    [_unit] call _downPos;
    _unit  setVariable [QGVAR(DT),diag_ticktime + GVAR(DT_IN_STRUCT_UNKNOWN_ENEMY),false];
    _unit  setVariable [QGVAR(RT),GVAR(RT_IN_STRUCT_UNKNOWN_ENEMY),false];
    if(_unit == leader _unit) then {
        _unit  setVariable [QGVAR(AD),0,false];
        _unit  setVariable [QGVAR(AT),0,false];
    };
};