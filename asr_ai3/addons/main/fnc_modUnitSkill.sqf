//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_unit);

if (GVAR(enabled) == 1 && GVAR(setskills) > 0) then {
	_unit spawn {
		// wait a few seconds
		sleep 5 + random 15;
		if (_this call FUNC(isValidUnit)) then {_this spawn FUNC(setUnitSkill)};
	};
};
