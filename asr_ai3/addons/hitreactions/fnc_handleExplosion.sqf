//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit","_damage"];

if (GVAR(fallDown) && {local _unit} && {!isPlayer _unit} && {_damage > 0.1} && {_unit call FNCMAIN(isValidUnitC)}) then {
    // GTFO of static weapons when hit
    if ((vehicle _unit) isKindOf "StaticWeapon" && {_damage > 0.5}) then {doGetOut _unit};
    // fall
    [_unit] spawn FUNC(fallDown);
};
