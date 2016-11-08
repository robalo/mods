//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if (!(_this call FUNC(isValidUnitC))) exitWith {false};
private _grp = group _this;
if (currentWaypoint _grp != count waypoints _grp) exitWith {false};
if (currentCommand _this != "" || {vehicle _this != _this} || {behaviour _this == "STEALTH"} || {behaviour _this == "COMBAT" && someAmmo _this} || {captive _this}) exitWith {false};
true
