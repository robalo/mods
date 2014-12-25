#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(MAIN_ADDON),
			"asr_ai3_settings",
			"A3_Characters_F",
			"A3_Characters_F_Beta",
			"A3_Characters_F_Gamma",
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_Civil",
			"A3_Characters_F_OPFOR",
			"A3_Characters_F_INDEP",
			"A3_Characters_F_EPA",
			"A3_Air_F",
			"A3_Air_F_Heli_Light_01",
			"A3_Air_F_Heli_Light_02"
		};
		version = VERSION;
		author[] = {"Robalo"};
	};
};

PRELOAD_ADDONS;

// lower some skills while maintaining an option for top skilled units (reduce skills for 0 - 0.8, but keep them very high for 0.8 - 1).
class CfgAISkill {
	aimingAccuracy[] = {0, 0.1, 0.8, 0.7, 1, 1};
	aimingShake[]    = {0, 0.1, 0.8, 0.7, 1, 1};
	commanding[]     = {0, 0.1, 0.8, 0.6, 1, 1};
	spotDistance[]   = {0, 0.1, 0.5, 0.2, 1, 0.4};
	spotTime[]       = {0, 0.1, 0.8, 0.6, 1, 0.7};
};

#include "CfgVehicles.hpp"
#include "CfgEventhandlers.hpp"
