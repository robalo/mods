#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
        ammo[] = {};
        addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {QUOTE(MAIN_ADDON)};
		requiredVersion = REQUIRED_VERSION;
        author = "Robalo";
	};
};

PRELOAD_ADDONS;

#include "CfgAmmo.hpp"
