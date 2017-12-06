//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_grp"];
((units _grp) select {isPlayer _x}) isEqualTo []
