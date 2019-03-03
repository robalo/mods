//#define DEBUG_MODE_FULL
#include "script_component.hpp"
//accepts cover as position ASL
params ["_unit", "_cover", "_dangerUnit"];

if (GVAR(debug_findcover)) then {
    if (isNil QGVAR(movePts)) then {
        GVAR(movePts) = [];
        GVAR(unitmovePts) = [];
        addMissionEventHandler ["Draw3D", {
          { drawLine3D [_x, _x vectorAdd [0,0,10], [0,1,0,1]] } forEach GVAR(movePts);
        }];
    };
    GVAR(movePts) pushBack ASLToATL _cover;
    GVAR(unitmovePts) pushBack _unit;
};
[_unit, "moving"] call FUNC(pt_setStatusText);

_unit doMove ASLToATL _cover;
private _unitPos = getPosASL _unit;
private _currentDist = [_unitPos select 0, _unitPos select 1, 0] distance [_cover select 0, _cover select 1, 0];
//a player's bounding box is max ~1.15 meters from where position is measured from.
private _lifestate = lifeState _unit;
private _isDown = (_lifestate == "DEAD" || _lifestate == "UNCONSCIOUS" || _lifestate == "INCAPACITATED");
_unit setVariable [QGVAR(ADV_COVER_MOVING), true];
while {_currentDist > 1.25 && !_isDown && !(unitReady _unit)} do {
    sleep 0.25;
    _unitPos = getPosATL _unit;
    _unitPos set [2, 0];
    private _coverPos =  [_cover select 0, _cover select 1, 0];
    _currentDist = _unitPos distance _coverPos;
};

_unit setVariable [QGVAR(ADV_COVER_MOVING), false];
_unit doFollow leader _unit;
TRACE_1("done moving", _unit);

[_unit, "stopped"] call FUNC(pt_setStatusText);
