//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_3(_unit,_dangerCausedBy,_dangerUntil);
private ["_coverRange","_grp","_bpos","_dude"];

_grp = group _unit;
_time = diag_ticktime;

if (unitReady _unit && {{isPlayer _x} count units _grp == 0} && {_time > (_unit getVariable [QGVAR(reacting),-30]) + 30}) then {
        
    _unit setVariable [QGVAR(reacting),_time,false]; //save last time we ran this for this unit, so we don't run more than twice per minute / unit
/*
	// if no target, pick one!
	if (isNull assignedTarget _unit) then {
		_unit spawn {
			private "_fne";
			scopeName "target";
			{
				if ((side _this) getFriend (_x select 2) < 0.6) then {
					_fne = _this findNearestEnemy (_x select 0); //Position (perceived, includes judgement and memory errors),
					_this doTarget _fne;
					breakTo "target";
				};
			} forEach (_this nearTargets 300);
		};
	};
*/
	// mount weapons
	if (random 1 < GVAR(getinweapons)) then {_grp call FUNC(getInWeapons)};

	// search buildings
	if (!isNull _dangerCausedBy && {random 1 < GVAR(usebuildings)}) then {
		_dude = _unit;
		//pick another dude if possible
		{if (_x != _unit) exitWith {_dude = _x}} forEach units _grp;
                if (_dude getVariable [QGVAR(housing),false]) exitWith {};
		_bpos = [];
		{
			{
				if (random 1 > 0.2) then {_bpos pushBack [_x select 2, _x]}; //pick some; get height and pos
			} forEach ([_x] call BIS_fnc_buildingPositions);
		} forEach (_dangerCausedBy nearObjects ["HouseBase", 50]);
		if (count _bpos > 0) then {
			_bpos sort false; //prefer higher positions
			[_dude,(_dangerUntil + 300),_bpos] spawn {
				PARAMS_3(_dude,_dangerUntil,_bpos);
				private "_timeout";
                _dude setVariable [QGVAR(housing),true,false];
				while {count _bpos > 0 && {diag_ticktime < _dangerUntil} && {_dude call FUNC(isValidUnitC)}} do {
					waitUntil {isNil {_dude getVariable QGVAR(shooting)}}; // stopped shooting
					TRACE_1("House search duty",_dude);
					doStop _dude;
					_dude setUnitPos "Up";
					_dude doMove (([_bpos] call BIS_fnc_arrayShift) select 1);
					_timeout = diag_ticktime + 45;
					waitUntil {unitReady _dude || {_dude call FUNC(isUnc)} || {_timeout < diag_ticktime}};
					if (_dude call FUNC(isUnderRoof)) then {_dude setUnitPosWeak "Up"} else {_dude setUnitPosWeak "Auto"};
					doStop _dude;
					sleep (5 + random 10);
				};
				if (alive _dude) then { // regroup
					_dude setUnitPos "Auto";
					[_dude] joinSilent (group _dude);
                    _dude setVariable [QGVAR(housing),false,false];
				};
			};
		};
	};

	// check for cover near and divert
	_coverRange = if (currentWaypoint _grp == count waypoints _grp) then {100} else {20};
	[_unit,_dangerCausedBy,_dangerUntil,_coverRange] call FUNC(moveToCover);

};
