//#define DEBUG_MODE_FULL
#include "script_component.hpp"

PARAMS_2(_position,_array);

DEFAULT_PARAM(2,_radius,10^5);
DEFAULT_PARAM(3,_code,{true});

private "_return";
_return = if (count _this > 2) then {[]} else {objNull};
{
	_distance = if (typeName _x == "GROUP") then {_position distance (getPosATL leader _x)} else {_position distance _x};
	if (_distance < _radius) then {
		if !(call _code) exitwith {};
		if (count _this > 2) then {
			_return set [count _return, _x];
		} else {
			_radius = _distance;
			_return = _x;
		};
	};
} foreach _array;
_return
