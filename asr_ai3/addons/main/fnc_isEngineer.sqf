//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private ["_is"];
_is = getNumber(configFile >>"CfgVehicles">>(typeOf _this)>>"engineer") == 1;
_is
