class CfgVehicles {

	#include "bags.hpp"

	class SoldierWB;

    class rhsusf_socom_uniform_base: SoldierWB {
		ASR_AI_MINFIRETIME;
		ASR_AI_AMMOCOEF_STANDARD;
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
    class rhsusf_army_ocp_riflemanat : rhsusf_army_ocp_rifleman {
        //displayName = "Rifleman (M136)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_army_ocp_autoriflemana : rhsusf_army_ocp_rifleman {
        //displayName = "Auto Rifleman Ass.";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_machinegunnera : rhsusf_army_ocp_rifleman {
        //displayName = "Machine Gunner Assistant";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_marksman : rhsusf_infantry_army_base {
        //displayName = "Marksman";
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsusf_army_ocp_officer : rhsusf_infantry_army_base {
        //displayName = "Officer";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_squadleader : rhsusf_infantry_army_base {
        //displayName = "Squad Leader";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_teamleader : rhsusf_infantry_army_base {
        //displayName = "Team Leader";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_jfo : rhsusf_infantry_army_base {
        //displayName = "Joint Fires Observer";
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_army_ocp_javelin : rhsusf_army_ocp_riflemanat {
        //displayName = "AT Specialist (Javelin)";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_javelin_assistant : rhsusf_army_ocp_riflemanat {
        //displayName = "AT Assistant (Javelin)";
        ASR_AI_CAMO_BASE;
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsusf_army_ocp_maaws : rhsusf_army_ocp_riflemanat {
        //displayName = "AT Specialist (MAAWS)";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_aa : rhsusf_army_ocp_riflemanat {
        //displayName = "AA Specialist (FIM-92F)";
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
        //displayName = "Sniper";
		ASR_AI_AMMOCOEF_SNIPER;
		ASR_AI_SKILL_SNP1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_crewman : rhsusf_infantry_army_base {
        //displayName = "Crew";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_army_ocp_helipilot : rhsusf_infantry_army_base {
        //displayName = "Helicopter Pilot";
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
    };

    class rhsusf_army_ocp_arb_riflemanat : rhsusf_army_ocp_riflemanat {
		ASR_AI_AMMOCOEF_AT;
    };


//USMC

    class rhsusf_infantry_usmc_base;
    class rhsusf_usmc_marpat_wd_rifleman;

    class rhsusf_usmc_marpat_wd_rifleman_light : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Rifleman (Light)";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_riflemanat : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Rifleman (M136)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_marpat_wd_rifleman_law : rhsusf_usmc_marpat_wd_riflemanat {
        //displayName = "Rifleman (M72)";
		ASR_AI_AMMOCOEF_AT;
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
    class rhsusf_usmc_marpat_wd_squadleader : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Squad Leader";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_teamleader : rhsusf_infantry_usmc_base {
        //displayName = "Team Leader";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_jfo : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Joint Fires Observer";
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_marpat_wd_fso : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Fire Support Officer";
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_marpat_wd_smaw : rhsusf_usmc_marpat_wd_riflemanat {
        //displayName = "Assaultman (SMAW)";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_javelin_assistant : rhsusf_usmc_marpat_wd_smaw {
        //displayName = "AT Assistant (Javelin)";
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsusf_usmc_marpat_wd_stinger : rhsusf_usmc_marpat_wd_smaw {
        //displayName = "AA Specialist (FIM-92F)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_marpat_wd_engineer : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Combat Engineer";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_explosives : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "EOD Tech";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_marksman : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Designated Marksman";
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsusf_usmc_marpat_wd_spotter : rhsusf_usmc_marpat_wd_marksman {
        //displayName = "Scout Spotter";
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_SKILL_SOF2;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_sniper : rhsusf_usmc_marpat_wd_marksman {
        //displayName = "Scout Sniper (M40)";
		ASR_AI_AMMOCOEF_SNIPER;
		ASR_AI_SKILL_SNP1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_crewman : rhsusf_infantry_usmc_base {
        //displayName = "Crew";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_helipilot : rhsusf_infantry_usmc_base {
        //displayName = "Helicopter Pilot";
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_marpat_wd_helicrew : rhsusf_usmc_marpat_wd_helipilot {
        //displayName = "Helicopter Crew";
		ASR_AI_SKILL_REG2;
    };


// USMC LAR

    class rhsusf_usmc_lar_marpat_wd_rifleman : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Scout (M4)";
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_lar_marpat_wd_rifleman_light : rhsusf_usmc_lar_marpat_wd_rifleman {
        //displayName = "Scout (M4/Light)";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_lar_marpat_wd_riflemanat : rhsusf_usmc_lar_marpat_wd_rifleman {
        //displayName = "Scout (M136)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_lar_marpat_wd_autorifleman : rhsusf_infantry_usmc_base {
        //displayName = "Scout (M27)";
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_lar_marpat_wd_squadleader : rhsusf_usmc_lar_marpat_wd_rifleman {
        //displayName = "Scout (Squad Leader)";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_lar_marpat_wd_teamleader : rhsusf_infantry_usmc_base {
        //displayName = "Scout (Team Leader)";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_lar_marpat_wd_marksman : rhsusf_usmc_lar_marpat_wd_rifleman {
        //displayName = "Scout (Marksman)";
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsusf_usmc_lar_marpat_wd_crewman : rhsusf_infantry_usmc_base {
        //displayName = "Crew";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };


// USMC Recon

    class rhsusf_infantry_usmc_recon_base : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_SOF2;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_usmc_recon_marpat_wd_rifleman_at : rhsusf_infantry_usmc_recon_base {
        //displayName = "Rifleman (M136)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_recon_marpat_wd_marksman : rhsusf_infantry_usmc_recon_base {
        //displayName = "Marksman";
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

    class rhsusf_socom_mc_uniform;
    class rhsusf_infantry_socom_armysf_base : rhsusf_socom_mc_uniform {
        //displayName = "Rifleman";
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
        //displayName = "EOD Tech";
        ASR_AI_CAMO_BASE;
        canDeactivateMines = 1;
    };
    class rhsusf_socom_marsoc_cso_mechanic : rhsusf_infantry_socom_marsoc_base {
        //displayName = "Mechanic";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_socom_marsoc_spotter : rhsusf_infantry_socom_marsoc_base {
        //displayName = "Scout Spotter";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_socom_marsoc_sniper : rhsusf_socom_marsoc_spotter {
        //displayName = "Scout Sniper (M110)";
		ASR_AI_AMMOCOEF_SNIPER;
		ASR_AI_SKILL_SNP1;
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_socom_marsoc_sniper_m107 : rhsusf_socom_marsoc_sniper {
        //displayName = "Sniper (M107)";
        ASR_AI_CAMO_BASE;
    };
    class rhsusf_socom_swcc_crewman : rhsusf_infantry_socom_marsoc_base {
        //displayName = "Crew";
		ASR_AI_SKILL_SOF2;
    };
    class rhsusf_socom_swcc_officer : rhsusf_socom_swcc_crewman {
        //displayName = "Officer";
        ASR_AI_CAMO_BASE;
    };


//Air Force

    class rhsusf_usmc_marpat_wd_rifleman_m4;
    class rhsusf_airforce_jetpilot : rhsusf_usmc_marpat_wd_rifleman_m4 {
        //displayName = "Jet Pilot";
		ASR_AI_SKILL_PIL1;
    };
};
