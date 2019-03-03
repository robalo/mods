//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private _lifeState = lifeState _this;
(_lifeState == "HEALTHY" || _lifeState == "INJURED") && {!(_this getVariable ["BIS_revive_incapacitated", false])} && {_this call FUNC(isValidUnit)}
