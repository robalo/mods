//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit","_damage"];

if (GVAR(fallDown) && {local _unit} && {!isPlayer _unit} && {_damage > 0.1} && {_unit call FUNC(isValidUnitC)}) then {
    // GTFO of static weapons when hit
    private _veh = vehicle _unit;
    if (_veh isKindOf "StaticWeapon" && {_damage > 0.5}) then {doGetOut _unit};
    // fall
    [_unit] spawn FUNC(fallDown);
};
