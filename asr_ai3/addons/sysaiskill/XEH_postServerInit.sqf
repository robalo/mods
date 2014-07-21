//#define DEBUG_MODE_FULL
#include "script_component.hpp"

LOG(MSG_INIT);

if (isNil "ALIVE_profileSystem") then {
	["itemAdd", [QGVAR(initgs), { {if (_x getVariable [QGVAR(initgroupsize), -1] == -1) then {_x setVariable [QGVAR(initgroupsize), count units _x]}} forEach allGroups; }, 10]] call BIS_fnc_loop;
} else { // avoid any issues when alive profile module is present
	GVAR(joinlast) = 0;
};
