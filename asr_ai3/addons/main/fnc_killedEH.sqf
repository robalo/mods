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

// exit if none remaining
if (_remaining == 0) exitWith {LOG("Group is empty, exiting")};

// reduce morale for all remaining units
{ _x setskill ["courage",(_x skill "courage")-0.025] } forEach _units;

/*
// check if dead guy dropped a launcher
ASDG_launcher = "";
{
	_ctnr = _x;
	{
		if (_x call FUNC(getWeaponType) == "LAUNCHER") then {
			ASDG_launcher = _x;
			breakTo "main";
		};
	} forEach weaponCargo _ctnr;
} forEach nearestObjects [_this select 0, ["WeaponHolderSimulated"], 2];

hint ASDG_launcher;
*/

// if one of them is a player, do nothing
if ({isPlayer _x} count _units > 0) exitWith {LOG("Group with player, exiting")};

// get initial group size
_grpinitsize = _grp getVariable [QGVAR(initgroupsize),-1];

// check for DAC caching
_grpisreduced = _grp getVariable ["isreduced", 0] == 1;

// check for UCD caching
_grpisreduced = count (_grp getVariable ["UCD_cachedObjects", []]) > 0;

sleep 1;

// do nothing if group is reduced
if (_grpisreduced) exitWith {LOG("Group has cached members, exiting")};

TRACE_3("Group",_grp,_grpinitsize,_remaining);

// if down to configured limit, initiate group merging
if (_remaining <= GVAR(joinlast) && _grpinitsize > GVAR(joinlast)) then {
	TRACE_1("Group will try to merge with others",_grp);
	while {count (_grp call CBA_fnc_getAlive) > 0} do {
		_units = _grp call CBA_fnc_getAlive;
		if (count _units > GVAR(joinlast)) then {breakTo "main"}; // we were reinforced, cancel group merging
		{	scopeName "forEachAliveDude";
			_thisunit = _x;
			if (_thisunit call FUNC(isValidUnitC)) then {
				if (vehicle _thisunit == _thisunit && canStand _thisunit) then { // on foot
					sleep (20 + random 10);
					_ngroups = [_grp,200] call FUNC(nearFactionGroups);
					TRACE_2("Friendlies in the area",_thisunit,_ngroups);
					{	// looks for other groups of the same faction nearby, also on foot, and joins the closest one
						_ngrp = _x;
						if (count (units _ngrp) < 12) then {
							_nleader = leader _ngrp;
							if (_nleader call FUNC(isValidUnitC) && {!isPlayer _nleader && vehicle _nleader == _nleader} && {canStand _nleader && canStand _thisunit}) then {
								TRACE_2("Joins another group",_thisunit,_ngrp);
								_thisunit allowFleeing 0.1; //the unit is probably fleeing but now it found some friends, morale boost :)
								[_thisunit] joinSilent _ngrp;
								_thisunit doFollow _nleader;
								breakTo "forEachAliveDude";
							};
						};
					} forEach _ngroups;
				};
			};
		} forEach _units;
		sleep 120;
	};
	// no more units, clean up
	//deleteGroup _grp; //says here this happens automagically: https://community.bistudio.com/wiki/createGroup
};
