//accepts cover as position ATL
_unit = _this select 0;
_cover = _this select 1;
if(_cover select 2 > 1.7) then {
    //format ["moveToPoint: likely got position ASL instead of ATL: %1", _cover] call BIS_fnc_log;
};
_unit doMove _cover;
_unitPos = getPosASL _unit;
_currentDist = [_unitPos select 0, _unitPos select 1, 0] distance [_cover select 0, _cover select 1, 0];
while{_currentDist > 0.5 && ! (_unit call FUNC(isUnc))} do {

    
    //format ["outStruct: starting sleep for: %1 dist is: %2", getPosASL _unit, _currentDist] call BIS_fnc_log;
    //1 second is too small, unit might not have time to turn around and start walking
    sleep 2;
    _unitPos = getPosASL _unit;
    _unitPos = [_unitPos select 0, _unitPos select 1, 0];
    _coverPos =  [_cover select 0, _cover select 1, 0];
    //format ["outStruct: stopping sleep for: %1, to %2 dist is: %3", getPosASL _unit, _coverPos, [_unitPos select 0, _unitPos select 1, 0] distance [_cover select 0, _cover select 1, 0]] call BIS_fnc_log;
    if(_currentDist <= _unitPos distance _coverPos) then {
        _currentDist = 0;
        //format ["outStruct: didn't move forward, give up moving %1", _unit] call BIS_fnc_log;
    }else {
        _currentDist = _unitPos distance _coverPos;
        //format ["outStruct: moving %1, %2, %3", _unitPos, _coverPos, _currentDist] call BIS_fnc_log;
    };
};
//format ["outStruct: done moving %1", _unitPos] call BIS_fnc_log;


if(_unit call FUNC(pt_isUnderRoof)) then {
    _unit setUnitPos "AUTO";
} else {
    _pos = [(ASLToATL _cover ) select 2] call FUNC(pt_heightToPos);
    _unit setUnitPos _pos;
};
if(leader _unit == _unit) then {
    group _unit lockwp false;
};