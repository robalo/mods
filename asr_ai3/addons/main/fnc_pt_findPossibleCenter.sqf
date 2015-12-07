#include "script_component.hpp"


private ["_coverObj", "_unit", "_result", "_height", "_unitCenter", "_boundingCenter"];
//Ok, this is wacky as fuck.

//I need a point such that the object's model is in between it and the unit's position.
//bounding center is not necessarily correct.
//to this end, we will use line intersections inorder to find such a position

_coverObj = _this select 0;
_unit = _this select 1;
_result = [];
_height = 0;
_unitCenter = ((getPosASL _unit) vectorAdd [0,0,1.2]); 
        //format ["find center attempting: %1",  _coverObj] call BIS_fnc_log;

//if it doesn't matter the height, attempt shortcut
if(count _this == 2) then {
    _height = 0.4;
    _boundingCenter = ATLToASL (_coverObj modelToWorld [0,0,0]);
    for "_x" from 0 to 3 do {
        _b = [_boundingCenter select 0, _boundingCenter select 1, (getPosASL _coverObj select 2) + _x * 0.4];
        //format ["find center attempting shortcut: %1",  _b] call BIS_fnc_log;
        if(_coverObj in (lineIntersectsWith [_b, _unitCenter])) then {
            //format ["find center shortcut: %1",  _b] call BIS_fnc_log;
            _result = _b;
        };
    };
}else {
    _height = _this select 2;
};

if(count _result != 0) exitWith {
    if(GVAR(debug) > 0) then {

        if(isNil "centerPts") then {
            centerPts = [];
            addMissionEventHandler ["Draw3D", {
            {
                drawLine3D [_x, _x vectorAdd [0,0,10], [0,0,1,1]];
            } forEach centerPts;

            }];
        };
        centerPts pushBack ASLToATL _result;
    };
    _result;
};
private ["_boundBox", "_corner1Pos", "_corner2Pos", "_corner3Pos", "_corner4Pos"];
private ["_corner1Dist", "_corner2Dist", "_corner3Dist", "_corner4Dist", "_cornerArray"];
private ["_topCorner", "_bottomCorner", "_topAngleTemp", "_bottomAngleTemp"];

//get the bound center
//get the 4 corners of the bounding box
_boundBox = boundingBox _coverObj;
_corner1Pos =  ATLToASL (_coverObj modelToWorld [_boundBox select 0 select 0, _boundBox select 0 select 1, -((boundingCenter _coverObj) select 2) + _height]);
_corner2Pos =  ATLToASL (_coverObj modelToWorld [_boundBox select 0 select 0, _boundBox select 1 select 1, -((boundingCenter _coverObj) select 2) + _height]);
_corner3Pos =  ATLToASL (_coverObj modelToWorld [_boundBox select 1 select 0, _boundBox select 0 select 1, -((boundingCenter _coverObj) select 2) + _height]);
_corner4Pos =  ATLToASL (_coverObj modelToWorld [_boundBox select 1 select 0, _boundBox select 1 select 1, -((boundingCenter _coverObj) select 2) + _height]);
//get the distance to each of the 4 corners from the unit.
//since we are guarenteed that the bounding box is a rectangle the middle two distances must be the left most and right most points
//(from the perspective of the unit)
_corner1Dist = _corner1Pos distance (getPosASL _unit);
_corner2Dist = _corner2Pos distance (getPosASL _unit);
_corner3Dist = _corner3Pos distance (getPosASL _unit);
_corner4Dist = _corner4Pos distance (getPosASL _unit);
        
        
//find the 2 distances in the middle
_cornerArray = [[_corner1Dist, _corner1Pos], [_corner2Dist, _corner2Pos],[_corner3Dist, _corner3Pos],[_corner4Dist, _corner4Pos]];
_cornerArray sort true;

_topCorner = _cornerArray select 1 select 1;
_bottomCorner = _cornerArray select 2 select 1;

//ok, now we have our corners, get the angles from the corners to the unit and the difference between them
_topAngleTemp = [_unit, _topCorner] call BIS_fnc_dirTo;
_bottomAngleTemp = [_unit, _bottomCorner] call BIS_fnc_dirTo;

private ["_topAngle", "_bottomAngle", "_angleDiff", "_farthestCheckDistance", "_firstCheckAngle", "_lastCheckAngle", "_breakout", "_unitCenter"];
_topAngle = _topAngleTemp max _bottomAngleTemp;
_bottomAngle = _topAngleTemp min _bottomAngleTemp;
_angleDiff = _topAngle - _bottomAngle;
//normalize them
if(_angleDiff > 180) then {
    _topAngle = _topAngle - 360;
};
_angleDiff = _topAngle - _bottomAngle;

_farthestCheckDistance = _corner1Dist max _corner2Dist max _corner3Dist max _corner4Dist;
_result = [];

//place holder values
_firstCheckAngle = 6000;
_lastCheckAngle = 6000;
_breakout = 0;
_unitCenter = ((getPosASL _unit) vectorAdd [0,0,_height]);

//TODO change so that it sweeps from the middle out
for "_x" from 0 to 80 do {

    if(_breakout == 1) exitWith{};
    _checkAngle = _bottomAngle + (_angleDiff * _x / 80);
    //move checkPos to an angle _x/80th the way from bottom angle to top angle
    private["_checkPos"];
    _checkPos =  ([_unitCenter, _farthestCheckDistance,  _bottomAngle + (_angleDiff * _x / 80)] call BIS_fnc_relPos);
    if(_coverObj in lineIntersectsWith [ _checkPos, _unitCenter]) then {
        if(_firstCheckAngle == 6000) then {
            _firstCheckAngle = _checkAngle;
            _lastCheckAngle = _checkAngle;
        }else {
            //this will be overwritten several times
            _lastCheckAngle = _checkAngle;
        };
    }else {
        if(_lastCheckAngle != 6000) then {
            _breakout = 1;
        };
    };
    
};
if(_firstCheckAngle != 6000) then { 
    //return the average from the first and last intersections we recorded
    _result = [((getPosASL _unit) vectorAdd [0,0,_height]), _farthestCheckDistance,  (_lastCheckAngle + _firstCheckAngle) / 2] call BIS_fnc_relPos;
};

if(GVAR(debug) > 0) then {

    if(count _result > 0) then {
        if(isNil "centerPts") then {
            centerPts = [];
            addMissionEventHandler ["Draw3D", {
            {
                drawLine3D [_x, _x vectorAdd [0,0,10], [0,0,1,1]];
            } forEach centerPts;

            }];
        };
        centerPts pushBack ASLToATL _result;
    };
};
_result;