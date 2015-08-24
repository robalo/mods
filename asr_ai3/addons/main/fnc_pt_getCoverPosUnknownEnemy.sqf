
#include "script_component.hpp"
private ["_unit", "_coverObj", "_boundingCenter", "_coverPos", "_height", "_resolution", "_dirFromUnitToCover"];
//find closest position to coverObj which does not touch cover obj, then back up 0.4m and return that position.
_unit = _this select 0;
_coverObj = _this select 1;

//format ["getCoverPosforUnknown enemy: unit %1, coverObj %2", _unit, _coverObj] call BIS_fnc_log;
_boundingCenter = (boundingCenter _coverObj);

            
            
_coverPos = [_coverObj, _unit] call FUNC(pt_findPossibleCenter);
if(count _coverPos == 0) exitWith {
    //unable to find obj model starting point, give up.
    [];
};
_height = _coverPos select 2;

_resolution = (_coverPos distance (getPosASL _unit)) / 2;

_dirFromUnitToCover = [_unit, _coverPos] call BIS_fnc_dirTo;
//step 2, find the point closest to the unit which is outside the model (to within a precision of at least 0.25m)
while {_resolution > 0.25} do {

	//if the cover is in the line, back the line up towards the unit
	if(_coverObj in lineIntersectsWith [ _coverPos, (getPosATL _unit vectorAdd [0,0, _height])]) then {
		_coverPos = [_coverPos,_resolution,  _dirFromUnitToCover+180] call BIS_fnc_relPos;
	} else {
        //else move the line towards the cover
		_coverPos = [_coverPos, _resolution, _dirFromUnitToCover] call BIS_fnc_relPos;
	};
	_resolution = _resolution / 2;
};

_coverPos = [_coverPos, -0.8, _dirFromUnitToCover] call BIS_fnc_relPos;
_coverPos = ASLToAtl _coverPos;
_coverPos;