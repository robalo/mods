
_isUnc = compile preprocessFile "fnc_isUnc.sqf";
_heightToPos = compile preprocessFile "fnc_pt_heightToPos.sqf";
_isUnderRoof = compile preprocessFile "fnc_isUnderRoof.sqf";
_unit = _this select 0;
_cover = _this select 1;

_unit doMove _cover;
_unitPos = getPosASL _unit;
_currentDist = [_unitPos select 0, _unitPos select 1, 0] distance [_cover select 0, _cover select 1, 0];
while{_currentDist > 0.5 && ! (_unit call _isUnc)} do {

    
    format ["outStruct: starting sleep for: %1 dist is: %2", getPosASL _unit, _currentDist] call BIS_fnc_log;
    sleep 1;
    _unitPos = getPosASL _unit;
    _unitPos = [_unitPos select 0, _unitPos select 1, 0];
    _coverPos =  [_cover select 0, _cover select 1, 0];
    drawLine3D [(ASLToATL eyePos _unit), (_coverPos),[1,0,0,1]];
    format ["outStruct: stopping sleep for: %1, to %2 dist is: %3", getPosASL _unit, _coverPos, [_unitPos select 0, _unitPos select 1, 0] distance [_cover select 0, _cover select 1, 0]] call BIS_fnc_log;
    if(_currentDist <= _unitPos distance _coverPos) then {
        _currentDist = 0;
        format ["outStruct: didn't move forward, give up moving %1", _unit] call BIS_fnc_log;
    }else {
        _currentDist = _unitPos distance _coverPos;
        format ["outStruct: moving %1, %2, %3", _unitPos, _coverPos, _currentDist] call BIS_fnc_log;
    };
};
format ["outStruct: done moving %1", _unitPos] call BIS_fnc_log;


if(_unit call _isUnderRoof) then {
    _unit setUnitPos "AUTO";
} else {
    _pos = [(ASLToATL _cover ) select 2] call _heightToPos;
    _unit setUnitPos _pos;
};
if(leader _unit == _unit) then {
    group _unit lockwp false;
};