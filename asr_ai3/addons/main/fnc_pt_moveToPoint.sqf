//#define DEBUG_MODE_FULL

#include "script_component.hpp"
private ["_unit", "_cover", "_unitPos", "_currentDist", "_coverPos", "_pos"];
//accepts cover as position ASL
_unit = _this select 0;
_cover = _this select 1;
_dangerUnit = _this select 2;

if(GVAR(debug) == 1) then {

    if(isNil "movePts") then {
        movePts = [];
        unitMovePts = [];
        addMissionEventHandler ["Draw3D", {
        {
            drawLine3D [_x, _x vectorAdd [0,0,10], [0,1,0,1]];
        } forEach movePts;

        }];
    };
    movePts pushBack ASLToATL _cover;
    unitMovePts pushBack _unit;
};
[_unit, "moving"] call FUNC(pt_setStatusText);

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

_unit doMove ASLToATL getPosATL _unit;
TRACE_1("done moving", _unit);

[_unit, "stopped"] call FUNC(pt_setStatusText);
