//#define DEBUG_MODE_FULL
#include "script_component.hpp"

PARAMS_1(_unit);
private["_to","_need","_leaderpos","_search","_lootchkcnt","_lootchktime","_checkit"];
if (isNull _unit || !alive _unit) exitWith {};
if (getText (configFile >> "cfgVehicles" >> (typeOf _unit) >> "genericNames") == "VRMen") exitWith {};
if (_unit getVariable[QGVAR(inprogress),false]) exitWith {};
//diag_log format ["%1 | %2 | Rearming starts for this unit.",time,_unit];
_unit setVariable[QGVAR(inprogress),true];

// So what do I need ?
_need = _unit call FUNC(inventoryCheck);
//diag_log format ["%1 | %2 | Inventory check done for this unit.",time,_unit];
TRACE_2("NEED",_unit,_need);

if (!_need) exitWith {
	//diag_log format ["%1 | %2 | Rearming ends for this unit. Nothing needed.",time,_unit];
	_unit setVariable[QGVAR(inprogress),false];
};

if (!(_unit call FUNC(isReady))) exitWith {
	TRACE_1("BUSY",_unit);
	_unit setVariable[QGVAR(inprogress),false];
};

_leaderpos = getposATL _unit;

// Look for places
//diag_log format ["%1 | %2 | Searching for places to loot.",time,_unit];
_search = [];

{ // process near humans
	if (!(isNull _x || isPlayer _x || _x == _unit)) then {
		if (!alive _x || {!(backpack _x == "" || {(side _x) getFriend (side _unit) < 0.6})}) then { //not alive or (neither enemy nor without pack)
			_search pushBack _x;
		};
	};
} forEach nearestObjects [_unit, ["CAManbase"], GVAR(radius)];

// other containers
_search append nearestObjects [_unit, ["ReammoBox","ReammoBox_F","WeaponHolderSimulated","LandVehicle"], GVAR(radius)];

//diag_log format ["%1 | %2 | Found places to loot: %3",time,_unit,_search];

{
	// allow checking a few times per interval
	_lootchkcnt = _x getVariable [QGVAR(lootcnt),0];
	_lootchktime = _x getVariable [QGVAR(loottime),0];
	TRACE_3("",_unit,_lootchkcnt,_lootchktime);
	_checkit = true;
	if (_lootchkcnt < 1) then {
		INC(_lootchkcnt);
		_x setVariable [QGVAR(lootcnt),_lootchkcnt];
	} else {
		if (time < _lootchktime + 300) then {
			_checkit = false;
		} else {
			_x setVariable [QGVAR(loottime),time];
			_x setVariable [QGVAR(lootcnt),0];
		};
	};
	
	if (_checkit) then {
		_unit doWatch _x;
		_unit doMove (getPosATL _x);
		waitUntil {_unit distance _x < 4};
		_unit doWatch _x;
		if (alive _x && {_x isKindOf "CAManbase"}) then {_unit action ["REARM",unitBackpack _x]} else {_unit action ["REARM",_x]};
	};
	if !(_unit call FUNC(isReady)) exitWith {};
} forEach _search;

[_unit,_leaderpos] spawn {
	PARAMS_2(_unit,_pos);
	private ["_group"];
	_group = group _unit;
	_unit doWatch objNull;
	if (_unit == leader _group) then {_unit doMove _pos} else {[_unit] joinSilent _group};
	sleep 7; //finish reloading anim
	_unit call FNCMAIN(pistolToPrimary);
};

_unit setVariable[QGVAR(inprogress),false];
//diag_log format ["%1 | %2 | Rearming ends for this unit.",time,_unit];
