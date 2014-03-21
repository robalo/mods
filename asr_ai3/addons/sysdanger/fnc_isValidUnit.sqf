//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_unit);
if (isNull _unit) exitWith {false};
if (!alive _unit) exitWith {false};
if (_unit getVariable [QGVAR(exclude), false]) exitWith {false};
if (GVAR(civ) == 0 && getNumber(configFile>>"CfgVehicles">>(typeOf _unit)>>"side") == 3) exitWith {false};
if (_unit call FUNC(isUnc)) exitWith {false};
true
