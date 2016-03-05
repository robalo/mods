//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_position", "_array", ["_radius", 10^5], ["_code", {true}]];

private "_return";
_return = if (count _this > 2) then {[]} else {objNull};
{
	_distance = if (typeName _x == "GROUP") then {_position distance (getPosATL leader _x)} else {_position distance _x};
	if (_distance < _radius) then {
		scopename "if_distance";
		if !(call _code) then {breakOut "if_distance"};
		if (count _this > 2) then {
			_return pushBack _x;
		} else {
			_radius = _distance;
			_return = _x;
		};
	};
} foreach _array;
_return
