#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        addonRootClass = "A3_Characters_F";
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredAddons[] = {"A3_Characters_F", "A3_Characters_F_Mark", "A3_Characters_F_Exp",
			"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Weapons_F_Exp"
		};
		requiredVersion = REQUIRED_VERSION;
        author = "Robalo";
	};
};

PRELOAD_ADDONS;

class CfgWeapons {
#include "uniforms.hpp"
#include "vests.hpp"
};

class CfgVehicles {
#include "backpacks.hpp"
#include "soldiers.hpp"
};
