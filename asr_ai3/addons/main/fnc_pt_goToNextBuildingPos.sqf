
#include "script_component.hpp"
private ["_unit", "_testPos", "_objs", "_hidingPos"];
//move to another building pos, at random

_unit = _this select 0;
_dangerUnit = _this select 1;
_testPos = getPosASL _unit;
_objs = lineIntersectsWith[_testPos vectorAdd [0,0,10], _testPos vectorAdd[0,0,-10]];
_hidingPos = [];
{
    if(_x isKindOf "HouseBase") then {
        {   
            if(random 1 < 0.2 && _x distance (getPosATL _unit) > 1.2) then {
                _hidingPos = _x;
            };
        } forEach ([_x] call BIS_fnc_buildingPositions);
    };
} forEach _objs;

if(count _hidingPos > 0) then {
    [_unit, _hidingPos, _dangerUnit] call FUNC(pt_moveToPoint);
    
    //add reset for unitPos so that they will not get stuck down
    if(_unit getVariable [QGVAR(POS_RESET_PEND), 0] == 0) then {
        _unit  setVariable [QGVAR(POS_RESET_PEND),1,false];
        [_unit, time] call FUNC(pt_reset_Pos);
    };
};