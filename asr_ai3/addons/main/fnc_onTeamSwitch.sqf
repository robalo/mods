//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private _grp = group player;
if (GVAR(onteamswitchleader)) then {_grp selectLeader player};
if (GVAR(pgaistamina) < 2) then {
    {_x enableStamina (isPlayer _x || GVAR(pgaistamina) == 1)} forEach (units _grp);
};
