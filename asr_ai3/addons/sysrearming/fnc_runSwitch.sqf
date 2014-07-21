//#define DEBUG_MODE_FULL
#include "script_component.hpp"
GVAR(run) = if (count _this > 0) then {_this select 0} else {if (GVAR(run) == 1) then {0} else {1}};
call FUNC(menuToggle);
