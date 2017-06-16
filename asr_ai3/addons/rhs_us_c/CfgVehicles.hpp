class CfgVehicles {

    class B_AssaultPack_Base;
    class B_AssaultPack_rgr;

    class rhsusf_assault_eagleaiii_ucp : B_AssaultPack_Base {
        //displayName = "Eagle A-III UCP";
        __CAMO_B_MEDIUMCAMO;
    };
    class rhsusf_assault_eagleaiii_coy : rhsusf_assault_eagleaiii_ucp {
        //displayName = "Eagle A-III Coyote";
        __CAMO_B_MEDIUMMONO;
    };
    class rhsusf_falconii : B_AssaultPack_rgr {
        //displayName = "Falcon-II RGR";
        __CAMO_B_SMALLMONO;
    };
    class rhsusf_falconii_mc : B_AssaultPack_rgr {
        //displayName = "Falcon-II MC";
        __CAMO_B_SMALLCAMO;
    };

    class Weapon_Bag_Base;

    class RHS_M2_Gun_Bag : Weapon_Bag_Base {
        //displayName = "M2 Gun Bag";
        __CAMO_B_HUGEMONO;
    };
    class RHS_M2_Tripod_Bag : Weapon_Bag_Base {
        //displayName = "M2 Tripod Bag";
        __CAMO_B_MEDIUMMONO;
    };

	class SoldierWB;

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

};
