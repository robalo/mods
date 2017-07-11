#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        addonRootClass = "rhsusf_c_weapons";
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(MAIN_ADDON),
			"A3_Characters_F","A3_Weapons_F",
			"rhsusf_c_troops","rhsusf_c_weapons"
		};
		version = VERSION;
		author = "Robalo";
	};
    class asr_ai3_rhs_us_camo_c {
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {};
		author = "Robalo";
	};
};

PRELOAD_ADDONS;

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgAmmo.hpp"
