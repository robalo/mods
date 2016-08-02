//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private _grp = group player;
if (GVAR(onteamswitchleader)) then {_grp selectLeader player};
{_x enableStamina (isPlayer _x || GVAR(pgaistamina))} forEach (units _grp);
