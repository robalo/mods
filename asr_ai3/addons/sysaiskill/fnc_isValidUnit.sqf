//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_unit);
if (isNull _unit) exitWith {false};
if (!alive _unit) exitWith {false};
if (_unit getVariable ["asr_ai_exclude", false]) exitWith {false};
true
