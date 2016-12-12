//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];
if (!local _unit) exitWith {};

// get group of killed unit
private _grp = group _unit;
if (isNull _grp) exitWith {LOG("Group is null, exiting")};

// get the rest of units that are alive
private _units = _grp call FUNC(getAlive);
if (count _units == 0) exitWith {LOG("Group is empty, exiting")};

// reduce morale for all remaining units
{ _x setskill ["courage",0.01 max ((_x skill "courage") - 0.1)] } forEach _units;
