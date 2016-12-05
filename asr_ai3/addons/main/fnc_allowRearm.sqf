//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if !(_this call FUNC(isValidUnitC)) exitWith {false};
if ((group _this) call FUNC(grpHasWP)) exitWith {false};
if (currentCommand _this != "" || {!(isNull objectParent _this)} || {behaviour _this == "STEALTH"} || {behaviour _this == "COMBAT" && someAmmo _this} || {captive _this}) exitWith {false};
true
