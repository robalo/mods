//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_source", "_distance"];

#define __DELAY_ 60

private _time = time;
private _grp = group _unit;
if (waypointType [_grp,currentWaypoint _grp] == "HOLD") exitWith {TRACE_1("has HOLD wp",_grp)};

if (_time < (_grp getVariable [QGVAR(lastMoveToCoverTime),-1000]) + 120) exitWith {TRACE_1("too soon to move to cover again",_grp)};

//found cover or not, don't bother trying to find again for 2 minutes, so we save the time of last try
_grp setVariable [QGVAR(lastMoveToCoverTime),time,false];

private _mToCover = false;
if (_unit call FUNC(isValidUnitC) && {!isHidden _unit} && {(nearestTerrainObjects [_unit, [], 10, false, true]) isEqualTo []}) then {_mToCover = true};

private _cpa = [];

if (_mToCover) then {
	private _savedcpa = (group _unit) getVariable QGVAR(nearcover);
	if (!isNil "_savedcpa") then {
		{ if (_x distance _unit < (_distance/2)) then {_cpa pushBack _x} } forEach _savedcpa; // reuse close cover
	};
	if (_cpa isEqualTo []) then {
		_cpa = [_unit,_source,_distance] call FUNC(findCover);
	};
	if (_cpa isEqualTo []) then {
        // shit, caught in the open
        _unit setSuppression (1 min (0.2 + random 0.6 + getSuppression _unit));
		// try twice farther
		_cpa = [_unit,_source,(_distance*2)] call FUNC(findCover);
	} else { // found cover close enough
		if (_unit distance (_cpa select 0) < 10) then {_mToCover = false}; // let engine do this
	};
};

if (!_mToCover || {_cpa isEqualTo []}) exitWith {};

//remember
_grp setVariable [QGVAR(nearcover),_cpa,false];

//proceed
[_unit,_cpa,_time] spawn  {
	params ["_unit", "_cpa", "_until"];
	private _cover = _cpa deleteAt 0; // get first cover pos out of array
	TRACE_2("Choose cover",_cover,_cpa);
	private _grp = group _unit;
	_grp lockwp true;
	_unit doMove _cover;
	if (_unit == leader _grp) then {
		{ if (_x != _unit) then {_x doFollow _unit} } forEach (units _grp);
		[_unit,_grp,_until,_cover] spawn {
			params ["_unit", "_grp", "_until", "_cover"];
			waitUntil {sleep 5; !alive _unit || {time > _until + __DELAY_} || {_unit distance _cover < 2}};
			_grp lockwp false;
			{[_x] joinSilent _grp} forEach ((units _grp) select {unitReady _x});
		};
		{
			if (_x != _unit && {unitReady _x} && {!(_x getVariable [QGVAR(housing),false])} && {_x call FUNC(isValidUnitC)}) then { // process subordinates
				if (count _cpa > 0) then { // we have building positions available as cover
					_cover = _cpa deleteAt 0;
					TRACE_2("Choose cover in house",_x,_cover);
					doStop _x; _x doMove _cover;
				} else { // stay close to the f leader
					_x doFollow (formationLeader _x);
				};
			};
			sleep 1.42;
		} forEach (units _grp);
	};
};
