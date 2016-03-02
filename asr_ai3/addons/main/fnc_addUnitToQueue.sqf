//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];

if (GVAR(enabled) == 1) then {GVAR(configQueue) pushBack _unit};
