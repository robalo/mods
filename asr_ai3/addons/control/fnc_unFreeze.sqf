//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_caller"];
private _units = groupSelectedUnits _caller;

{
    [_x] joinSilent (group _caller);
    _x enableAI "TEAMSWITCH";
    _x forcespeed -1;
    _x doFollow _caller;
} forEach _units;

{_caller groupSelectUnit [_x, false]} forEach _units;

true
