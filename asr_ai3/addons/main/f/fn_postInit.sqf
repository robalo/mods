//#define DEBUG_MODE_FULL
#include "\x\asr_ai3\addons\main\script_component.hpp"
LOG(MSG_INIT);

if (isServer) then {
	// Server, propagate settings and required functions to clients
	publicVariable "ASR_AI3_SETTINGS"; publicVariable QUOTE(FUNC(setSkill));
	if (GVAR(enabled) == 1) then {
		["itemAdd", [QGVAR(initgs), { {_x call FUNC(groupInit)} forEach allGroups; }, 20]] call BIS_fnc_loop;
		if (GVAR(packNVG) == 1) then {
			["itemAdd", [QGVAR(gearLoop), {[] spawn {{_x call FUNC(setupGear); sleep 0.2} forEach allUnits}}, 60]] call BIS_fnc_loop;
		};
	};
} else {
	// Wait for the server to push our settings and run them
	[] spawn {
		waitUntil {!isNil "ASR_AI3_SETTINGS"};
		[] call ASR_AI3_SETTINGS;
		LOG("ASR AI3 settings loaded from server.");
	};
};

if (!hasInterface && {GVAR(enabled) == 1 && GVAR(dynsvd) > 0}) then {
	[] spawn {
		sleep 60; // allow VD to be custom set first
		GVAR(startvd) = 900 max viewDistance;
		["itemAdd", [QGVAR(dvdloop), { [] call FUNC(changeVD); }, 120]] call BIS_fnc_loop;
	};
};

//make player leader on teamswitch; prevents AI left in place from sending stupid orders
if (hasInterface && GVAR(onteamswitchleader) > 0) then {[] spawn {waitUntil {time > 1 && {player == player}}; onTeamSwitch {(group player) selectLeader player}}};
