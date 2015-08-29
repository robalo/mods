
#include "script_component.hpp"
private ["_unit", "_cover", "_unitPos", "_currentDist", "_coverPos", "_pos"];
//accepts cover as position ATL
_unit = _this select 0;
_cover = _this select 1;
_dangerUnit = _this select 2;

if(isNil "coverPts") then {
    coverPts = [];
    addMissionEventHandler ["Draw3D", {
    {
        drawLine3D [_x, _x vectorAdd [0,0,10], [0,1,0,1]];
    } forEach coverPts;
    
    }];
};
coverPts pushBack ASLToATL _cover;

_unit doMove ASLToATL _cover;
_unitPos = getPosASL _unit;
_currentDist = [_unitPos select 0, _unitPos select 1, 0] distance [_cover select 0, _cover select 1, 0];
//a player's bounding box is max ~1.15 meters from where position is measured from.
while{_currentDist > 1.25 && ! (_unit call FUNC(isUnc)) && !(unitReady _unit)} do {

    
//format ["moveToPoint: moving %1 in direction %2:, distance:%3", _unit, [_unit, _cover] call BIS_fnc_dirTo, _currentDist] call BIS_fnc_log;
    //format ["outStruct: starting sleep for: %1 dist is: %2", getPosASL _unit, _currentDist] call BIS_fnc_log;
    //drawLine3D [ASLToATL eyePos _unit, _cover vectorAdd [0,0,0.5], [1,0,0,1]];
    sleep 0.25;
    _unitPos = getPosATL _unit;
    _unitPos = [_unitPos select 0, _unitPos select 1, 0];
    _coverPos =  [_cover select 0, _cover select 1, 0];
    //format ["outStruct: stopping sleep for: %1, to %2 dist is: %3", getPosASL _unit, _coverPos, _unitPos distance _coverPos] call BIS_fnc_log;

    _currentDist = _unitPos distance _coverPos;
    
};
//format ["outStruct: done moving %1", _unit] call BIS_fnc_log;


if(_unit call FUNC(isUnderRoof)) then {
    _unit setUnitPos "AUTO";
} else {
    _pos = [_unit, _dangerUnit] call FUNC(pt_calculatePos);
    _unit setUnitPos _pos;
    
    //add reset for unitPos so that they will not get stuck down
    if(_unit getVariable [QGVAR(POS_RESET_PEND), 0] == 0) then {
        _unit  setVariable [QGVAR(POS_RESET_PEND),1,false];
        [_unit, time] call FUNC(pt_reset_Pos);
    };
};
