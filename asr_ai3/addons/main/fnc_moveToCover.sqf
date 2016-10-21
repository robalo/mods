//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_source", "_distance"];

#define __DELAY_ 60

if (!GVAR(seekcover)) exitWith {};
if (vehicle _unit != _unit) exitWith {};

private _time = time;
private _grp = group _unit;
if (waypointType [_grp,currentWaypoint _grp] == "HOLD") exitWith {TRACE_1("has HOLD wp",_grp)};

if (_time < (_grp getVariable [QGVAR(lastMoveToCoverTime),-90]) + 90) exitWith {TRACE_1("too soon to move to cover again",_grp)};

private _mToCover = false;
if (_unit call FUNC(isValidUnitC) && {!isHidden _unit} && {count (nearestTerrainObjects [_unit, ["WALL","BUILDING","HOUSE","TREE","ROCK","ROCKS"], 5, false]) == 0}) then {_mToCover = true};

private _attackenable = attackEnabled _grp;
_grp enableAttack false;

private _cpa = [];

if (_mToCover) then {
	private _savedcpa = (group _unit) getVariable QGVAR(nearcover);
	if (!isNil "_savedcpa") then {
		{ if (_x distance _unit < _distance) then {_cpa pushBack _x} } forEach _savedcpa;
	};
	if (count _cpa == 0) then {
		_cpa = [_unit,_source,_distance] call FUNC(findCover);
	};
	if (count _cpa == 0) then {
		// try twice farther
		_cpa = [_unit,_source,(_distance*2)] call FUNC(findCover);
	} else { // found cover close enough
		if (_unit distance (_cpa select 0) < 10) then {_mToCover = false}; // let engine do this
	};
};

if (_mToCover && {count _cpa > 0}) then {

	[_unit,_cpa,_time] spawn  {
		params ["_unit", "_cpa", "_until"];
		private ["_grp","_speed","_cover"];
		_cover = [_cpa] call BIS_fnc_arrayShift; // get first cover pos out of array
		TRACE_2("Choose cover",_cover,_cpa);
		_grp = group _unit;
		_grp setVariable [QGVAR(nearcover),_cpa,false];
		_grp lockwp true;
		_unit doMove _cover;
		if (_unit == leader _grp) then {
			_speed = speedMode _grp;
			{ if (_x != _unit) then {_x doFollow _unit} } forEach (units _grp);
			_grp setSpeedMode "FULL";
			[_unit,_grp,_until,_speed,_cover] spawn {
				params ["_unit", "_grp", "_until", "_speed", "_cover"];
				waitUntil {!alive _unit || {time > _until + __DELAY_} || {_unit distance _cover < 1}};
				_grp lockwp false;
				{[_x] joinSilent _grp} forEach (units _grp);
				_grp setSpeedMode _speed;
			};
			{
				if (_x != _unit && {unitReady _x} && {!(_x getVariable [QGVAR(housing),false])} && {_x call FUNC(isValidUnitC)}) then { // process subordinates
					if (count _cpa > 0) then { // we have building positions available as cover
						_cover = [_cpa] call BIS_fnc_arrayShift;
						TRACE_3("Choose cover in house",_x,_cover,_cpa);
						doStop _x; _x doMove _cover;
					} else { // stay close to the leader
						_x doFollow (leader _x);
					};
				};
				sleep 0.42;
			} forEach (units _grp);
		};
	};

};

_grp enableAttack _attackenable;

//found cover or not, don't bother trying to find again for 2 minutes, so we save the time of last try
_grp setVariable [QGVAR(lastMoveToCoverTime),time,false];
