#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        addonRootClass = "C_Gen3_Characters";
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(MAIN_ADDON),
			"A3_Characters_F", "A3_Weapons_F",
			"C_Gen3_Characters", "fatpack", "cpc_Vest_config", "lbtt_Vest_config"
		};
		version = VERSION;
		author = "Robalo";
	};
};

PRELOAD_ADDONS;

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
