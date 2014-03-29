//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private["_cfgw","_typenum","_type"];
_cfgw = configFile>>"CfgWeapons">>_this;
if !(isClass _cfgw) exitWith {"ITEM"};

_typenum = [_cfgw>>"asr_ai_wtype","number",0] call CBA_fnc_getConfigEntry;
TRACE_1("",_typenum);

_type = switch (_typenum) do {
	case 1: {"RIFLE"};
	case 2: {"PISTOL"};
	case 3: {"SNIPER"};
	case 4: {"LAUNCHER"};
	case 5: {"MG"};
	case 6: {"AR"};
	default {"ITEM"};
};

TRACE_1("",_type);
_type
