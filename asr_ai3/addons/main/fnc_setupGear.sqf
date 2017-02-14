//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];

if (!isPlayer _unit && {_unit call FUNC(isValidUnit)}) then {
	[_unit,(sunOrMoon < 1 || moonIntensity > 0.8)] call FUNC(showHideNVG); // show NVG ? yeah, but only if it's (getting) dark
};
