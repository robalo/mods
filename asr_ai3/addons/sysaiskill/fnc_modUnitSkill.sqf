//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_unit);

if (GVAR(enabled) == 1 && GVAR(setskills) > 0) then {
	// wait a few seconds
	sleep 5 + random 5;
	if (_unit call FUNC(isValidUnit)) then {[_unit] call FUNC(setUnitSkill)};
};
