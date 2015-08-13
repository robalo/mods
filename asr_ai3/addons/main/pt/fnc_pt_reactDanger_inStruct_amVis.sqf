
_unit = _this select 0;
_dangerCausedBy = _this select 1;
_dangerCause = _this select 2;
//I am in a structure, and I know who the enemy is and I am visible to the enemy.

_checkVis = compile preprocessFile "fnc_pt_checkVis.sqf";
_goToNextBuildingPos = compile preprocessFile "fnc_pt_goToNextBuildingPos.sqf";
_checkMiddle = false;
_checkDown = false;


format ["inStruct amVis"] call BIS_fnc_log;

if(unitPos _unit == "AUTO") then {
    _checkMiddle = true;
    _checkDown = true;
};

if(unitPos _unit == "UP") then {
    _checkMiddle = true;
    _checkDown = true;
};

if(unitPos _unit == "MIDDLE") then {
    _checkDown = true;
};

_foundResult = "";

if(_checkMiddle) then {
    format ["inStruct amVis checking middle"] call BIS_fnc_log;
    if(!([_unit, _dangerCausedBy, 1.2] call _checkVis)) then {
        format ["inStruct amVis middle found"] call BIS_fnc_log;
        _foundResult = "MIDDLE";
    };
};

if(_foundResult == "" && _checkDown) then {
    format ["inStruct amVis checking down"] call BIS_fnc_log;
    if(!([_unit, _dangerCausedBy, 0.4] call _checkVis)) then {
        _foundResult = "DOWN";
        format ["inStruct amVis down found"] call BIS_fnc_log;
    };
};

if(_foundResult != "") then {

format ["inStruct amVis unit pos to %1", _foundResult] call BIS_fnc_log;
    _unit setUnitPos _foundResult;
    //\change to config
    _unit  setVariable ["DT",diag_ticktime + 5,false];
    if(_unit == leader _unit) then {
        _unit  setVariable ["AT",50,false];
        _unit  setVariable ["AD",30,false];
    };
}else {
format ["inStruct amVis unit pos next building pos", _foundResult] call BIS_fnc_log;
    [_unit, _dangerCausedBy, _dangerCause] call _goToNextBuildingPos;
};
