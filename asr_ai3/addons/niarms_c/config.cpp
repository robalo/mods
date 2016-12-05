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
            "hlcweapons_MG3s","hlcweapons_Springfield1903",
            "hlcweapons_SAW"
		};
		version = VERSION;
		author = "Robalo";
	};
};

PRELOAD_ADDONS;

#include "CfgAmmo.hpp"

#include "\hlc_core\script_macros.hpp"

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {
    class Rifle_Base_F;

    class hlc_saw_base : Rifle_Base_F {
		modes[] = {
            "FullAuto",
            "ASR_AI_Burst_long", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_toofar",
            "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_toofar_optic1",
            "ASR_AI_Burst_far_optic2", "ASR_AI_Burst_toofar_optic2"
        };
		ASR_AI_MG_MODES(FullAuto,Mode_FullAuto,FullAuto);
		ASR_AI_DISPERSION_COEF;
    };

    class hlc_lmg_minimipara : hlc_saw_base {};
    class hlc_lmg_minimi_railed : hlc_lmg_minimipara {};

    class hlc_lmg_mk46 : hlc_lmg_minimi_railed {
		ASR_AI_MG_MODES(FullAuto,FullAuto,FullAuto);
    };

    class hlc_lmg_mk48 : hlc_saw_base {
		ASR_AI_MG_MODES(FullAuto,Mode_FullAuto,FullAuto);
    };

};