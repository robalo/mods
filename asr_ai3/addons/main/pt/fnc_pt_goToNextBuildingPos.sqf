//move to another building pos, at random

_unit = _this select 0;
_testPos = getPosASL _unit;
_objs = lineIntersectsWith[_testPos vectorAdd [0,0,10], _testPos vectorAdd[0,0,-10]];
_moveToPoint = compile preprocessFile "fnc_pt_moveToPoint.sqf";
_hidingPos = [];
{
    if(_x isKindOf "HouseBase") then {
        {   
            format ["outStruct: running house: %1, %2", _x, _x distance (getPosATL _unit)] call BIS_fnc_log;
            if(random 1 < 0.2 && _x distance (getPosATL _unit) > 1.2) then {
                format ["outStruct: accepting house: %1, %2", _x, _x distance (getPosATL _unit)] call BIS_fnc_log;
                _hidingPos = _x;
            };
        } forEach ([_x] call BIS_fnc_buildingPositions);
    };
} forEach _objs;

if(count _hidingPos > 0) then {
    [_unit, _hidingPos] call _moveToPoint;
};