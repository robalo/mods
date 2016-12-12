#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        addonRootClass = "BWA3_Weapons";
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(MAIN_ADDON),
			"A3_Characters_F","A3_Weapons_F",
			"BWA3_Units","BWA3_Vests","BWA3_Weapons","BWA3_Backpacks"
		};
		version = VERSION;
		author = "Robalo";
	};
};

PRELOAD_ADDONS;

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
