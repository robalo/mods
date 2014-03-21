//based on CBA_fnc_searchNearby
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_group);
DEFAULT_PARAM(1,_range,50);
DEFAULT_PARAM(2,_posdelay,10);
if !(_group call CBA_fnc_isalive) exitWith {};
private ["_leader","_array","_nearhouses","_building","_indices","_units","_idx","_iter"];
_group lockwp true;
_leader = leader _group;
_array = [];
_nearhouses = (getPosATL _leader) nearObjects ["House", _range];
TRACE_2("Buildings in 50m range",_group,_nearhouses);
scopeName "main";

{ // get near buildings not searched
	if !(_x getVariable [QGVAR(searched),false]) then {
		_i = 0;
		while {str(_x buildingPos _i) != "[0,0,0]"} do {INC(_i)};
		//TRACE_2("",_x,_i);
		if (_i > 2) then {
			_array set [0, _x];
			_array set [1, _i];
			breakTo "main";
		};
	};
} forEach _nearhouses;

if (count _array != 2) exitWith {_group lockwp false};
_building = _array select 0;
_indices = _array select 1;

_group setformdir ([_leader, _building] call bis_fnc_dirto);
_units = _group call CBA_fnc_getAlive;
_idx = (count _units) - 1;
_iter = 0;
TRACE_2("Sending units from group to search house",_group,_array);
_building setVariable [QGVAR(searched),true];

while {_iter < (count _units) min (floor _indices/2) min 3 min floor ((count _units)/2)} do { // no more than 3, half of team or half number of building positions
	sleep 2 + random 3;
	_unit = _units select _idx;
	if (_unit != _leader && canStand _unit && vehicle _unit == _unit) then {[_unit,_array,_posdelay] spawn FUNC(searchHouse)}; // do not send leaders or wounded soldiers
	DEC(_idx);
	INC(_iter);
};

waituntil {sleep 3;	_units = _group call CBA_fnc_getAlive; {unitready _x} count _units >= (count _units) - 1};
_group lockwp false;
