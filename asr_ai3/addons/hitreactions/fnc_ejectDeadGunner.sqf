//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_selection", "_damage"];

// move out static weapon unit just before death
// TODO: extend to others (technicals ?)
if (((vehicle _unit) isKindOf "StaticWeapon") && {
    call {
        if (_selection == "") exitWith {_damage >= 1};
        if (_selection == "head") exitWith {_damage >= GVAR(critHeadHit)};
        if (_selection == "body") exitWith {_damage >= GVAR(critBodyHit)};
        false
    };
}) then {moveOut _unit};
