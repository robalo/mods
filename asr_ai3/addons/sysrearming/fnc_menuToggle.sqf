//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if (GVAR(run) == 1) then {
	GVAR(menu) set [1,["Enable Rearming (ALL)", [2], "", -5, [ ["expression", QUOTE([1] call FUNC(runSwitch))] ], "0", "0"]];
	GVAR(menu) set [2,["Disable Rearming (ALL)", [3], "", -5, [ ["expression", QUOTE([0] call FUNC(runSwitch))] ], "1", "1"]];
	if (time > 20) then {hintSilent "AI Rearming Enabled"};
} else {
	GVAR(menu) set [1,["Enable Rearming (ALL)", [2], "", -5, [ ["expression", QUOTE([1] call FUNC(runSwitch))] ], "1", "1"]];
	GVAR(menu) set [2,["Disable Rearming (ALL)", [3], "", -5, [ ["expression", QUOTE([0] call FUNC(runSwitch))] ], "0", "0"]];
	if (time > 20) then {hintSilent "AI Rearming Disabled"};
};
