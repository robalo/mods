
#include "script_component.hpp"
private ["_unit", "_cover", "_unitPos", "_currentDist", "_coverPos", "_pos"];
//accepts cover as position ATL
_unit = _this select 0;
_cover = _this select 1;
if(_cover select 2 > 1.7) then {
    format ["moveToPoint: likely got position ASL instead of ATL: %1", _cover] call BIS_fnc_log;
    _cover = ASLToATL _cover;
};
    //format ["moveToPoint: moving %1 to %2:", _unit, _cover] call BIS_fnc_log;
_unit doMove _cover;
_unitPos = getPosASL _unit;
_currentDist = [_unitPos select 0, _unitPos select 1, 0] distance [_cover select 0, _cover select 1, 0];
while{_currentDist > 0.75 && ! (_unit call FUNC(isUnc)) && !(unitReady _unit)} do {

    
    //format ["outStruct: starting sleep for: %1 dist is: %2", getPosASL _unit, _currentDist] call BIS_fnc_log;
    //1 second is too small, unit might not have time to turn around and start walking
    //drawLine3D [ASLToATL eyePos _unit, _cover vectorAdd [0,0,0.5], [1,0,0,1]];
    sleep 0.25;
    _unitPos = getPosATL _unit;
    _unitPos = [_unitPos select 0, _unitPos select 1, 0];
    _coverPos =  [_cover select 0, _cover select 1, 0];
    //format ["outStruct: stopping sleep for: %1, to %2 dist is: %3", getPosASL _unit, _coverPos, _unitPos distance _coverPos] call BIS_fnc_log;

    _currentDist = _unitPos distance _coverPos;
    
};
//format ["outStruct: done moving %1", _unitPos] call BIS_fnc_log;


if(_unit call FUNC(isUnderRoof)) then {
    _unit setUnitPos "AUTO";
} else {
    _pos = [(ASLToATL _cover ) select 2] call FUNC(pt_heightToPos);
    _unit setUnitPos _pos;
    
    //add reset for unitPos so that they will not get stuck down
    if(_unit getVariable [QGVAR(POS_RESET_PEND), 0] == 0) then {
        _unit  setVariable [QGVAR(POS_RESET_PEND),1,false];
        [_unit] call FUNC(pt_reset_Pos);
    };
};
if(leader _unit == _unit) then {
    group _unit lockwp false;
};
