//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_selection", "_damage"];

// move out static weapon unit just before death
if ((vehicle _unit) isKindOf "StaticWeapon" && {
    switch _selection do {
        case "": {_damage >= 1};
        case "head": {_damage >= GVAR(crithit) select 0};
        case "body": {_damage >= GVAR(crithit) select 1};
        default {false};
    }
}) then {moveOut _unit};
