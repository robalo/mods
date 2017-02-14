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

class CfgWeapons {
    class ItemCore;
    class Uniform_Base;

    class milgp_u_fleece_grey_g3_field_pants_3CD : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (GREY+3CD)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_fleece_khk_g3_field_pants_3CD : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (KHK+3CD)";
        __CAMO_U_MONOCAMO;
    };
    class milgp_u_fleece_grey_g3_field_pants_M81 : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (GREY+M81)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_fleece_rgr_g3_field_pants_M81 : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (RGR+M81)";
        __CAMO_U_MONOCAMO;
    };
    class milgp_u_fleece_grey_g3_field_pants_aor2 : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (GREY+AOR2)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_fleece_rgr_g3_field_pants_aor2 : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (RGR+AOR2)";
        __CAMO_U_MONOCAMO;
    };
    class milgp_u_fleece_grey_g3_field_pants_aor1 : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (GREY+AOR1)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_fleece_khk_g3_field_pants_aor1 : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (KHK+AOR1)";
        __CAMO_U_MONOCAMO;
    };
    class milgp_u_fleece_grey_g3_field_pants_khk : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (GREY+KHK)";
        __CAMO_U_COLORMONO;
    };
    class milgp_u_fleece_grey_g3_field_pants_rgr : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (GREY+RGR)";
        __CAMO_U_COLORMONO;
    };
    class milgp_u_fleece_khk_g3_field_pants_khk : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (KHK)";
        __CAMO_U_MONOMONO;
    };
    class milgp_u_fleece_rgr_g3_field_pants_rgr : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (RGR)";
        __CAMO_U_MONOMONO;
    };
    class milgp_u_fleece_grey_g3_field_pants_atacsfg : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (GREY+ATACS FG)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_fleece_rgr_g3_field_pants_atacsfg : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (RGR+ATACS FG)";
        __CAMO_U_MONOCAMO;
    };
    class milgp_u_fleece_grey_g3_field_pants_atacsau : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (GREY+ATACS AU)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_fleece_khk_g3_field_pants_atacsau : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (KHK+ATACS AU)";
        __CAMO_U_MONOCAMO;
    };
    class milgp_u_fleece_grey_g3_field_pants_mc : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (GREY+MC)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_fleece_grey_g3_field_pants_mcalpine : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (GREY+MC ALPINE)";
        __CAMO_U_SNOWSNOW;
    };
    class milgp_u_fleece_grey_g3_field_pants_mcarid : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (GREY+MC ARID)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_fleece_khk_g3_field_pants_mcarid : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (KHK+MC ARID)";
        __CAMO_U_MONOCAMO;
    };
    class milgp_u_fleece_grey_g3_field_pants_mctropic : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (GREY+MC TROPIC)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_fleece_rgr_g3_field_pants_mctropic : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (RGR+MC TROPIC)";
        __CAMO_U_MONOCAMO;
    };
    class milgp_u_fleece_khk_g3_field_pants_mc : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (KHK+MC)";
        __CAMO_U_MONOCAMO;
    };
    class milgp_u_fleece_rgr_g3_field_pants_mc : Uniform_Base {
        //displayName = "Fleece + G3 Field Pants (RGR+MC)";
        __CAMO_U_MONOCAMO;
    };
    class milgp_u_g3_field_set_atacsau : Uniform_Base {
        //displayName = "G3 Field Set (ATACS AU)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_atacsfg : Uniform_Base {
        //displayName = "G3 Field Set (ATACS FG)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_m81 : Uniform_Base {
        //displayName = "G3 Field Set (M81)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_3cd : Uniform_Base {
        //displayName = "G3 Field Set (3CD)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_aor2 : Uniform_Base {
        //displayName = "G3 Field Set (AOR2)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_aor1 : Uniform_Base {
        //displayName = "G3 Field Set (AOR1)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_mc : Uniform_Base {
        //displayName = "G3 Field Set (MC)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_mcalpine : Uniform_Base {
        //displayName = "G3 Field Set (MC Alpine)";
        __CAMO_U_SNOWSNOW;
    };
    class milgp_u_g3_field_set_mctropic : Uniform_Base {
        //displayName = "G3 Field Set (MC TROPIC)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_mcarid : Uniform_Base {
        //displayName = "G3 Field Set (MC ARID)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_rgr : Uniform_Base {
        //displayName = "G3 Field Set (RGR)";
        __CAMO_U_MONOMONO;
    };
    class milgp_u_g3_field_set_khk : Uniform_Base {
        //displayName = "G3 Field Set (KHK)";
        __CAMO_U_MONOMONO;
    };
    class milgp_u_g3_field_set_rolled_atacsau : Uniform_Base {
        //displayName = "G3 Field Set Rolled (ATACS AU)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_rolled_atacsfg : Uniform_Base {
        //displayName = "G3 Field Set Rolled (ATACS FG)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_rolled_m81 : Uniform_Base {
        //displayName = "G3 Field Set Rolled (M81)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_rolled_3cd : Uniform_Base {
        //displayName = "G3 Field Set Rolled (3CD)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_rolled_aor2 : Uniform_Base {
        //displayName = "G3 Field Set Rolled (AOR2)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_rolled_aor1 : Uniform_Base {
        //displayName = "G3 Field Set Rolled (AOR1)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_rolled_mc : Uniform_Base {
        //displayName = "G3 Field Set Rolled (MC)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_rolled_mctropic : Uniform_Base {
        //displayName = "G3 Field Set Rolled (MC TROPIC)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_rolled_mcarid : Uniform_Base {
        //displayName = "G3 Field Set Rolled (MC ARID)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_g3_field_set_rolled_rgr : Uniform_Base {
        //displayName = "G3 Field Set Rolled (RGR)";
        __CAMO_U_MONOMONO;
    };
    class milgp_u_g3_field_set_rolled_khk : Uniform_Base {
        //displayName = "G3 Field Set Rolled (KHK)";
        __CAMO_U_MONOMONO;
    };

    class milgp_u_pcu_g3_field_pants_mc : Uniform_Base {
        //displayName = "PCU + G3 Field Pants (MC)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_pcu_g3_field_pants_mcarid : Uniform_Base {
        //displayName = "PCU + G3 Field Pants (MC Arid)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_pcu_g3_field_pants_mctropic : Uniform_Base {
        //displayName = "PCU + G3 Field Pants (MC Tropic)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_pcu_g3_field_pants_mcalpine : Uniform_Base {
        //displayName = "PCU + G3 Field Pants (MC Alpine)";
        __CAMO_U_SNOWSNOW;
    };
    class milgp_u_pcu_g3_field_pants_atacsau : Uniform_Base {
        //displayName = "PCU + G3 Field Pants (ATACS AU)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_pcu_g3_field_pants_atacsfg : Uniform_Base {
        //displayName = "PCU + G3 Field Pants (ATACS FG)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_pcu_g3_field_pants_khk : Uniform_Base {
        //displayName = "PCU + G3 Field Pants (KHK)";
        __CAMO_U_COLORMONO;
    };
    class milgp_u_pcu_g3_field_pants_rgr : Uniform_Base {
        //displayName = "PCU + G3 Field Pants (RGR)";
        __CAMO_U_COLORMONO;
    };
    class milgp_u_pcu_g3_field_pants_m81 : Uniform_Base {
        //displayName = "PCU + G3 Field Pants (M81)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_pcu_g3_field_pants_3cd : Uniform_Base {
        //displayName = "PCU + G3 Field Pants (3CD)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_pcu_g3_field_pants_aor1 : Uniform_Base {
        //displayName = "PCU + G3 Field Pants (AOR1)";
        __CAMO_U_COLORCAMO;
    };
    class milgp_u_pcu_g3_field_pants_aor2 : Uniform_Base {
        //displayName = "PCU + G3 Field Pants (AOR2)";
        __CAMO_U_COLORCAMO;
    };

    class milgp_u_tshirt_g3_field_pants_3CD : Uniform_Base {
        //displayName = "Tshirt + G3 Field Pants (3CD)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_tshirt_g3_field_pants_M81 : Uniform_Base {
        //displayName = "Tshirt + G3 Field Pants (M81)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_tshirt_g3_field_pants_atacsau : Uniform_Base {
        //displayName = "Tshirt + G3 Field Pants (ATACS AU)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_tshirt_g3_field_pants_atacsfg : Uniform_Base {
        //displayName = "Tshirt + G3 Field Pants (ATACS FG)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_tshirt_g3_field_pants_aor1 : Uniform_Base {
        //displayName = "Tshirt + G3 Field Pants (AOR1)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_tshirt_g3_field_pants_aor2 : Uniform_Base {
        //displayName = "Tshirt + G3 Field Pants (AOR2)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_tshirt_g3_field_pants_mctropic : Uniform_Base {
        //displayName = "Tshirt + G3 Field Pants (MC TROPIC)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_tshirt_g3_field_pants_mcarid : Uniform_Base {
        //displayName = "Tshirt + G3 Field Pants (MC ARID)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_tshirt_g3_field_pants_mc : Uniform_Base {
        //displayName = "Tshirt + G3 Field Pants (MC)";
        __CAMO_U_CAMOCAMO;
    };
    class milgp_u_tshirt_g3_field_pants_khk : Uniform_Base {
        //displayName = "Tshirt + G3 Field Pants (KHK)";
        __CAMO_U_MONOMONO;
    };
    class milgp_u_tshirt_g3_field_pants_rgr : Uniform_Base {
        //displayName = "Tshirt + G3 Field Pants (RGR)";
        __CAMO_U_MONOMONO;
    };

    class milgp_v_battle_belt_assaulter_mc : ItemCore {
        //displayName = "Battle Belt Assaulter (MC)";
        __CAMO_V_IGNORE;
    };
    class milgp_v_battle_belt_assaulter_RGR : ItemCore {
        //displayName = "Battle Belt Assaulter (RGR)";
        __CAMO_V_IGNORE;
    };
    class milgp_v_battle_belt_assaulter_KHK : ItemCore {
        //displayName = "Battle Belt Assaulter (KHK)";
        __CAMO_V_IGNORE;
    };
    class milgp_v_battle_belt_assaulter_CB : ItemCore {
        //displayName = "Battle Belt Assaulter (CB)";
        __CAMO_V_IGNORE;
    };
    class milgp_v_battle_belt_hgunner_mc : ItemCore {
        //displayName = "Battle Belt HeavyGunner (MC)";
        __CAMO_V_IGNORE;
    };
    class milgp_v_battle_belt_hgunner_RGR : ItemCore {
        //displayName = "Battle Belt HeavyGunner (RGR)";
        __CAMO_V_IGNORE;
    };
    class milgp_v_battle_belt_hgunner_KHK : ItemCore {
        //displayName = "Battle Belt HeavyGunner (KHK)";
        __CAMO_V_IGNORE;
    };
    class milgp_v_battle_belt_hgunner_CB : ItemCore {
        //displayName = "Battle Belt HeavyGunner (CB)";
        __CAMO_V_IGNORE;
    };

    class milgp_v_jpc_assaulter_rgr : ItemCore {
        //displayName = "JPC Assaulter (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_assaulter_mc : ItemCore {
        //displayName = "JPC Assaulter (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_jpc_assaulter_cb : ItemCore {
        //displayName = "JPC Assaulter (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_assaulter_khk : ItemCore {
        //displayName = "JPC Assaulter (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_assaulter_belt_rgr : ItemCore {
        //displayName = "JPC Assaulter + Belt (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_assaulter_belt_mc : ItemCore {
        //displayName = "JPC Assaulter + Belt (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_jpc_assaulter_belt_cb : ItemCore {
        //displayName = "JPC Assaulter + Belt (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_assaulter_belt_khk : ItemCore {
        //displayName = "JPC Assaulter + Belt(KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_Grenadier_rgr : ItemCore {
        //displayName = "JPC Grenadier (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_Grenadier_mc : ItemCore {
        //displayName = "JPC Grenadier (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_jpc_Grenadier_cb : ItemCore {
        //displayName = "JPC Grenadier (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_Grenadier_khk : ItemCore {
        //displayName = "JPC Grenadier (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_Grenadier_belt_rgr : ItemCore {
        //displayName = "JPC Grenadier + Belt (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_Grenadier_belt_mc : ItemCore {
        //displayName = "JPC Grenadier + Belt (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_jpc_Grenadier_belt_cb : ItemCore {
        //displayName = "JPC Grenadier + Belt (CB)";
    };
    class milgp_v_jpc_Grenadier_belt_khk : ItemCore {
        //displayName = "JPC Grenadier + Belt (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_hgunner_rgr : ItemCore {
        //displayName = "JPC HeavyGunner (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_hgunner_mc : ItemCore {
        //displayName = "JPC HeavyGunner (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_jpc_hgunner_cb : ItemCore {
        //displayName = "JPC HeavyGunner (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_hgunner_khk : ItemCore {
        //displayName = "JPC HeavyGunner (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_hgunner_belt_rgr : ItemCore {
        //displayName = "JPC HeavyGunner + Belt (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_hgunner_belt_mc : ItemCore {
        //displayName = "JPC HeavyGunner + Belt (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_jpc_hgunner_belt_cb : ItemCore {
        //displayName = "JPC HeavyGunner + Belt (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_hgunner_belt_khk : ItemCore {
        //displayName = "JPC HeavyGunner + Belt (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_Medic_rgr : ItemCore {
        //displayName = "JPC Medic (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_Medic_mc : ItemCore {
        //displayName = "JPC Medic (MC)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_Medic_cb : ItemCore {
        //displayName = "JPC Medic (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_Medic_khk : ItemCore {
        //displayName = "JPC Medic (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_medic_belt_rgr : ItemCore {
        //displayName = "JPC Medic + Belt (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_medic_belt_mc : ItemCore {
        //displayName = "JPC Medic + Belt (MC)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_medic_belt_cb : ItemCore {
        //displayName = "JPC Medic + Belt (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_medic_belt_khk : ItemCore {
        //displayName = "JPC Medic + Belt (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_Marksman_rgr : ItemCore {
        //displayName = "JPC Marksman (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_Marksman_mc : ItemCore {
        //displayName = "JPC Marksman (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_jpc_Marksman_cb : ItemCore {
        //displayName = "JPC Marksman (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_Marksman_khk : ItemCore {
        //displayName = "JPC Marksman (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_marksman_belt_rgr : ItemCore {
        //displayName = "JPC Marksman + Belt (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_marksman_belt_mc : ItemCore {
        //displayName = "JPC Marksman + Belt (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_jpc_marksman_belt_cb : ItemCore {
        //displayName = "JPC Marksman + Belt (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_marksman_belt_khk : ItemCore {
        //displayName = "JPC Marksman + Belt (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_TeamLeader_rgr : ItemCore {
        //displayName = "JPC TeamLeader (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_TeamLeader_mc : ItemCore {
        //displayName = "JPC TeamLeader (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_jpc_TeamLeader_cb : ItemCore {
        //displayName = "JPC TeamLeader (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_TeamLeader_khk : ItemCore {
        //displayName = "JPC TeamLeader (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_teamleader_belt_rgr : ItemCore {
        //displayName = "JPC TeamLeader + Belt (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_teamleader_belt_mc : ItemCore {
        //displayName = "JPC TeamLeader + Belt (MC)";
    };
    class milgp_v_jpc_teamleader_belt_cb : ItemCore {
        //displayName = "JPC TeamLeader + Belt (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_teamleader_belt_khk : ItemCore {
        //displayName = "JPC TeamLeader + Belt (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_Light_rgr : ItemCore {
        //displayName = "JPC Light (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_Light_mc : ItemCore {
        //displayName = "JPC Light (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_jpc_Light_cb : ItemCore {
        //displayName = "JPC Light (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_jpc_Light_khk : ItemCore {
        //displayName = "JPC Light (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_teamleader_mc : ItemCore {
        //displayName = "MarCiras TeamLeader (MC)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_teamleader_belt_mc : ItemCore {
        //displayName = "MarCiras TeamLeader + Belt (MC)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_assaulter_mc : ItemCore {
        //displayName = "MarCiras Assaulter (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_marciras_assaulter_belt_mc : ItemCore {
        //displayName = "MarCiras Assaulter + Belt (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_marciras_grenadier_mc : ItemCore {
        //displayName = "MarCiras Grenadier (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_marciras_grenadier_belt_mc : ItemCore {
        //displayName = "MarCiras Grenadier + Belt (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_marciras_marksman_mc : ItemCore {
        //displayName = "MarCiras Marksman (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_marciras_marksman_belt_mc : ItemCore {
        //displayName = "MarCiras Marksman + Belt (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_marciras_hgunner_mc : ItemCore {
        //displayName = "MarCiras HeavyGunner (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_marciras_hgunner_belt_mc : ItemCore {
        //displayName = "MarCiras HeavyGunner + Belt (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_marciras_medic_mc : ItemCore {
        //displayName = "MarCiras Medic (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_marciras_medic_belt_mc : ItemCore {
        //displayName = "MarCiras Medic + Belt (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_marciras_light_mc : ItemCore {
        //displayName = "MarCiras Light (MC)";
        __CAMO_V_CAMO;
    };
    class milgp_v_marciras_teamleader_RGR : ItemCore {
        //displayName = "MarCiras TeamLeader (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_teamleader_belt_RGR : ItemCore {
        //displayName = "MarCiras TeamLeader + Belt (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_assaulter_rgr : ItemCore {
        //displayName = "MarCiras Assaulter (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_assaulter_belt_rgr : ItemCore {
        //displayName = "MarCiras Assaulter + Belt (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_grenadier_rgr : ItemCore {
        //displayName = "MarCiras Grenadier (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_grenadier_belt_rgr : ItemCore {
        //displayName = "MarCiras Grenadier + Belt (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_marksman_rgr : ItemCore {
        //displayName = "MarCiras Marksman (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_marksman_belt_rgr : ItemCore {
        //displayName = "MarCiras Marksman + Belt (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_hgunner_rgr : ItemCore {
        //displayName = "MarCiras HeavyGunner (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_hgunner_belt_rgr : ItemCore {
        //displayName = "MarCiras HeavyGunner + Belt (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_medic_rgr : ItemCore {
        //displayName = "MarCiras Medic (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_medic_belt_rgr : ItemCore {
        //displayName = "MarCiras Medic + Belt (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_light_rgr : ItemCore {
        //displayName = "MarCiras Light (RGR)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_teamleader_CB : ItemCore {
        //displayName = "MarCiras TeamLeader (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_teamleader_belt_CB : ItemCore {
        //displayName = "MarCiras TeamLeader + Belt (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_assaulter_cb : ItemCore {
        //displayName = "MarCiras Assaulter (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_assaulter_belt_cb : ItemCore {
        //displayName = "MarCiras Assaulter + Belt (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_grenadier_cb : ItemCore {
        //displayName = "MarCiras Grenadier (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_grenadier_belt_cb : ItemCore {
        //displayName = "MarCiras Grenadier + Belt (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_marksman_cb : ItemCore {
        //displayName = "MarCiras Marksman (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_marksman_belt_cb : ItemCore {
        //displayName = "MarCiras Marksman + Belt (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_hgunner_cb : ItemCore {
        //displayName = "MarCiras HeavyGunner (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_hgunner_belt_cb : ItemCore {
        //displayName = "MarCiras HeavyGunner + Belt (CB)";
    };
    class milgp_v_marciras_medic_cb : ItemCore {
        //displayName = "MarCiras Medic (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_medic_belt_cb : ItemCore {
        //displayName = "MarCiras Medic + Belt (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_light_cb : ItemCore {
        //displayName = "MarCiras Light (CB)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_teamleader_KHK : ItemCore {
        //displayName = "MarCiras TeamLeader (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_teamleader_belt_KHK : ItemCore {
        //displayName = "MarCiras TeamLeader + Belt (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_assaulter_khk : ItemCore {
        //displayName = "MarCiras Assaulter (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_assaulter_belt_khk : ItemCore {
        //displayName = "MarCiras Assaulter + Belt (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_grenadier_khk : ItemCore {
        //displayName = "MarCiras Grenadier (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_grenadier_belt_khk : ItemCore {
        //displayName = "MarCiras Grenadier + Belt (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_marksman_khk : ItemCore {
        //displayName = "MarCiras Marksman (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_marksman_belt_khk : ItemCore {
        //displayName = "MarCiras Marksman + Belt (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_hgunner_khk : ItemCore {
        //displayName = "MarCiras HeavyGunner (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_hgunner_belt_khk : ItemCore {
        //displayName = "MarCiras HeavyGunner + Belt (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_medic_khk : ItemCore {
        //displayName = "MarCiras Medic (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_medic_belt_khk : ItemCore {
        //displayName = "MarCiras Medic + Belt (KHK)";
        __CAMO_V_MONO;
    };
    class milgp_v_marciras_light_khk : ItemCore {
        //displayName = "MarCiras Light (KHK)";
        __CAMO_V_MONO;
    };
};

