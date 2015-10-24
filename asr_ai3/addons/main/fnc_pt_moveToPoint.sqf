#include "script_component.hpp"
private ["_unit", "_cover", "_unitPos", "_currentDist", "_coverPos", "_pos"];
//accepts cover as position ATL
_unit = _this select 0;
_cover = _this select 1;
_dangerUnit = _this select 2;

if(GVAR(debug)) then {

    if(isNil "movePts") then {
        coverPts = [];
        addMissionEventHandler ["Draw3D", {
        {
            drawLine3D [_x, _x vectorAdd [0,0,10], [0,1,0,1]];
        } forEach movePts;

        }];
    };
    movePts pushBack ASLToATL _cover;
};


_unit doMove ASLToATL _cover;
_unitPos = getPosASL _unit;
_currentDist = [_unitPos select 0, _unitPos select 1, 0] distance [_cover select 0, _cover select 1, 0];
//a player's bounding box is max ~1.15 meters from where position is measured from.
while{_currentDist > 1.25 && ! (_unit call FUNC(isUnc)) && !(unitReady _unit)} do {
    sleep 0.25;
    _unitPos = getPosATL _unit;
    _unitPos = [_unitPos select 0, _unitPos select 1, 0];
    _coverPos =  [_cover select 0, _cover select 1, 0];
    _currentDist = _unitPos distance _coverPos;
    
};

TRACE_2("done moving", _unit);

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
