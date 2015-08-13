
_unit = _this select 0;
_dangerCausedBy = _this select 1;
_dangerCause = _this select 2;
//\change to config
_amVis = compile preprocessFile  "fnc_pt_checkVis.sqf";
_inStruct_amVis = compile preprocessFile  "fnc_pt_reactDanger_inStruct_amVis.sqf";
_downPos = compile preprocessFile  "fnc_pt_downPos.sqf";
if(_unit knowsAbout _dangerCausedBy > 2) then {
    format ["inStruct knows about danger"] call BIS_fnc_log;
    if([_unit, _dangerCausedBy] call _amVis) then {
    
        format ["inStruct knows about danger, and is in vis"] call BIS_fnc_log;
        [_unit, _dangerCausedBy, _dangerCause] call _inStruct_amVis;
    }else {
        //was hit
        if(_dangerCause == 0) then {
            format ["inStruct was hit"] call BIS_fnc_log;
            //\change to config
            [_unit] call _downPos;
            _unit  setVariable ["DT",diag_ticktime + 3,false];
            if(_unit == leader _unit) then {
                _unit  setVariable ["AD",50,false];
                _unit  setVariable ["AT",30,false];
            };
        };
        //was not hit
        if(_dangerCause == 2) then {
            //\change to config
            format ["inStruct was not hit"] call BIS_fnc_log;
            _unit  setVariable ["DT",diag_ticktime + 3,false];
            if(_unit == leader _unit) then {
                _unit  setVariable ["AD",50,false];
                _unit  setVariable ["AT",30,false];
            };
        };
    };
}else {
    format ["inStruct does not know of enemy"] call BIS_fnc_log;
    [_unit] call _downPos;
    //\change to config
    _unit  setVariable ["DT",diag_ticktime + 3,false];
    if(_unit == leader _unit) then {
        _unit  setVariable ["AD",50,false];
        _unit  setVariable ["AT",30,false];
    };
};