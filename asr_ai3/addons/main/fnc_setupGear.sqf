//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_unit);

// show NVG ? yeah, but only if it's dark
if (!isPlayer _unit && _unit call FUNC(isValidUnit)) then { [_unit,(sunOrMoon < 1)] call FUNC(showHideNVG); _unit call FUNC(replaceOptics); };
