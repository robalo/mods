#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredAddons[] = {"CBA_MAIN"};
		requiredVersion = REQUIRED_VERSION;
		versionDesc = "ASR AI3";
		versionAct = "";
		VERSION_CONFIG;
        author = "Robalo";
	};
};

class Extended_PreStart_EventHandlers {
	ADDON = QUOTE(call COMPILE_FILE(XEH_preStart));
};

class Extended_PreInit_EventHandlers {
	ADDON = QUOTE(call COMPILE_FILE(XEH_preInit));
};
