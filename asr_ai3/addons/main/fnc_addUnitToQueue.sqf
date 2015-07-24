//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_unit);

if (GVAR(enabled) == 1) then {
    GVAR(configQueue) pushBack _unit;
};
