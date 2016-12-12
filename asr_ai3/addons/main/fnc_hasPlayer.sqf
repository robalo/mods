//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_grp"];
{isPlayer _x} count (units _grp) > 0