class CfgVehicles {
    class milgp_Bag_Base;

    class milgp_bp_hydration_mc : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Hydration (MC)";
        __CAMO_B_SMALLCAMO;
    };
    class milgp_bp_hydration_rgr : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Hydration (RGR)";
        __CAMO_B_SMALLMONO;
    };
    class milgp_bp_hydration_cb : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Hydration (CB)";
        __CAMO_B_SMALLMONO;
    };
    class milgp_bp_hydration_khk : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Hydration (KHK)";
        __CAMO_B_SMALLMONO;
    };
    class milgp_bp_Tomahawk_mc : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Tomahawk (MC)";
        __CAMO_B_SMALLCAMO;
    };
    class milgp_bp_Tomahawk_rgr : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Tomahawk (RGR)";
        __CAMO_B_SMALLMONO;
    };
    class milgp_bp_Tomahawk_cb : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Tomahawk (CB)";
        __CAMO_B_SMALLMONO;
    };
    class milgp_bp_Tomahawk_khk : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Tomahawk (KHK)";
        __CAMO_B_SMALLMONO;
    };
    class milgp_bp_Pointman_mc : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Pointman (MC)";
        __CAMO_B_SMALLCAMO;
    };
    class milgp_bp_Pointman_rgr : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Pointman (RGR)";
        __CAMO_B_SMALLMONO;
    };
    class milgp_bp_Pointman_cb : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Pointman (CB)";
        __CAMO_B_SMALLMONO;
    };
    class milgp_bp_Pointman_khk : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Pointman (KHK)";
        __CAMO_B_SMALLMONO;
    };
    class milgp_bp_Breacher_mc : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Breacher (MC)";
        __CAMO_B_SMALLCAMO;
    };
    class milgp_bp_Breacher_rgr : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Breacher (RGR)";
        __CAMO_B_SMALLMONO;
    };
    class milgp_bp_Breacher_cb : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Breacher (CB)";
        __CAMO_B_SMALLMONO;
    };
    class milgp_bp_Breacher_khk : milgp_Bag_Base {
        //displayName = "MarCiras Back Panel Breacher (KHK)";
        __CAMO_B_SMALLMONO;
    };
};