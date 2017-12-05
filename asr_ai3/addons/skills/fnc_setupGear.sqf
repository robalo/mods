//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_gettingDark"];

if (!isPlayer _unit && {_unit call FNCMAIN(isValidUnit)}) then {
	[_unit, _gettingDark] call FUNC(showHideNVG); // show NVG ? yeah, but only if it's (getting) dark
};
