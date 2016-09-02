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
			"BWA3_Units",
            "BWA3_Optics","BWA3_Attachments","BWA3_Weapons","BWA3_AssaultRifles","BWA3_BattleRifles","BWA3_Handguns","BWA3_Launchers","BWA3_MachineGuns","BWA3_SniperRifles"
		};
		version = VERSION;
		author = "Robalo";
	};
};

PRELOAD_ADDONS;

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgAmmo.hpp"
