#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        addonRootClass = "po_vehicles";
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(MAIN_ADDON),
			"A3_Characters_F","A3_Weapons_F",
			"po_main","po_vehicles","po_factions_afr","po_factions_eu","po_factions_fic","po_factions_me"
		};
		version = VERSION;
		author = "Robalo";
	};
};

PRELOAD_ADDONS;

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
