//#define DEBUG_MODE_FULL
#include "script_component.hpp"

PARAMS_1(_unit);
private["_to","_need","_leaderpos","_search","_loot"];
if (isNull _unit || !alive _unit) exitWith {};
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
_search = nearestObjects [_unit, ["ReammoBox","ReammoBox_F","WeaponHolderSimulated","CAManbase","LandVehicle"], GVAR(radius)];

//diag_log format ["%1 | %2 | Found places to loot: %3",time,_unit,_search];

{
	_loot = _x;
	if (!(isNull _loot || isPlayer _loot || _loot == _unit) && {!(_loot isKindOf "CAManbase" && alive _loot)}) then {
		// allow checking a few times per interval
		_lootcheckcnt = _loot getVariable [QGVAR(lootcnt),0];
		_lootchecktime = _loot getVariable [QGVAR(loottime),0];
		TRACE_3("",_unit,_lootcheckcnt,_lootchecktime);
		_checkit = true;
		if (_lootcheckcnt < 1) then {
			INC(_lootcheckcnt);
			_loot setVariable [QGVAR(lootcnt),_lootcheckcnt];
		} else {
			if (time < _lootchecktime + 300) then {
				_checkit = false;
			} else {
				_loot setVariable [QGVAR(loottime),time];
				_loot setVariable [QGVAR(lootcnt),0];
			};
		};
		
		if (_checkit) then {
			_unit doMove (getPosATL _loot);
			waitUntil {_unit distance _loot < 6};
			_unit doWatch _loot;
			waitUntil {_unit distance _loot < 3};
			_unit doWatch _loot;
			_unit action ["REARM",_loot];
		};
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
