//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private "_grp";
_grp = group player;
_grp selectLeader player;
if (GVAR(disableAIPGfatigue) == 1) then {{_x enableFatigue (isPlayer _x)} forEach (units _grp)};
