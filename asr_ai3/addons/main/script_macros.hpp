#include "\x\cba\addons\main\script_macros_common.hpp"
#define FNCMAIN(var1) TRIPLES(PREFIX,main_fnc,var1)

#define ASR_AI_CFGREAD(var,vtype,def) \
if (isNil QGVAR(var)) then { \
	GVAR(var) = [([[QUOTE(PREFIX),QUOTE(COMPONENT),QUOTE(var)],configfile>>QUOTE(PREFIX)>>QUOTE(COMPONENT)>>QUOTE(var)] call bis_fnc_loadEntry),QUOTE(vtype),def] call CBA_fnc_getConfigEntry; \
}
