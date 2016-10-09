#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        addonRootClass = "rhsgref_c_weapons";
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(MAIN_ADDON),
			"A3_Characters_F","A3_Weapons_F",
			"rhsgref_c_troops","rhsgref_c_weapons"
		};
		version = VERSION;
		author = "Robalo";
	};
};

PRELOAD_ADDONS;

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgAmmo.hpp"
