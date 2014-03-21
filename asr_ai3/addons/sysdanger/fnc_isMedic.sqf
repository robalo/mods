//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private ["_isMedic"];
_isMedic = getNumber(configFile >>"CfgVehicles">>(typeOf _this)>>"attendant") == 1;
_isMedic
