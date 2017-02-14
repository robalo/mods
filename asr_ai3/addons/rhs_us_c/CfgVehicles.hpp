class CfgVehicles {

	class SoldierWB;

//US Army

    class rhsusf_infantry_army_base : SoldierWB {
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
    };
    class rhsusf_army_ocp_rifleman;
    class rhsusf_army_ocp_riflemanat : rhsusf_army_ocp_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_army_ocp_marksman : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsusf_army_ocp_squadleader : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_army_ocp_teamleader : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_army_ocp_jfo : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_army_ocp_aa : rhsusf_army_ocp_riflemanat {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_army_ocp_sniper : rhsusf_army_ocp_marksman {
		ASR_AI_AMMOCOEF_SNIPER;
		ASR_AI_SKILL_SNP1;
    };
    class rhsusf_army_ocp_helipilot : rhsusf_infantry_army_base {
		ASR_AI_SKILL_PIL1;
    };

//USMC

    class rhsusf_infantry_usmc_base;
    class rhsusf_usmc_marpat_wd_rifleman;

    class rhsusf_usmc_marpat_wd_riflemanat : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_marpat_wd_squadleader : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_marpat_wd_teamleader : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_marpat_wd_jfo : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_marpat_wd_fso : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_marpat_wd_smaw;
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
    };
    class rhsusf_usmc_marpat_wd_sniper : rhsusf_usmc_marpat_wd_marksman {
		ASR_AI_AMMOCOEF_SNIPER;
		ASR_AI_SKILL_SNP1;
    };
    class rhsusf_usmc_marpat_wd_helipilot : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_PIL1;
    };


// USMC LAR

    class rhsusf_usmc_lar_marpat_wd_rifleman : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_lar_marpat_wd_riflemanat : rhsusf_usmc_lar_marpat_wd_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_lar_marpat_wd_autorifleman : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_lar_marpat_wd_teamleader : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_lar_marpat_wd_marksman : rhsusf_usmc_lar_marpat_wd_rifleman {
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsusf_usmc_lar_marpat_wd_crewman : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_REG1;
    };


// USMC Recon

    class rhsusf_infantry_usmc_recon_base : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_SOF2;
    };
    class rhsusf_usmc_recon_marpat_wd_rifleman_at : rhsusf_infantry_usmc_recon_base {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_recon_marpat_wd_marksman : rhsusf_infantry_usmc_recon_base {
		ASR_AI_AMMOCOEF_SNIPER;
    };

// ARMY SF

    class rhsusf_socom_uniform_base: SoldierWB {
		ASR_AI_MINFIRETIME;
    };
    class rhsusf_socom_mc_uniform;
    class rhsusf_infantry_socom_armysf_base : rhsusf_socom_mc_uniform {
		ASR_AI_SKILL_SOF1;
		ASR_AI_MINFIRETIME;
    };


//MARSOC

    class rhsusf_socom_g3_m81_uniform;
    class rhsusf_infantry_socom_marsoc_base : rhsusf_socom_g3_m81_uniform {
		ASR_AI_SKILL_SOF1;
    };
    class rhsusf_socom_marsoc_cso_eod : rhsusf_infantry_socom_marsoc_base {
        canDeactivateMines = 1;
    };
    class rhsusf_socom_marsoc_cso_mechanic : rhsusf_infantry_socom_marsoc_base {
        engineer = 1;
    };
    class rhsusf_socom_marsoc_spotter;
    class rhsusf_socom_marsoc_sniper : rhsusf_socom_marsoc_spotter {
		ASR_AI_AMMOCOEF_SNIPER;
		ASR_AI_SKILL_SNP1;
    };


//Air Force

    class rhsusf_usmc_marpat_wd_rifleman_m4;
    class rhsusf_airforce_jetpilot : rhsusf_usmc_marpat_wd_rifleman_m4 {
		ASR_AI_SKILL_PIL1;
    };

};
