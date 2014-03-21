#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(MAIN_ADDON),
			"asr_ai3_settings",
			"A3_Characters_F"
		};
		version = VERSION;
		author[] = {"Robalo"};
	};
};

#include "CfgEventhandlers.hpp"

class CfgVehicles {
	class Man;
	class CAManBase: Man {
		fsmDanger = "x\asr_ai3\addons\sysdanger\danger.fsm";
	};
};
