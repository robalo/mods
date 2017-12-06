//#define DEBUG_MODE_FULL
#include "script_component.hpp"
LOG(MSG_INIT);

if (isServer) then {
    ["itemAdd", [QGVAR(cfgLoop), {call FUNC(configLoop);}, 30]] call BIS_fnc_loop;
};
