//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_3(_unit,_source,_until);
DEFAULT_PARAM(3,_distance,100);

if (_unit call FUNC(isValidUnit)) then {
	if (!isHidden _unit) then {
		if (!([_unit,"(forest + trees + houses)",5] call FNCMAIN(isNearStuff))) then {
			GVAR(mToCover) = true;
		};
	};
};

private "_coverposa";
_coverposa = [];

if (!isNil QGVAR(mToCover)) then {
	_coverposa = [_unit,_source,_distance] call FUNC(findCover);
	if (count _coverposa == 0) then {
		// throw smoke for no cover
		if (random 1 < GVAR(throwsmoke)) then {[_unit] spawn FUNC(throwSmoke)};
		// try twice farther
		_coverposa = [_unit,_source,(_distance*2)] call FUNC(findCover);
	} else { // found cover close enough
		if (_unit distance (_coverposa select 0) < 10) then {GVAR(mToCover) = nil}; // let engine do this
	};
};

if (!isNil QGVAR(mToCover) && count _coverposa > 0) then {
	[_unit,_coverposa select 0,_until] spawn  {
		PARAMS_3(_unit,_cover,_until);
		private ["_grp","_speed","_cmode","_isleader"];
		_grp = group _unit;
		_isleader = (_unit == leader _unit);
		if (_isleader) then {_grp lockwp true};
		_speed = speedMode _unit;
		_unit setSpeedMode "FULL";
		_unit doMove _cover;
		_unit setDestination [_cover, "LEADER PLANNED", true];
		GVAR(mToCover) = nil;
		waitUntil {
			sleep 2;
			if (_isleader) then {
				{if (_x != _unit && _x distance _unit > 50) then {_x doFollow _unit}; sleep 0.2} forEach units _grp;
			};
			moveToCompleted _unit || moveToFailed _unit || unitReady _unit || time > _until + 30
		};
		_unit setSpeedMode _speed;
		if (_isleader) then {_grp lockwp false};
	};
};
