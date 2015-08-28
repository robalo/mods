_testPos = _this select 0;
_objs = lineIntersectsWith[_testPos vectorAdd [0,0,10], _testPos vectorAdd[0,0,-10]];
_closestPos = [0,0,0];
{
    if(_x isKindOf "HouseBase") then {
        {   
            if(_x distance _closestPos < _closestPos distance _testPos) then {
                _closestPos = _x;
            };
        } forEach ([_x] call BIS_fnc_buildingPositions);
    };
} forEach _objs;

_closestPos;