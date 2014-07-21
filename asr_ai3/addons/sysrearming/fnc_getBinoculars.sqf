//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private "_binocs";
_binocs = [];

{ // find binocs excluding items in black list
	if (getNumber (configFile>>"CfgWeapons">>_x>>"type") == 4096) then {
		_binocs set [count _binocs, _x];
	};
} forEach weapons _this;
TRACE_1("",_binocs);
_binocs;
