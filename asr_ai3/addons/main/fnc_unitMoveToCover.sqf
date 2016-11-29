//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_source", "_distance"];

#define __DELAY_ 60

if (!GVAR(seekcover) || {!(isNull objectParent _unit)} || {isHidden _unit}) exitWith {};

private _time = time;
private _grp = group _unit;
//restrictions
if (waypointType [_grp,currentWaypoint _grp] == "HOLD") exitWith {TRACE_1("has HOLD wp",_grp)};
if (_time < (_unit getVariable [QGVAR(lastMoveToCoverTime),-1000]) + 60) exitWith {TRACE_1("too soon to move to cover again",_unit)};

//found cover or not, don't bother trying to find again for 2 minutes, so we save the time of last try
_unit setVariable [QGVAR(lastMoveToCoverTime),time,false];

private _mToCover = false;
if (_unit call FUNC(isValidUnitC) && {(nearestTerrainObjects [_unit, ["TREE","BUSH","BUILDING","HOUSE","ROCK","WALL"], 5, false]) isEqualTo []}) then {_mToCover = true};

private _cpa = [];

if (_mToCover) then {
	private _savedcpa = _unit getVariable QGVAR(nearcover);
	if (!isNil "_savedcpa") then {
		{ if (_x distance _unit < _distance) then {_cpa pushBack _x} } forEach _savedcpa;
	};
	if (_cpa isEqualTo []) then {
		_cpa = [_unit,_source,_distance] call FUNC(findCover);
	};
	if (_cpa isEqualTo []) then {
        // shit, caught in the open, panic
        _unit setSuppression (1 min (0.2 + random 0.6 + getSuppression _unit));
		// try twice farther
		_cpa = [_unit,_source,(_distance*2)] call FUNC(findCover);
	} else { // found cover close enough
		if (_unit distance (_cpa select 0) < 7) then {_mToCover = false}; // let engine do this
	};
};

if (_mToCover && {count _cpa > 0}) then {
    _unit setVariable [QGVAR(nearcover),_cpa,false];
	[_unit,_cpa select 0,_time] spawn {
		params ["_unit", "_cover", "_until"];
		TRACE_1("Choose cover",_cover);
        _unit doMove _cover;
        sleep 5;
        waitUntil {time > _until + __DELAY_ || {_unit distance _cover < 2}};
        //return
        sleep 5 + random 10;
        [_unit] joinSilent (group _unit);
        private _flead = formationLeader _unit;
        if (_unit != _flead) then {_unit doFollow _flead};
	};
};
