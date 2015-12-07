//#define DEBUG_MODE_FULL

#include "script_component.hpp"
private ["_unit", "_coverObj", "_coverPos", "_height", "_resolution", "_dirFromUnitToCover"];
//find closest position to coverObj which does not touch cover obj, then back up 0.4m and return that position.
_unit = _this select 0;
_coverObj = _this select 1;

_coverPos = [_coverObj, _unit] call FUNC(pt_findPossibleCenter);

//unable to find obj model starting point, give up.
if(count _coverPos == 0) exitWith {
    TRACE_2("coverPos unknown enemy, cover rejected, could not find center", _coverObj);
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
if(GVAR(debug) > 0) then {
    if(isNil "unknownPoints") then {
        unknownPoints = [];
        addMissionEventHandler ["Draw3D", {
        {
            drawLine3D [_x, _x vectorAdd [0,0,10], [1,0,0,1]];
        } forEach unknownPoints;

        }];
    };
    unknownPoints pushBack ASLToATL _coverPos;
};
_coverPos;