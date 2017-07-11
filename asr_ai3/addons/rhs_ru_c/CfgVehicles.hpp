class CfgVehicles {

//backpacks

    class B_AssaultPack_Base;
    class rhs_assault_umbts : B_AssaultPack_Base {
        //displayName = "UMBTS Backpack";
        __CAMO_B_MEDIUMMONO;
    };
    class rhs_rpg : B_AssaultPack_Base {
        //displayName = "RPG Carrier";
        __CAMO_B_MEDIUMMONO;
    };
    class rhs_sidor : B_AssaultPack_Base {
        //displayName = "Sidor";
        __CAMO_B_MEDIUMMONO;
    };
    class rhs_medic_bag: B_AssaultPack_Base {
        __CAMO_B_SMALLMONO;
    };


//soldiers

	class SoldierGB;

//MSV

    class rhs_infantry_msv_base : SoldierGB {
        //faction = "rhs_//faction_msv";
        //displayName = "Rifleman";
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class rhs_msv_rifleman;
    class rhs_msv_machinegunner_assistant : rhs_msv_rifleman {
        //displayName = "Machine Gunner Assistant";
        ASR_AI_CAMO_BASE;
    };
    class rhs_msv_LAT : rhs_msv_rifleman {
        //displayName = "Rifleman (RPG-26)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_msv_RShG2 : rhs_msv_LAT {
        //displayName = "Rifleman (RShG-2)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_msv_arifleman : rhs_msv_rifleman {
        //displayName = "Automatic Rifleman (PKP)";
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhs_msv_grenadier_rpg : rhs_msv_rifleman {
        //displayName = "Grenadier (RPG-7V2)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_msv_strelok_rpg_assist : rhs_msv_rifleman {
        //displayName = "Grenadier Assistant";
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhs_msv_marksman : rhs_msv_rifleman {
        //displayName = "Marksman";
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhs_msv_efreitor : rhs_msv_rifleman {
        //displayName = "Efreitor";
        ASR_AI_CAMO_BASE;
    };
    class rhs_msv_sergeant : rhs_msv_rifleman {
        //displayName = "Sergeant";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhs_msv_junior_sergeant : rhs_msv_sergeant {
        //displayName = "Junior Sergeant";
		ASR_AI_SKILL_REG2;
        ASR_AI_CAMO_BASE;
    };
    class rhs_msv_officer_armored : rhs_msv_rifleman {
        //displayName = "Officer (Armored)";
        ASR_AI_CAMO_BASE;
    };
    class rhs_msv_at : rhs_msv_grenadier_rpg {
        //displayName = "AT Specialist";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_msv_aa : rhs_msv_at {
        //displayName = "AA Specialist";
        ASR_AI_CAMO_BASE;
    };
    class rhs_msv_engineer : rhs_msv_rifleman {
        //displayName = "Engineer";
        ASR_AI_CAMO_BASE;
    };
    class rhs_msv_crew : rhs_msv_rifleman {
        //displayName = "Crew";
        ASR_AI_CAMO_BASE;
    };
    class rhs_msv_crew_commander : rhs_msv_crew {
        //displayName = "Crew Commander";
        ASR_AI_CAMO_BASE;
    };

//Pilots

    class rhs_pilot_base : rhs_infantry_msv_base {
        //displayName = "Pilot";
        //faction = "rhs_//faction_vvs";
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
    };
    class rhs_pilot_tan_base;
    class rhs_pilot_tan : rhs_pilot_tan_base {
        //displayName = "Pilot (Tan)";
        ASR_AI_CAMO_BASE;
    };


//EMR

    class rhs_msv_emr_grenadier;
    class rhs_msv_emr_sergeant : rhs_msv_emr_grenadier {
        //displayName = "Sergeant";
		ASR_AI_SKILL_REG1;
    };
    class rhs_msv_emr_junior_sergeant : rhs_msv_emr_sergeant {
        //displayName = "Junior Sergeant";
		ASR_AI_SKILL_REG2;
    };
    class rhs_msv_emr_efreitor : rhs_msv_emr_grenadier {
        //displayName = "Efreitor";
        ASR_AI_CAMO_BASE;
    };

//MVD

    class rhs_mvd_izlom_rifleman;
    class rhs_mvd_izlom_rifleman_LAT : rhs_mvd_izlom_rifleman {
        //displayName = "Rifleman (RPG-26)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_mvd_izlom_grenadier_rpg : rhs_mvd_izlom_rifleman {
        //displayName = "Grenadier (RPG-7V2)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_mvd_izlom_arifleman : rhs_mvd_izlom_rifleman {
        //displayName = "Automatic Rifleman (PKP)";
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhs_mvd_izlom_marksman : rhs_mvd_izlom_rifleman {
        //displayName = "Marksman";
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhs_mvd_izlom_efreitor : rhs_mvd_izlom_rifleman_LAT {
        //displayName = "Efreitor";
        ASR_AI_CAMO_BASE;
    };
    class rhs_mvd_izlom_sergeant : rhs_mvd_izlom_rifleman {
        //displayName = "Sergeant";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };

//VDV

    class rhs_infantry_vdv_base : rhs_infantry_msv_base {
        //displayName = "Rifleman";
        ASR_AI_CAMO_BASE;
    };

    class rhs_vdv_rifleman;
    class rhs_vdv_LAT : rhs_vdv_rifleman {
        //displayName = "Rifleman (RPG-26)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_vdv_arifleman : rhs_vdv_rifleman {
        //displayName = "Automatic Rifleman (PKP)";
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhs_vdv_marksman : rhs_vdv_rifleman {
        //displayName = "Marksman";
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhs_vdv_machinegunner_assistant : rhs_vdv_rifleman {
        //displayName = "Machine Gunner Assistant";
        ASR_AI_CAMO_BASE;
    };
    class rhs_vdv_efreitor : rhs_vdv_LAT {
        //displayName = "Efreitor";
        ASR_AI_CAMO_BASE;
    };
    class rhs_vdv_rifleman_asval;
    class rhs_vdv_marksman_asval : rhs_vdv_rifleman_asval {
        //displayName = "Marksman (AS Val)";
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhs_vdv_sergeant : rhs_vdv_LAT {
        //displayName = "Sergeant";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhs_vdv_junior_sergeant : rhs_vdv_sergeant {
        //displayName = "Junior Sergeant";
		ASR_AI_SKILL_REG2;
        ASR_AI_CAMO_BASE;
    };
    class rhs_vdv_officer_armored : rhs_vdv_rifleman {
        //displayName = "Officer (Armored)";
        ASR_AI_CAMO_BASE;
    };
    class rhs_vdv_grenadier;
    class rhs_vdv_grenadier_rpg : rhs_vdv_grenadier {
        //displayName = "Grenadier (RPG-7V2)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_vdv_at : rhs_vdv_grenadier_rpg {
        //displayName = "AT Specialist";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_vdv_aa : rhs_vdv_at {
        //displayName = "AA Specialist";
        ASR_AI_CAMO_BASE;
    };
    class rhs_vdv_strelok_rpg_assist : rhs_vdv_rifleman {
        //displayName = "Grenadier Assistant";
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhs_vdv_engineer : rhs_vdv_rifleman {
        //displayName = "Engineer";
        ASR_AI_CAMO_BASE;
    };
    class rhs_vdv_crew : rhs_vdv_rifleman {
        //displayName = "Crew";
        ASR_AI_CAMO_BASE;
    };
    class rhs_vdv_crew_commander : rhs_vdv_crew {
        //displayName = "Crew Commander";
        ASR_AI_CAMO_BASE;
    };

    class rhs_infantry_vdv_des_base : rhs_infantry_vdv_base {
        //displayName = "Rifleman";
        ASR_AI_CAMO_BASE;
    };


//VDV Recon

    class rhs_vdv_recon_rifleman : rhs_vdv_rifleman {
        //displayName = "Rifleman";
		ASR_AI_SKILL_SOF2;
        ASR_AI_CAMO_BASE;
    };
    class rhs_vdv_recon_marksman : rhs_vdv_recon_rifleman {
        //displayName = "Marksman";
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhs_vdv_recon_machinegunner_assistant : rhs_vdv_recon_rifleman {
        //displayName = "Machine Gunner Assistant";
        ASR_AI_CAMO_BASE;
    };
    class rhs_vdv_recon_rifleman_lat;
    class rhs_vdv_recon_efreitor : rhs_vdv_recon_rifleman_lat {
        //displayName = "Efreitor";
        ASR_AI_CAMO_BASE;
    };
    class rhs_vdv_recon_officer_armored : rhs_vdv_recon_rifleman {
        //displayName = "Officer (Armored)";
        ASR_AI_CAMO_BASE;
    };

    class I_G_Soldier_F;

//INS

	class rhs_g_uniform1_base : SoldierGB {
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };

    class rhs_ins_base : I_G_Soldier_F {
        //displayName = "Rifleman";
        //faction = "rhs_//faction_insurgents";
		ASR_AI_SKILL_INS2;
        ASR_AI_CAMO_BASE;
    };
    class rhs_g_Soldier_AT_F : rhs_ins_base {
        //displayName = "Rifleman (RPG-26)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_g_Soldier_GL_F;
    class rhs_g_Soldier_TL_F : rhs_g_Soldier_GL_F {
        //displayName = "Scout (GP-25)";
		ASR_AI_SKILL_INS1;
    };
    class rhs_g_Soldier_M_F : rhs_ins_base {
        //displayName = "Marksman";
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhs_g_Soldier_LAT_F : rhs_ins_base {
        //displayName = "Grenadier (RPG-7V2)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_g_Soldier_AAT_F : rhs_ins_base {
        //displayName = "Grenadier Assistant";
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhs_g_Soldier_SL_F : rhs_ins_base {
        //displayName = "Sergeant";
		ASR_AI_SKILL_INS1;
    };
    class rhs_g_Soldier_AA_F : rhs_ins_base {
        //displayName = "AA Specialist";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_g_engineer_F : rhs_ins_base {
        //displayName = "Engineer";
        ASR_AI_CAMO_BASE;
    };

    class rhs_rva_crew;
    class rhs_rva_crew_officer : rhs_rva_crew {
        ASR_AI_CAMO_BASE;
    };

};
