//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_3(_unit,_source,_until);
DEFAULT_PARAM(3,_distance,100);
if !(_unit call FUNC(isValidUnit)) exitWith {};
if (isHidden _unit) exitWith {};

private ["_coverposa","_cover","_go2cover"];
if ([_unit,"(forest + trees + houses)",5] call FUNC(isNearStuff)) exitWith {};

_go2cover = {
	PARAMS_3(_unit,_cover,_until);
	private ["_speed","_cmode"];
	_speed = speedMode _unit;
	_unit setSpeedMode "FULL";
	_unit doMove _cover;
	_unit setDestination [_cover, "LEADER PLANNED", true];
	waitUntil {moveToCompleted _unit || moveToFailed _unit || unitReady _unit || time > _until + 30};
	_unit setSpeedMode _speed;
};

_coverposa = [_unit,_source,_distance] call FUNC(findCover);
if (count _coverposa == 0) then { // no cover, try twice farther
	_coverposa = [_unit,_source,(_distance*2)] call FUNC(findCover);
	// throw smoke for cover
	if (random 1 < GVAR(throwsmoke)) then {[_unit] spawn FUNC(throwSmoke)};
} else { // found cover close enough
	if (_unit distance (_coverposa select 0) < 10) exitWith {}; // let engine do this
};

if (count _coverposa > 0) then {[_unit,_coverposa select 0,_until] spawn _go2cover};
