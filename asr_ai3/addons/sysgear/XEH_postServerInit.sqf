//#define DEBUG_MODE_FULL
#include "script_component.hpp"
LOG(MSG_INIT);

if (GVAR(packNVG) == 1) then {
	["itemAdd", [QGVAR(gearLoop), {[] spawn {{_x call FUNC(setupGear); sleep 0.05} forEach allUnits}}, 60]] call BIS_fnc_loop;
};
