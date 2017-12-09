private _testPos = _this select 0;
private _objs = lineIntersectsWith[_testPos vectorAdd [0,0,10], _testPos vectorAdd[0,0,-10]];
private _closestPos = [];
{
    if(_x isKindOf "HouseBase") then {
        {   
            if(count _closestPos == 0 || _x distance _closestPos < _closestPos distance _testPos) then {
                _closestPos = _x;
            };
        } forEach ([_x] call BIS_fnc_buildingPositions);
    };
} forEach _objs;

_closestPos;