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
_nearhouses = (getPosATL _leader) nearObjects ["HouseBase", _range];
TRACE_2("Buildings in 50m range",_group,_nearhouses);
scopeName "main";

{ // get near buildings not searched
	if (_x getVariable [QGVAR(searched),0] < diag_ticktime) then {
		_i = 0;
		while {str(_x buildingPos _i) != "[0,0,0]"} do {INC(_i)};
		//TRACE_2("",_x,_i);
		if (_i > 0) then {
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
_building setVariable [QGVAR(searched),(diag_ticktime + 600)];

while {_iter < (count _units) min (floor _indices/2) min 3 min floor ((count _units)/2)} do { // no more than 3, half of team or half number of building positions
	sleep 2 + random 3;
	_unit = _units select _idx;
	if (_unit != _leader && canStand _unit && vehicle _unit == _unit && _unit call FUNC(isValidUnit)) then { // do not send leaders or wounded soldiers
		[_unit,_array,_posdelay] spawn {
			PARAMS_3(_unit,_house,_posdelay);
			private ["_indices","_timeout","_housepos"];
			_indices = [];

			// pick some positions
			for "_i" from 0 to (_house select 1) do {
				if (random 1 > 0.4) then {
					_indices set [count _indices,_i];
				};
			};

			if (count _indices > 0) then {
				{	if !(_unit call FUNC(isValidUnit)) exitWith {};
					_housepos = (_house select 0) buildingPos _x;
					TRACE_2("Try to move unit to house",_unit,_housepos);
					if (unitReady _unit && str _housepos != '[0,0,0]') then {
						waitUntil {isNil {_unit getVariable QGVAR(shooting)}}; // stopped shooting
						_unit setUnitPos "Up";
						_unit doMove _housepos;
						_timeout = time + 60;
						waitUntil {moveToCompleted _unit || moveToFailed _unit || unitReady _unit || _unit call FNCMAIN(isUnc) || _timeout < time};
						if (_unit call FUNC(isUnderRoof)) then {
							_unit setUnitPos "Up";
						} else {
							_unit setUnitPos "Auto";
						};
					};
					_posdelay = _posdelay + random (_posdelay * 2);
					sleep _posdelay;
					if (_unit ammo (currentWeapon _unit) < 20) then {sleep (_posdelay * 2)}; // snipe more
				} forEach _indices;
  
				if (alive _unit) then { // regroup
					_unit setUnitPos "Auto";
					[_unit] joinSilent (group _unit);
				};
			};
		};
	}; 
	// next unit
	DEC(_idx);
	INC(_iter);
};

waituntil {sleep 3;	_units = _group call CBA_fnc_getAlive; {unitready _x} count _units >= (count _units) - 1};
_group lockwp false;
_building setVariable [QGVAR(searched),(diag_ticktime + 30 + random 90)];
