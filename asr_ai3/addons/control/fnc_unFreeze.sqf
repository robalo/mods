//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_caller"];
private _units = groupSelectedUnits _caller;

{
    private _b = behaviour _x;
    [_x] joinSilent (group _caller);
    _x enableAI "TEAMSWITCH";
    _x disableAI "AUTOCOMBAT";
    _x forcespeed -1;
    _x setBehaviour "SAFE";
    _x doFollow _caller;
    _x setBehaviour _b;
} forEach _units;

{_caller groupSelectUnit [_x, false]} forEach _units;

true
