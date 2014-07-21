//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if (GVAR(feature) == 0) exitWith {};
LOG(MSG_INIT);

GVAR(menu) = [["EQUIPMENT AI", false]];

FUNC(menuToggle) = {
	if (GVAR(run) == 1) then {
		GVAR(menu) set [1,["Enable Rearming (ALL)", [2], "", -5, [ ["expression", QUOTE([1] call FUNC(runSwitch))] ], "0", "0", -1]];
		GVAR(menu) set [2,["Disable Rearming (ALL)", [3], "", -5, [ ["expression", QUOTE([0] call FUNC(runSwitch))] ], "1", "1", -1]];
		if (time > 20) then {hintSilent "AI Rearming Enabled"};
	} else {
		GVAR(menu) set [1,["Enable Rearming (ALL)", [2], "", -5, [ ["expression", QUOTE([1] call FUNC(runSwitch))] ], "1", "1", -1]];
		GVAR(menu) set [2,["Disable Rearming (ALL)", [3], "", -5, [ ["expression", QUOTE([0] call FUNC(runSwitch))] ], "0", "0", -1]];
		if (time > 20) then {hintSilent "AI Rearming Disabled"};
	};
};

FUNC(runSwitch) = {
	GVAR(run) = if (count _this > 0) then {_this select 0} else {if (GVAR(run) == 1) then {0} else {1}};
	call FUNC(menuToggle);
};

// create comms menu options for player
call COMPILE_FILE2(\a3\functions_f\Misc\fn_commsMenuCreate.sqf);

[] spawn {
	waituntil {!isNil "BIS_MENU_GroupCommunication"};
	call FUNC(menuToggle);
	BIS_MENU_GroupCommunication set [count BIS_MENU_GroupCommunication, ["EQUIPMENT AI", [0], QUOTE(#USER:GVAR(menu)), -5, [ ["expression", ""] ], "1", "1", -1]];
};
