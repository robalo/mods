// return number of items that list (param 1) has from a list (param 2)
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_magpool", "_check"];

private _c = 0;
private "_m";
{
	_m = _x;
	_c = _c + ({_x == _m} count _magpool);
} forEach _check;
_c
