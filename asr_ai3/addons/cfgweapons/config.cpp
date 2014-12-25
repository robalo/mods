#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(MAIN_ADDON),
			"A3_Weapons_F",
			"A3_Weapons_F_Launchers_NLAW",
			"A3_Weapons_F_Launchers_LAW",
			"A3_Weapons_F_EBR",
			"A3_Weapons_F_LongRangeRifles_GM6",
			"A3_Weapons_F_LongRangeRifles_M320",
			"A3_Weapons_F_Machineguns_M200",
			"A3_Weapons_F_Pistols_P07",
			"A3_Weapons_F_Pistols_Rook40",
			"A3_Weapons_F_Rifles_Khaybar",
			"A3_Weapons_F_Rifles_MX",
			"A3_Weapons_F_Rifles_SDAR",
			"A3_Weapons_F_Rifles_TRG20",
			"A3_Weapons_F_Launchers_Titan",
			"A3_Weapons_F_Machineguns_Zafir",
			"A3_Weapons_F_Pistols_ACPC2",
			"A3_Weapons_F_Rifles_Mk20",
			"A3_Weapons_F_Rifles_Vector",
			"a3_weapons_f_rifles_SMG_02",
			"A3_Weapons_F_Pistols_PDW2000",
			"A3_Weapons_F_EPA_LongRangeRifles_DMR_01"
		};
		version = VERSION;
		author[] = {"Robalo"};
	};
};

PRELOAD_ADDONS;

#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
