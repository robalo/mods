//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_grp);
if (_grp getVariable [QGVAR(initgroupsize), -1] == -1) then {_grp setVariable [QGVAR(initgroupsize), count units _x]};
