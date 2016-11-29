//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];

if (_unit getVariable[QGVAR(inprogress),false]) exitWith {};
if (isPlayer _unit || {getText (configFile >> "cfgVehicles" >> (typeOf _unit) >> "genericNames") == "VRMen"}) exitWith {};

if (GVAR(debug_rearm)) then {diag_log format ["ASR AI3: %1 | %2 | [REARM] Start.",time,_unit]};
_unit setVariable[QGVAR(inprogress),true];

// So what do I need ?
private _need = _unit call FUNC(inventoryCheck);
if (GVAR(debug_rearm)) then {diag_log format ["ASR AI3: %1 | %2 | [REARM] Inventory check done for this unit.",time,_unit]};
TRACE_2("NEED",_unit,_need);

if (!_need) exitWith {
	if (GVAR(debug_rearm)) then {diag_log format ["ASR AI3: %1 | %2 | [REARM] Nothing needed. End.",time,_unit]};
	_unit setVariable[QGVAR(inprogress),false];
};

private _leaderpos = getPosWorld _unit;

// Look for places
if (GVAR(debug_rearm)) then {diag_log format ["ASR AI3: %1 | %2 | [REARM] Searching.",time,_unit]};
private _search = [];

{ // process near humans
	if (!(isNull _x || isPlayer _x || _x == _unit)) then {
		if (!alive _x || {!(backpack _x == "" || {(side _x) getFriend (side _unit) < 0.6})}) then { //not alive or (neither enemy nor without pack)
			_search pushBack _x;
		};
	};
} forEach nearestObjects [_unit, ["CAManbase"], GVAR(rearm)];

// other containers
_search append nearestObjects [_unit, ["ReammoBox","ReammoBox_F","WeaponHolderSimulated","LandVehicle"], GVAR(rearm)];

if (GVAR(debug_rearm)) then {diag_log format ["ASR AI3: %1 | %2 | [REARM] Places to loot: %3",time,_unit,_search]};

{
	scopeName "searching";
	// allow checking a few times per interval
	private _lootchkcnt = _x getVariable [QGVAR(lootcnt),0];
	private _lootchktime = _x getVariable [QGVAR(loottime),0];
	TRACE_3("",_unit,_lootchkcnt,_lootchktime);
	private _checkit = true;
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
		_unit doMove (getPosWorld _x);
		waitUntil {_unit distance _x < 4};
		_unit doWatch _x;
		if (alive _x && {_x isKindOf "CAManbase"}) then {_unit action ["REARM",unitBackpack _x]} else {_unit action ["REARM",_x]};
	};
	if !(_unit call FUNC(isReady)) then {breakOut "searching"};
} forEach _search;

[_unit,_leaderpos] spawn {
	params ["_unit", "_pos"];
	private _group = group _unit;
	_unit doWatch objNull;
	if (_unit == leader _group) then {_unit doMove _pos} else {[_unit] joinSilent _group};
	sleep 7; //finish reloading anim
	_unit call FUNC(pistolToPrimary);
};

_unit setVariable[QGVAR(inprogress),false];
if (GVAR(debug_rearm)) then {diag_log format ["ASR AI3: %1 | %2 | [REARM] Done.",time,_unit]};
