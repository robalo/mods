//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_3(_unit,_source,_until);
DEFAULT_PARAM(3,_distance,100);

if (_unit call FNCMAIN(isValidUnit)) then {
	if (!isHidden _unit) then {
		if (!([_unit,"(forest + trees)",5] call FNCMAIN(isNearStuff))) then {
			GVAR(mToCover) = true;
		};
	};
};

private ["_cpa","_savedcpa"];
_cpa = [];

if (!isNil QGVAR(mToCover)) then {
	_savedcpa = (group _unit) getVariable QGVAR(nearcover);
	if (!isNil "_savedcpa") then {
		{ if (_x distance _unit < _distance) then {_cpa pushBack _x} } forEach _savedcpa;
	};
	if (count _cpa == 0) then {
		_cpa = [_unit,_source,_distance] call FUNC(findCover);
	};
	if (count _cpa == 0) then {
		// throw smoke for no cover
		if (random 1 < GVAR(throwsmoke)) then {[_unit] spawn FUNC(throwSmoke)};
		// try twice farther
		_cpa = [_unit,_source,(_distance*2)] call FUNC(findCover);
	} else { // found cover close enough
		if (_unit distance (_cpa select 0) < 10) then {GVAR(mToCover) = nil}; // let engine do this
	};
};

if (!isNil QGVAR(mToCover) && count _cpa > 0) then {
	[_unit,_cpa,_until] spawn  {
		PARAMS_3(_unit,_cpa,_until);
		private ["_grp","_speed","_cmode","_isleader","_cover","_units"];
		_cover = [_cpa] call BIS_fnc_arrayShift; // get first cover pos out of array
		TRACE_2("Choose cover",_cover,_cpa);
		_grp = group _unit;
		_grp setVariable [QGVAR(nearcover), _cpa];
		_units = units _grp;
		_isleader = (_unit == leader _unit);
		_speed = speedMode _unit;
		_unit setSpeedMode "FULL";
		_unit doMove _cover; _unit setDestination [_cover, "LEADER PLANNED", true];
		if (_isleader) then {
			_grp lockwp true;
			_grp setSpeedMode "FULL";
			{
				if (_x != _unit && unitReady _x) then { // process subordinates
					if (count _cpa > 0) then { // we have building positions available as cover
						_cover = [_cpa] call BIS_fnc_arrayShift;
						TRACE_3("Choose cover in house",_x,_cover,_cpa);
						[_x, _cover] spawn {
							doStop (_this select 0);
							(_this select 0) doMove (_this select 1);
							waitUntil {unitReady (_this select 0)};
							doStop (_this select 0);
						};
					} else { // stay close to the leader
						_x doFollow _unit;
					};
				};
				sleep 0.12;
			} forEach _units;
		};
		GVAR(mToCover) = nil;
		waitUntil {time > _until + 180};
		_unit setSpeedMode _speed;
		if (_isleader) then {
			_grp lockwp false;
			_grp setSpeedMode _speed;
			{if (alive _x) then {[_x] joinSilent _grp}} forEach _units;
		};
	};
};
