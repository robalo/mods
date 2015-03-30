//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_unit);

if (!isPlayer _unit && {_unit call FUNC(isValidUnit)}) then {
	if (GVAR(packNVG) == 1) then {[_unit,(sunOrMoon < 1)] call FUNC(showHideNVG)}; // show NVG ? yeah, but only if it's dark
};
