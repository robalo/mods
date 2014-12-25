#define DEBUG_MODE_FULL
#include "script_component.hpp"

if (GVAR(dynsvd) > 0) then {
	sleep 60; // allow VD to be custom set first
	LOG(MSG_INIT);
	GVAR(startvd) = 900 max viewDistance;
	["itemAdd", [QGVAR(dvdloop), { [] call FUNC(changeVD); }, 120]] call BIS_fnc_loop;
};
