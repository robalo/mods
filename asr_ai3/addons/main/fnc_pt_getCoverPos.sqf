
#include "script_component.hpp"
private ["_unit", "_dangerUnit", "_coverObj", "_dangerCenter", "_unitCenter", "_coverPos", "_dangerToCoverDir", "_unitToCoverDir"];
_unit = _this select 0;
_dangerUnit = _this select 1;
_coverObj = _this select 2;


if(_unit isKindOf "CAManBase") exitWith {[]};
if(_dangerUnit == _coverObj) exitWith {[]};
_dangerCenter = eyePos _dangerUnit;

_unitCenter = eyePos _unit;


// step 1, find a starting point such that the objs model is between the unit and the starting point at prone height]
_coverPos = [_coverObj, _unit] call FUNC(pt_findPossibleCenter);

//_coverPos is ASL
if(count _coverPos == 0) then {
    //format ["%1 rejected, unable to find center", _coverObj]  call BIS_fnc_log;
};
if(count _coverPos == 0) exitWith {
};

//now we sweep angles using the dangerousUnit as a focal point, coverPos as our starting point and unit as our ending point
_dangerToCoverDir =[_dangerUnit, _coverPos] call BIS_fnc_dirTo;
_unitToCoverDir = [_unit, _coverPos] call BIS_fnc_dirTo;
private ["_angleACB", "_currentDistance", "_resolution", "_foundResult"];

//unit = pt A
//dangerousUnit = pt B;
//cover = pt C
_angleACB = _dangerToCoverDir - _unitToCoverDir;
//normalize them
if(_angleACB > 180) then {
    _dangerToCoverDir = _dangerToCoverDir - 360;
    _angleACB = _dangerToCoverDir - _unitToCoverDir;
};

_currentDistance = (getPosASL _unit distance _coverPos);

_resolution = _currentDistance / 2;
_foundResult = 0;
while{_resolution > 0.25} do {
    //sweep from cover pos to unit until we get a point that is inside the model and _resolution is < 0.25
    if(_coverObj in (lineIntersectsWith [_dangerCenter, _coverPos])) then {
        //sweep towards unit pos
		_coverPos = ATLToASL( [_unit, _currentDistance - _resolution,  _unitToCoverDir] call BIS_fnc_relPos);
        _foundResult = 1;
    }else {
        //sweep towards cover center
		_coverPos = ATLToASL ([_unit, _currentDistance + _resolution,  _unitToCoverDir] call BIS_fnc_relPos);
    };
    _coverPos = _coverPos vectorAdd [0,0,1 min (boundingCenter _coverObj select 1)];
    
    _currentDistance = (getPosASL _unit distance _coverPos);
    _resolution = _resolution / 2;
};
if(_foundResult == 0) then {
    //format ["%1 rejected, unable to find cover pt during sweep", _coverObj]  call BIS_fnc_log;
};
if(_foundResult == 0) exitWith {};

_dangerToCoverDir = [_dangerUnit, _coverPos] call BIS_fnc_dirTo;
//now we effectively have the heading from the danger to the final cover pos.
//we now need to find a position such that the model is between the danger and the position

private ["_originDetect"];
//get a pos 15m past the cover pos, then work backwards
_originDetect = [_coverPos, 15,  _dangerToCoverDir] call BIS_fnc_relPos;

   
_resolution = (_originDetect distance _coverPos) / 2;
//potential bug: this may end us with a point inside the cover obj, but we take care of that with the 0.6m movement at the end

if(_coverObj in lineIntersectsWith [ _coverPos, _originDetect]) then {    
    while {_resolution > 0.25} do {

        //if the cover is in the line, back the line up towards the origin
        if(_coverObj in lineIntersectsWith [ _coverPos, _originDetect]) then {
            _coverPos = ( [_coverPos,_resolution,  _dangerToCoverDir] call BIS_fnc_relPos);
        } else {
            //else move the line towards the danger
            _coverPos =  ([_coverPos, _resolution, _dangerToCoverDir+180] call BIS_fnc_relPos);

        };
        _resolution = _resolution / 2;

    };

};


//move 0.6m away from the cover, because the unit is not a point object
 _coverPos = [_coverPos, 0.6,  _dangerToCoverDir] call BIS_fnc_relPos;
 _coverPos = ASLToATL _coverPos;
 _coverPos;