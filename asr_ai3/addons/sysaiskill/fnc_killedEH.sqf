//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if (!isServer) exitWith {};
private ["_grp","_units","_grpinitsize","_grpisreduced","_remaining","_thisunit","_ngroups","_nleader","_ngrp"];

scopeName "main";

// get group of killed unit
_grp = group (_this select 0);

if (isNull _grp) exitWith {LOG("Group is null, exiting")};

// get the rest of units that are alive
_units = _grp call CBA_fnc_getAlive;
_remaining = count _units;

// if one of them is a player, do nothing
if ({isPlayer _x} count _units > 0) exitWith {LOG("Group with player, exiting")};

// get initial group size
_grpinitsize = _grp getVariable [QGVAR(initgroupsize),-1];

// check for DAC
_grpisreduced = _grp getVariable ["isreduced", 0];

sleep 1;

// do nothing if group is reduced by DAC
if (_grpisreduced == 1) exitWith {LOG("Group reduced by DAC, exiting")};

TRACE_3("Group",_grp,_grpinitsize,_remaining);

// if down to configured limit, initiate group merging
if (_remaining <= GVAR(joinlast) && _grpinitsize > GVAR(joinlast)) then {
	TRACE_1("Group will try to merge with others",_grp);
	while {count (_grp call CBA_fnc_getAlive) > 0} do {
		_units = _grp call CBA_fnc_getAlive;
		if (count _units > GVAR(joinlast)) then {breakTo "main"}; // we were reinforced, cancel group merging
		{	scopeName "forEachAliveDude";
			_thisunit = _x;
			if (_thisunit call FUNC(isValidUnit) && !(_thisunit call FNCMAIN(isUnc))) then {
				if (vehicle _thisunit == _thisunit && canStand _thisunit) then { // on foot
					sleep (20 + random 10);
					_ngroups = [_grp,200] call FNCMAIN(nearFactionGroups);
					TRACE_2("Friendlies in the area",_thisunit,_ngroups);
					{	// looks for other groups of the same faction nearby, also on foot, and joins the closest one
						_ngrp = _x;
						if (count (units _ngrp) < 12) then {
							_nleader = leader _ngrp;
							if (_nleader call FUNC(isValidUnit) && !(_nleader call FNCMAIN(isUnc))) then {
								if (!isPlayer _nleader && vehicle _nleader == _nleader && canStand _nleader) then {
									if (canStand _thisunit) then {
										TRACE_2("Joins another group",_thisunit,_ngrp);
										_thisunit allowFleeing 0.1; //the unit is probably fleeing but now it found some friends, morale boost :)
										[_thisunit] joinSilent _ngrp;
										_thisunit doFollow _nleader;
										breakTo "forEachAliveDude";
									};
								};
							};
						};
					} forEach _ngroups;
				};
			};
		} forEach _units;
		sleep 120;
	};
	// no more units, clean up
	deleteGroup _grp;
};
