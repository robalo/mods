//#define DEBUG_MODE_FULL
#include "script_component.hpp"
_this call FUNC(isValidUnit) && {lifeState _this == "HEALTHY"} && {!(_this getVariable ["BIS_revive_incapacitated", false])}
