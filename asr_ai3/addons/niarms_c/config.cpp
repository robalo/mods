#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        addonRootClass = "hlcweapons_core";
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(MAIN_ADDON),
			"A3_Characters_F","A3_Weapons_F",
			"hlcweapons_core",
            "hlcweapons_MG3s","hlcweapons_Springfield1903"
		};
		version = VERSION;
		author = "Robalo";
	};
};

PRELOAD_ADDONS;

#include "CfgAmmo.hpp"
