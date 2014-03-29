//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private "_unc";
_unc = switch (lifeState _this) do
{
	case "DEAD": {true};
	case "UNCONSCIOUS": {true};
	case "INCAPACITATED": {true};
	default {false};
};
TRACE_2("ISUNC",_this,_unc);
_unc
