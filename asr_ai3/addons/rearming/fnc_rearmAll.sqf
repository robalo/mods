//#define DEBUG_MODE_FULL
#include "script_component.hpp"

if (GVAR(rearm) > 0) then {
    { // cycle all groups
        if (_x call FNCMAIN(hasNoPlayer)) then {
            private _a = (units _x) apply {_x spawn FUNC(rearm)};
        };
        sleep 1;
    } forEach allGroups;
};
