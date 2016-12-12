#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        addonRootClass = "milgp_uniforms_cfg";
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(MAIN_ADDON),
			"A3_Characters_F", "A3_Weapons_F",
			"milgp_uniforms_cfg","milgp_vests_cfg"
		};
		version = VERSION;
		author = "Robalo";
	};
};

PRELOAD_ADDONS;

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
