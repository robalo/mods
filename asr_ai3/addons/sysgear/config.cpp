#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(MAIN_ADDON),
			"asr_ai3_settings",
			"A3_Weapons_F"
		};
		version = VERSION;
		author[] = {"Robalo"};
	};
};

#include "CfgEventhandlers.hpp"
#include "CfgWeapons.hpp"
