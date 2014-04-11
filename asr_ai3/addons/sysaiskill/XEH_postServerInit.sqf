#define DEBUG_MODE_FULL
#include "script_component.hpp"

if (GVAR(dynsvd) == 0) exitWith {
	LOG("disabled");
};
LOG(MSG_INIT);

GVAR(startvd) = 900 max viewDistance;
["itemAdd", [QGVAR(dvdloop), { [] call FUNC(changeVD); }, 60]] call BIS_fnc_loop;
