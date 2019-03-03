class CfgVehicles {

	#include "bags.hpp"

	class SoldierGB;
	class SoldierWB;

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

//US Army

    class rhsusf_infantry_army_base : SoldierWB {
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_rifleman;
    class rhsusf_army_ocp_riflemanl : rhsusf_army_ocp_rifleman {
        //displayName = "Rifleman (Light)";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_autoriflemana : rhsusf_army_ocp_rifleman {
        //displayName = "Auto Rifleman Ass.";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_machinegunnera : rhsusf_army_ocp_rifleman {
        //displayName = "Machine Gunner Assistant";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_officer : rhsusf_infantry_army_base {
        //displayName = "Officer";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_riflemanat : rhsusf_army_ocp_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_army_ocp_maaws : rhsusf_army_ocp_riflemanat {
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_marksman : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsusf_army_ocp_squadleader : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_teamleader : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_jfo : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_army_ocp_javelin : rhsusf_army_ocp_riflemanat {
        //displayName = "AT Specialist (Javelin)";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_javelin_assistant : rhsusf_army_ocp_riflemanat {
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_aa : rhsusf_army_ocp_riflemanat {
		ASR_AI_AMMOCOEF_AT;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_engineer : rhsusf_army_ocp_rifleman {
        //displayName = "Engineer";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_explosives : rhsusf_army_ocp_rifleman {
        //displayName = "Explosives Specialist";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_sniper : rhsusf_army_ocp_marksman {
		ASR_AI_AMMOCOEF_SNIPER;
		ASR_AI_SKILL_SNP1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_crewman : rhsusf_infantry_army_base {
        //displayName = "Crew";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_helipilot : rhsusf_infantry_army_base {
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
    };

//USMC

    class rhsusf_infantry_usmc_base;
    class rhsusf_usmc_marpat_wd_rifleman;

    class rhsusf_usmc_marpat_wd_rifleman_light : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Rifleman (Light)";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_autorifleman_m249_ass : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Auto Rifleman Ass.";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_machinegunner_ass : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Machine Gunner Assistant";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_officer : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Officer";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_riflemanat : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_marpat_wd_squadleader : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_teamleader : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_jfo : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_marpat_wd_fso : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_marpat_wd_smaw : rhsusf_usmc_marpat_wd_riflemanat {
        //displayName = "Assaultman (SMAW)";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_engineer : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Combat Engineer";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_explosives : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "EOD Tech";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_stinger : rhsusf_usmc_marpat_wd_smaw {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_marpat_wd_marksman : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsusf_usmc_marpat_wd_spotter : rhsusf_usmc_marpat_wd_marksman {
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_SKILL_SOF2;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_sniper : rhsusf_usmc_marpat_wd_marksman {
		ASR_AI_AMMOCOEF_SNIPER;
		ASR_AI_SKILL_SNP1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_crewman : rhsusf_infantry_usmc_base {
        //displayName = "Crew";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_helipilot : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
    };


// USMC LAR

    class rhsusf_usmc_lar_marpat_wd_rifleman : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_lar_marpat_wd_rifleman_light : rhsusf_usmc_lar_marpat_wd_rifleman {
        //displayName = "Scout (M4/Light)";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_lar_marpat_wd_riflemanat : rhsusf_usmc_lar_marpat_wd_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_lar_marpat_wd_autorifleman : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_lar_marpat_wd_squadleader : rhsusf_usmc_lar_marpat_wd_rifleman {
        //displayName = "Scout (Squad Leader)";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_lar_marpat_wd_teamleader : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_lar_marpat_wd_marksman : rhsusf_usmc_lar_marpat_wd_rifleman {
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsusf_usmc_lar_marpat_wd_crewman : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };


// USMC Recon

    class rhsusf_infantry_usmc_recon_base : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_SOF2;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_recon_marpat_wd_rifleman_at : rhsusf_infantry_usmc_recon_base {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_recon_marpat_wd_marksman : rhsusf_infantry_usmc_recon_base {
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsusf_usmc_recon_marpat_wd_officer : rhsusf_infantry_usmc_recon_base {
        //displayName = "Officer";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_recon_marpat_wd_teamleader : rhsusf_infantry_usmc_recon_base {
        //displayName = "Team Leader";
        ASR_AI_CAMO_BASE;
    };

// ARMY SF

    class rhsusf_socom_uniform_base: SoldierWB {
		ASR_AI_MINFIRETIME;
    };
    class rhsusf_socom_mc_uniform;
    class rhsusf_infantry_socom_armysf_base : rhsusf_socom_mc_uniform {
		ASR_AI_SKILL_SOF1;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };


//MARSOC

    class rhsusf_socom_g3_m81_uniform;
    class rhsusf_infantry_socom_marsoc_base : rhsusf_socom_g3_m81_uniform {
		ASR_AI_SKILL_SOF1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_socom_marsoc_cso_cqb;
    class rhsusf_socom_marsoc_cso_light : rhsusf_socom_marsoc_cso_cqb {
        //displayName = "Operator (Light)";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_socom_marsoc_teamleader : rhsusf_infantry_socom_marsoc_base {
        //displayName = "Team Leader";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_socom_marsoc_elementleader : rhsusf_socom_marsoc_cso_cqb {
        //displayName = "Element leader";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_socom_marsoc_cso_eod : rhsusf_infantry_socom_marsoc_base {
        ASR_AI_CAMO_BASE;
        canDeactivateMines = 1;
    };
    class rhsusf_socom_marsoc_cso_mechanic : rhsusf_infantry_socom_marsoc_base {
        ASR_AI_CAMO_BASE;
        engineer = 1;
    };
    class rhsusf_socom_marsoc_spotter : rhsusf_infantry_socom_marsoc_base {
        //displayName = "Scout Spotter";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_socom_marsoc_sniper : rhsusf_socom_marsoc_spotter {
		ASR_AI_AMMOCOEF_SNIPER;
		ASR_AI_SKILL_SNP1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_socom_marsoc_sniper_m107 : rhsusf_socom_marsoc_sniper {
        //displayName = "Sniper (M107)";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_socom_swcc_crewman;
    class rhsusf_socom_swcc_officer : rhsusf_socom_swcc_crewman {
        //displayName = "Officer";
        ASR_AI_CAMO_BASE;
    };


//Air Force

    class rhsusf_usmc_marpat_wd_rifleman_m4;
    class rhsusf_airforce_jetpilot : rhsusf_usmc_marpat_wd_rifleman_m4 {
		ASR_AI_SKILL_PIL1;
    };


//CDF

    class rhsgref_cdf_ngd_base : SoldierGB {
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_ngd_rifleman;

    class rhsgref_cdf_ngd_officer : rhsgref_cdf_ngd_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };

    class rhsgref_cdf_ngd_grenadier : rhsgref_cdf_ngd_rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsgref_cdf_ngd_machinegunner : rhsgref_cdf_ngd_rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsgref_cdf_ngd_squadleader : rhsgref_cdf_ngd_rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_ngd_grenadier_rpg : rhsgref_cdf_ngd_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_ngd_engineer : rhsgref_cdf_ngd_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_ngd_crew : rhsgref_cdf_ngd_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };

    class rhsgref_cdf_reg_base : SoldierGB {
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_reg_rifleman;
    class rhsgref_cdf_reg_general : rhsgref_cdf_reg_rifleman {
        //displayName = "General";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_reg_officer : rhsgref_cdf_reg_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };

    class rhsgref_cdf_reg_grenadier : rhsgref_cdf_reg_rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsgref_cdf_reg_machinegunner : rhsgref_cdf_reg_rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsgref_cdf_reg_marksman : rhsgref_cdf_reg_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsgref_cdf_reg_squadleader : rhsgref_cdf_reg_rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_reg_grenadier_rpg : rhsgref_cdf_reg_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_reg_specialist_aa : rhsgref_cdf_reg_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_reg_engineer : rhsgref_cdf_reg_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };

    class rhsgref_cdf_reg_crew : rhsgref_cdf_reg_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_air_pilot : rhsgref_cdf_reg_crew {
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
    };

    class rhsgref_cdf_para_base : rhsgref_cdf_reg_base {
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_para_rifleman;
    class rhsgref_cdf_para_officer : rhsgref_cdf_para_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };

    class rhsgref_cdf_para_machinegunner : rhsgref_cdf_para_rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsgref_cdf_para_marksman : rhsgref_cdf_para_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsgref_cdf_para_squadleader : rhsgref_cdf_para_rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_para_grenadier_rpg : rhsgref_cdf_para_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_para_specialist_aa : rhsgref_cdf_para_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_para_engineer : rhsgref_cdf_para_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_para_crew : rhsgref_cdf_para_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };

    class rhsgref_nat_base : SoldierGB {
		ASR_AI_SKILL_INS2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_nat_rifleman;

    class rhsgref_nat_grenadier_rpg : rhsgref_nat_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_nat_specialist_aa : rhsgref_nat_base {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_nat_scout : rhsgref_nat_base {
		ASR_AI_SKILL_INS1;
    };
    class rhsgref_nat_saboteur : rhsgref_nat_base {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_nat_crew : rhsgref_nat_base {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };

    class rhsgref_nat_pmil_rifleman;

    class rhsgref_nat_pmil_grenadier_rpg : rhsgref_nat_pmil_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_nat_pmil_specialist_aa : rhsgref_nat_pmil_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_nat_pmil_scout : rhsgref_nat_pmil_rifleman {
		ASR_AI_SKILL_INS1;
    };
    class rhsgref_nat_pmil_saboteur : rhsgref_nat_pmil_rifleman {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_nat_pmil_crew : rhsgref_nat_pmil_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };

//Chedaki

    class rhsgref_ins_base : SoldierGB {
		ASR_AI_SKILL_INS2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_ins_reed;
    class rhsgref_ins_uniform_izlom;
    class rhsgref_ins_uniform_specter;
    class rhsgref_ins_uniform_gorka_y;

    class rhsgref_ins_squadleader : rhsgref_ins_uniform_specter {
		ASR_AI_SKILL_INS1;
    };
    class rhsgref_ins_grenadier_rpg : rhsgref_ins_uniform_izlom {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_ins_specialist_aa : rhsgref_ins_reed {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_ins_uniform_gorka_g;
    class rhsgref_ins_engineer : rhsgref_ins_uniform_gorka_g {
        //displayName = "Sapper";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_ins_saboteur : rhsgref_ins_uniform_specter {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_ins_sniper : rhsgref_ins_uniform_izlom {
		ASR_AI_SKILL_SOF2;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsgref_ins_spotter : rhsgref_ins_uniform_gorka_y {
		ASR_AI_SKILL_SOF2;
    };
    class rhsgref_ins_crew : rhsgref_ins_uniform_specter {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_ins_pilot : rhsgref_ins_uniform_specter {
		ASR_AI_SKILL_PIL2;
        ASR_AI_CAMO_BASE;
    };

//HI DF

    class rhsgref_hidf_base : SoldierWB {
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_hidf_rifleman;
    class rhsgref_hidf_rifleman_m72 : rhsgref_hidf_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_hidf_marksman : rhsgref_hidf_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsgref_hidf_squadleader : rhsgref_hidf_rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_hidf_teamleader : rhsgref_hidf_rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_hidf_sniper : rhsgref_hidf_marksman {
		ASR_AI_SKILL_SOF2;
		ASR_AI_AMMOCOEF_SNIPER;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_hidf_crewman : rhsgref_hidf_base {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_hidf_helipilot : rhsgref_hidf_base {
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
    };

    class rhssaf_soldier_m10_base : SoldierGB {
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_soldier_army_digital_base;
    class rhssaf_army_m10_digital_rifleman_m21;

    class rhssaf_army_m10_digital_rifleman_ammo : rhssaf_army_m10_digital_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_asst_mgun : rhssaf_army_m10_digital_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_sq_lead : rhssaf_soldier_army_digital_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_sniper_m76 : rhssaf_soldier_army_digital_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhssaf_army_m10_digital_spotter : rhssaf_army_m10_digital_rifleman_m21 {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_rifleman_at : rhssaf_soldier_army_digital_base {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhssaf_army_m10_digital_asst_spec_at : rhssaf_army_m10_digital_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_asst_spec_aa : rhssaf_army_m10_digital_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_medic : rhssaf_soldier_army_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_repair : rhssaf_soldier_army_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_exp : rhssaf_soldier_army_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_engineer : rhssaf_soldier_army_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_crew : rhssaf_soldier_army_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_crew_armored : rhssaf_soldier_army_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_crew_armored_nco : rhssaf_soldier_army_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_officer : rhssaf_soldier_army_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_soldier_army_oakleaf_summer_base;
    class rhssaf_army_m93_oakleaf_summer_rifleman_m21;

    class rhssaf_army_m93_oakleaf_summer_rifleman_ammo : rhssaf_army_m93_oakleaf_summer_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_asst_mgun : rhssaf_army_m93_oakleaf_summer_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_sq_lead : rhssaf_soldier_army_oakleaf_summer_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_sniper_m76 : rhssaf_soldier_army_oakleaf_summer_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhssaf_army_m93_oakleaf_summer_spotter : rhssaf_army_m93_oakleaf_summer_rifleman_m21 {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_rifleman_at : rhssaf_soldier_army_oakleaf_summer_base {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhssaf_army_m93_oakleaf_summer_asst_spec_at : rhssaf_army_m93_oakleaf_summer_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_asst_spec_aa : rhssaf_army_m93_oakleaf_summer_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_medic : rhssaf_soldier_army_oakleaf_summer_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_repair : rhssaf_soldier_army_oakleaf_summer_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_exp : rhssaf_soldier_army_oakleaf_summer_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_engineer : rhssaf_soldier_army_oakleaf_summer_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_crew : rhssaf_soldier_army_oakleaf_summer_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_officer : rhssaf_soldier_army_oakleaf_summer_base {
        ASR_AI_CAMO_BASE;
    };
    
    class rhssaf_army_m10_para_rifleman_m21;

    class rhssaf_army_m10_para_rifleman_ammo : rhssaf_army_m10_para_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_asst_mgun_m84 : rhssaf_army_m10_para_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_asst_mgun_minimi : rhssaf_army_m10_para_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };

    class rhssaf_soldier_army_para_digital_base;
    
    class rhssaf_army_m10_para_sq_lead : rhssaf_soldier_army_para_digital_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_sniper_m76 : rhssaf_soldier_army_para_digital_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhssaf_army_m10_para_sniper_m82a1 : rhssaf_army_m10_para_sniper_m76 {
		ASR_AI_SKILL_SNP1;
    };
    class rhssaf_army_m10_para_spotter : rhssaf_army_m10_para_rifleman_m21 {
		ASR_AI_SKILL_SOF2;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_rifleman_at : rhssaf_soldier_army_para_digital_base {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhssaf_army_m10_para_asst_spec_at : rhssaf_army_m10_para_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_asst_spec_aa : rhssaf_army_m10_para_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_medic : rhssaf_soldier_army_para_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_repair : rhssaf_soldier_army_para_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_exp : rhssaf_soldier_army_para_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_engineer : rhssaf_soldier_army_para_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_crew : rhssaf_soldier_army_para_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_officer : rhssaf_soldier_army_para_digital_base {
        ASR_AI_CAMO_BASE;
    };

    class rhssaf_un_m10_digital_desert_rifleman_m21;

    class rhssaf_un_m10_digital_desert_rifleman_ammo : rhssaf_un_m10_digital_desert_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_asst_mgun : rhssaf_un_m10_digital_desert_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };

    class rhssaf_soldier_un_desert_base;

    class rhssaf_un_m10_digital_desert_sq_lead : rhssaf_soldier_un_desert_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_sniper_m76 : rhssaf_soldier_un_desert_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhssaf_un_m10_digital_desert_spotter : rhssaf_un_m10_digital_desert_rifleman_m21 {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_rifleman_at : rhssaf_soldier_un_desert_base {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhssaf_un_m10_digital_desert_asst_spec_at : rhssaf_un_m10_digital_desert_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_asst_spec_aa : rhssaf_un_m10_digital_desert_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_medic : rhssaf_soldier_un_desert_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_repair : rhssaf_soldier_un_desert_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_exp : rhssaf_soldier_un_desert_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_engineer : rhssaf_soldier_un_desert_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_crew : rhssaf_soldier_un_desert_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_officer : rhssaf_soldier_un_desert_base {
        ASR_AI_CAMO_BASE;
    };

    class rhssaf_un_m10_digital_rifleman_m21;

    class rhssaf_un_m10_digital_rifleman_ammo : rhssaf_un_m10_digital_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_asst_mgun : rhssaf_un_m10_digital_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };

    class rhssaf_soldier_un_digital_base;

    class rhssaf_un_m10_digital_sq_lead : rhssaf_soldier_un_digital_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_sniper_m76 : rhssaf_soldier_un_digital_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhssaf_un_m10_digital_spotter : rhssaf_un_m10_digital_rifleman_m21 {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_rifleman_at : rhssaf_soldier_un_digital_base {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhssaf_un_m10_digital_asst_spec_at : rhssaf_un_m10_digital_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_asst_spec_aa : rhssaf_un_m10_digital_rifleman_m21 {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_medic : rhssaf_soldier_un_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_repair : rhssaf_soldier_un_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_exp : rhssaf_soldier_un_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_engineer : rhssaf_soldier_un_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_crew : rhssaf_soldier_un_digital_base {
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_officer : rhssaf_soldier_un_digital_base {
        ASR_AI_CAMO_BASE;
    };

};
