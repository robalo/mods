//#define DEBUG_MODE_FULL
#include "script_component.hpp"

while {!(GVAR(cfgQ) isEqualTo [])} do {
    (GVAR(cfgQ) deleteAt 0) call FUNC(configureUnit);
};

if (GVAR(packNVG)) then {
    private _gettingDark = (sunOrMoon < 1 || moonIntensity > 0.8);
    {[_x, _gettingDark] call FUNC(setupGear)} forEach allUnits;
};
