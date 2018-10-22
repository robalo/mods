//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if (hasInterface) then {
    params ["_from", "_to"];
    if (GVAR(onteamswitchleader)) then {(group _to) selectLeader _to};
    // attempt fix for AI sliding off to fuck knows where or getting stuck in place
    private _b = behaviour _from;
    _from disableAI "AUTOCOMBAT";
    _from disableAI "COVER";
    _from setBehaviour "SAFE";
    //_from spawn {sleep 0.5; waitUntil {speed _this > 1}; _this enableAI "COVER";};
    _from enableAI "COVER";
    _from setBehaviour _b;
};
