//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private "_item";
_item = "";
{	if (getText(configFile>>"CfgWeapons">>_x>>"simulation") == "NVGoggles") exitWith {_item = _x};
} forEach assignedItems _this;
{	if (getText(configFile>>"CfgWeapons">>_x>>"simulation") == "NVGoggles") exitWith {_item = _x};
} forEach items _this;
TRACE_1("",_item);
_item
