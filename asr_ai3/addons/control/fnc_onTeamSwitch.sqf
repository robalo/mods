//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if (hasInterface) then {
    params ["_from", "_to"];
/*
    private _units = units _to;
    if (GVAR(pgaistamina) < 2) then {
        {_x enableStamina (isPlayer _x || GVAR(pgaistamina) == 1)} forEach _units;
    };
*/
    if (GVAR(onteamswitchleader)) then {(group _to) selectLeader _to};
    //_from enableAI "TeamSwitch";
};
