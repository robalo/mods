//#define DEBUG_MODE_FULL
#include "script_component.hpp"

while {!(GVAR(cfgQ) isEqualTo [])} do {
    (GVAR(cfgQ) deleteAt 0) call FUNC(configureUnit);
};

if (GVAR(packNVG)) then {
    {_x call FUNC(setupGear)} forEach allUnits;
};
