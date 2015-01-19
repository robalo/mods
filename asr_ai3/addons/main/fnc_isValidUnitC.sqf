//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_unit);
if (_unit call FUNC(isUnc)) exitWith {false};
(_unit call FUNC(isValidUnit))
