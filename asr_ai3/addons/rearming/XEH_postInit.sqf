//#define DEBUG_MODE_FULL
#include "script_component.hpp"
LOG(MSG_INIT);

if (isServer) then {
    ["itemAdd", [QGVAR(rearmLoop), {[] spawn FUNC(rearmAll);}, 300]] call BIS_fnc_loop;
};
