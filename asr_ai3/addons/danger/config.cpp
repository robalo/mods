#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        addonRootClass = "A3_Characters_F";
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredAddons[] = {QUOTE(MAIN_ADDON)};
		requiredVersion = REQUIRED_VERSION;
		versionDesc = "ASR AI3";
		versionAct = "";
		VERSION_CONFIG;
        author = "Robalo";
        authors[] = {"Robalo","Raptoer"};
	};
};

PRELOAD_ADDONS;

class Extended_PreInit_EventHandlers {
	ADDON = QUOTE(call COMPILE_FILE(XEH_preInit));
};

class CfgVehicles {
	class CAManBase;
	class SoldierWB: CAManBase {
		fsmDanger = "x\asr_ai3\addons\danger\danger.fsm";
	};
	class SoldierEB: CAManBase {
		fsmDanger = "x\asr_ai3\addons\danger\danger.fsm";
	};
	class SoldierGB: CAManBase {
		fsmDanger = "x\asr_ai3\addons\danger\danger.fsm";
	};
};
