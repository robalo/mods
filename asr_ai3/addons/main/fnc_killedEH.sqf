//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];
if (!local _unit) exitWith {};

scopeName "main";

// get group of killed unit
private _grp = group _unit;
if (isNull _grp) exitWith {LOG("Group is null, exiting")};

// get the rest of units that are alive
private _units = _grp call FUNC(getAlive);
private _remaining = count _units;

// exit if none remaining
if (_remaining == 0) exitWith {LOG("Group is empty, exiting")};

// reduce morale for all remaining units
{ _x setskill ["courage",(_x skill "courage")-0.05] } forEach _units;

// check if we can continue
if (GVAR(joinlast) == 0 || {_grp getVariable [QGVAR(initgroupsize),-1] <= GVAR(joinlast)}) exitWith {LOG("disabled, exiting")};

// if one of them is a player, do nothing
if (_grp call FUNC(hasPlayer)) exitWith {LOG("Group with player, exiting")};

// if leader valid
if !((leader _grp) call FUNC(isValidUnitC)) exitWith {LOG("Conditions unmet for survivor leader, exit")};

// check for DAC or UCD caching
if (_grp getVariable ["isreduced", 0] == 1 || {count (_grp getVariable ["UCD_cachedObjects", []]) > 0}) exitWith {LOG("Group has cached members, exiting")};

TRACE_2("Group",_grp,_remaining);
sleep 1;

// if down to configured limit, initiate group merging
if (_remaining <= GVAR(joinlast)) then {
	TRACE_1("Group will try to merge with others",_grp);
	while {count (_grp call FUNC(getAlive)) > 0} do {
		_units = _grp call FUNC(getAlive);
		if (count _units > GVAR(joinlast)) then {breakTo "main"}; // we were reinforced, cancel group merging
		sleep 120;
		{	scopeName "forEachAliveDude";
            sleep 30;
			private _thisunit = _x;
			if (_thisunit call FUNC(isValidUnitC) && {isNull objectParent _thisunit && canStand _thisunit}) then {
				private _ngroups = [_grp,200] call FUNC(nearFactionGroups);
				TRACE_2("Friendlies in the area",_thisunit,_ngroups);
				{	// looks for other groups of the same faction nearby, also on foot, and joins the closest one
					private _ngrp = _x;
                    private _ncnt = count units _ngrp;
					if (_ncnt < 12 && {_ncnt < _ngrp getVariable [QGVAR(initgroupsize),-1]}) then { // target group small enough and also took casualties
						private _nleader = leader _ngrp;
						if (_nleader call FUNC(isValidUnitC) && {!isPlayer _nleader && isNull objectParent _nleader} && {canStand _nleader && canStand _thisunit}) then {
							TRACE_2("Joins another group",_thisunit,_ngrp);
							[_thisunit] joinSilent _ngrp;
                            if (rating _thisunit > rating _nleader) then {_ngrp selectLeader _thisunit}; // take charge if higher rank/rating
							breakTo "forEachAliveDude";
						};
					};
                    sleep 0.5;
				} forEach _ngroups;
			};
		} forEach _units;
	};
};
