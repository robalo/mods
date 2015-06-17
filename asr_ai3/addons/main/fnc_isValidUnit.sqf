//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_unit);
if (isNull _unit) exitWith {TRACE_1("is Null",_unit); false};
if (!alive _unit) exitWith {TRACE_1("is Dead",_unit); false};
if (_unit isKindOf "Civilian") exitWith {TRACE_1("is Civilian",_unit); false};
if (_unit getVariable ["asr_ai_exclude", false]) exitWith {TRACE_1("is Excluded",_unit); false};
TRACE_1("is Valid",_unit); 
true
