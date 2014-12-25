#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(MAIN_ADDON),
			"A3_Characters_F","A3_Weapons_F",
			"caf_ag_faction_afr","caf_ag_faction_eur","caf_ag_faction_me",
			"caf_wp_weapons_c"
		};
		version = VERSION;
		author[] = {"Robalo"};
	};
};

PRELOAD_ADDONS;

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
