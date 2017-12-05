//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_selection", "_damage"];

// move out static weapon unit just before death
if ((vehicle _unit) isKindOf "StaticWeapon" && {
    call {
        if (_selection == "") exitWith {_damage >= 1};
        if (_selection == "head") exitWith {_damage >= GVAR(crithit) select 0};
        if (_selection == "body") exitWith {_damage >= GVAR(crithit) select 1};
        false
    };
}) then {moveOut _unit};
