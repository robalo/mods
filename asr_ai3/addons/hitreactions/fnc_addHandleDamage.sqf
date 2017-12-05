//#define DEBUG_MODE_FULL
// no longer needed since 1.68 changelog said; update: still needed
#include "script_component.hpp"
params ["_unit"];

if (_unit call FNCMAIN(isValidUnit)) then {
    _unit addEventHandler ["HandleDamage", FUNC(ejectDeadGunner)];
};
