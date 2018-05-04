params ["_testPos"];
private _objs = lineIntersectsWith [_testPos vectorAdd [0, 0, 10], _testPos vectorAdd[0, 0, -10]];
private _closestPos = [];
{
    if (_x isKindOf "HouseBase") then {
        {   
            if (_closestPos isEqualTo [] || {_x distance _closestPos < _closestPos distance _testPos}) then {
                _closestPos = _x;
            };
        } forEach ([_x] call BIS_fnc_buildingPositions);
    };
} forEach _objs;

_closestPos;
