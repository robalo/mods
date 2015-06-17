//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if (GVAR(enabled) == 1) then {
    LOG(MSG_INIT);

    //Disables fatigue for AI units in player's group so they are able to keep up
    if (hasInterface && {GVAR(disableAIPGfatigue) == 1}) then {
        {_x enableFatigue (isPlayer _x)} forEach (units group player);
    };
};
