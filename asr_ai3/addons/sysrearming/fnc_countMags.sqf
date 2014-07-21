// return number of mags that unit (param 1) has from a list (param 2)
//#define DEBUG_MODE_FULL
#include "script_component.hpp"

PARAMS_2(_unit,_check);

private["_m","_c","_magpool"];
_c = 0;
_magpool = magazines _unit;

{ 
	_m = _x;
	_c = _c + ({_x == _m} count _magpool);
} forEach _check;
TRACE_2("MAG COUNT",_unit,_c);
_c
