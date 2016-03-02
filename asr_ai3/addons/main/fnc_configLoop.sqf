//#define DEBUG_MODE_FULL
#include "script_component.hpp"

while {count GVAR(configQueue) > 0} do {
    (GVAR(configQueue) deleteAt 0) call FUNC(configureUnit);
};

if (GVAR(packNVG) == 1) then {
    {_x call FUNC(setupGear)} forEach allUnits;
};
