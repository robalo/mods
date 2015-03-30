#define __PREF_PRIMARY primaryAmmoCoef = 0.2; secondaryAmmoCoef = 0.05;	handgunAmmoCoef = 0.1
#define __PREF_TUBE secondaryAmmoCoef = 0.5

class CfgVehicles {

//RU

	class SoldierEB;

	class rhs_infantry_msv_base : SoldierEB {
		ASR_AI_SKILL_REG2; // default soldier
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class rhs_msv_rifleman;
	class rhs_msv_grenadier : rhs_msv_rifleman {
		ASR_AI_COST_REG;
	};
	class rhs_msv_marksman : rhs_msv_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
		__PREF_PRIMARY;
	};
	class rhs_msv_sergeant : rhs_msv_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
	};
	class rhs_msv_machinegunner : rhs_msv_rifleman {
		__PREF_PRIMARY;
	};
	class rhs_msv_officer_armored : rhs_msv_rifleman {
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
	};

	class rhs_pilot_base : rhs_infantry_msv_base {
		ASR_AI_SKILL_PIL1;
		ASR_AI_CAMO_HALF;
	};


	class rhs_infantry_vdv_base : rhs_infantry_msv_base {
		ASR_AI_SKILL_REG2;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class rhs_vdv_rifleman;
	class rhs_vdv_grenadier : rhs_vdv_rifleman {
		ASR_AI_COST_REG;
	};
	class rhs_vdv_marksman : rhs_vdv_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
		__PREF_PRIMARY;
	};
	class rhs_vdv_sergeant : rhs_vdv_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
	};
	class rhs_vdv_machinegunner : rhs_vdv_rifleman {
		__PREF_PRIMARY;
	};
	class rhs_vdv_officer_armored : rhs_vdv_rifleman {
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
	};

	class rhs_vdv_recon_sergeant : rhs_vdv_rifleman {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_SPECIAL;
		minFireTime = 5;
		ASR_AI_CAMO_FULL;
	};
	class rhs_vdv_recon_marksman : rhs_vdv_recon_sergeant {
		__PREF_PRIMARY;
	};
	class rhs_vdv_recon_at : rhs_vdv_recon_sergeant {
		__PREF_TUBE;
	};

//US Army

	class rhsusf_infantry_army_base : SoldierEB {
		ASR_AI_SKILL_REG2;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class rhsusf_army_ocp_grenadier : rhsusf_infantry_army_base {
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_officer : rhsusf_infantry_army_base {
		ASR_AI_CAMO_FULL;
	};
	class rhsusf_army_ocp_squadleader : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_teamleader : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_marksman : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
		__PREF_PRIMARY;
	};
	class rhsusf_army_ocp_sniper : rhsusf_army_ocp_marksman {
		ASR_AI_SKILL_SNP1;
		ASR_AI_COST_SPECIAL;
		sensitivity = 4;
		minFireTime = 5;
	};
	class rhsusf_army_ocp_jfo : rhsusf_infantry_army_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_fso : rhsusf_army_ocp_jfo {
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_helipilot : rhsusf_infantry_army_base {
		ASR_AI_SKILL_PIL1;
	};

//US MC

	class rhsusf_infantry_usmc_base;
	class rhsusf_usmc_marpat_wd_rifleman;
	class rhsusf_usmc_marpat_wd_riflemanat : rhsusf_usmc_marpat_wd_rifleman {
		__PREF_TUBE;
	};
	class rhsusf_usmc_marpat_wd_officer : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_CAMO_FULL;
	};
	class rhsusf_usmc_marpat_wd_squadleader : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_teamleader : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_fso : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_jfo : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_wd_marksman : rhsusf_usmc_marpat_wd_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
		__PREF_PRIMARY;
	};
	class rhsusf_usmc_marpat_wd_spotter : rhsusf_usmc_marpat_wd_marksman {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_SPECIAL;
		sensitivity = 4;
	};
	class rhsusf_usmc_marpat_wd_sniper : rhsusf_usmc_marpat_wd_marksman {
		ASR_AI_SKILL_SNP1;
		ASR_AI_COST_SPECIAL;
		sensitivity = 4;
		minFireTime = 5;
	};
	class rhsusf_usmc_marpat_wd_helipilot : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_PIL1;
	};

//USMC FR

	class rhsusf_infantry_usmc_fr_base : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_SPECIAL;
		minFireTime = 5;
	};
	class rhsusf_usmc_fr_marpat_wd_rifleman;
	class rhsusf_usmc_fr_marpat_wd_riflemanat : rhsusf_usmc_fr_marpat_wd_rifleman {
		__PREF_TUBE;
	};
	class rhsusf_usmc_fr_marpat_wd_squadleader : rhsusf_usmc_fr_marpat_wd_rifleman {
		ASR_AI_COST_SPECIAL;
	};
	class rhsusf_usmc_fr_marpat_wd_teamleader : rhsusf_infantry_usmc_fr_base {
		ASR_AI_COST_SPECIAL;
	};
	class rhsusf_usmc_fr_marpat_wd_marksman : rhsusf_usmc_fr_marpat_wd_rifleman {
		ASR_AI_COST_SPECIAL;
		__PREF_PRIMARY;
	};
	class rhsusf_usmc_fr_marpat_wd_spotter : rhsusf_usmc_fr_marpat_wd_marksman {
		sensitivity = 4;
	};
	class rhsusf_usmc_fr_marpat_wd_sniper : rhsusf_usmc_fr_marpat_wd_marksman {
		ASR_AI_SKILL_SNP1;
		sensitivity = 4;
	};

//MARSOC

	class rhsusf_socom_marsoc_base : rhsusf_infantry_usmc_base {
		ASR_AI_SKILL_SOF1;
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
		minFireTime = 5;
	};
	class rhsusf_socom_marsoc_cso;
	class rhsusf_socom_marsoc_cso_light : rhsusf_socom_marsoc_base {
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
	};
	class rhsusf_socom_marsoc_teamleader : rhsusf_socom_marsoc_cso {
		ASR_AI_CAMO_FULL;
	};
	class rhsusf_socom_marsoc_teamchief : rhsusf_socom_marsoc_cso {
		ASR_AI_COST_SPECIAL;
	};
	class rhsusf_socom_marsoc_elementleader : rhsusf_socom_marsoc_cso {
		ASR_AI_COST_SPECIAL;
	};
	class rhsusf_socom_marsoc_jfo : rhsusf_socom_marsoc_base {
		ASR_AI_COST_SPECIAL;
	};
	class rhsusf_socom_marsoc_marksman : rhsusf_socom_marsoc_cso {
		ASR_AI_COST_SPECIAL;
		__PREF_PRIMARY;
	};
	class rhsusf_socom_marsoc_spotter : rhsusf_socom_marsoc_cso_light {
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
		sensitivity = 4;
	};
	class rhsusf_socom_marsoc_sniper : rhsusf_socom_marsoc_marksman {
		ASR_AI_SKILL_SNP1;
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
		sensitivity = 4;
	};

	class rhsusf_usmc_marpat_wd_rifleman_m4;
	class rhsusf_navy_marpat_wd_medic : rhsusf_usmc_marpat_wd_rifleman_m4 {
		ASR_AI_COST_REG;
	};
	class rhsusf_usmc_marpat_d_rifleman_m4;
	class rhsusf_navy_marpat_d_medic : rhsusf_usmc_marpat_d_rifleman_m4 {
		ASR_AI_COST_REG;
	};
	class rhsusf_socom_marsoc_cso_cqb;
	class rhsusf_navy_sarc : rhsusf_socom_marsoc_cso_cqb {
		ASR_AI_COST_SPECIAL;
	};

	class rhsusf_airforce_jetpilot : rhsusf_usmc_marpat_wd_rifleman_m4 {
		ASR_AI_SKILL_PIL1;
		ASR_AI_COST_REG;
	};

//INS

	class I_G_Soldier_F;
	class rhs_g_Soldier_F : I_G_Soldier_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	class rhs_g_Soldier_F2 : I_G_Soldier_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	class rhs_g_Soldier_F3 : I_G_Soldier_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	
	class I_G_Soldier_lite_F;
	class rhs_g_Soldier_lite_F : I_G_Soldier_lite_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	
	class I_G_Soldier_SL_F;
	class rhs_g_Soldier_SL_F : I_G_Soldier_SL_F {
		ASR_AI_SKILL_INS1;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	
	class I_G_Soldier_TL_F;
	class rhs_g_Soldier_TL_F : I_G_Soldier_TL_F {
		ASR_AI_SKILL_INS1;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	
	class I_G_Soldier_AR_F;
	class rhs_g_Soldier_AR_F : I_G_Soldier_AR_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	
	class I_G_medic_F;
	class rhs_g_medic_F : I_G_medic_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	
	class I_G_engineer_F;
	class rhs_g_engineer_F : I_G_engineer_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	
	class I_G_Soldier_exp_F;
	class rhs_g_Soldier_exp_F : I_G_Soldier_exp_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	
	class I_G_Soldier_GL_F;
	class rhs_g_Soldier_GL_F : I_G_Soldier_GL_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	
	class I_G_Soldier_M_F;
	class rhs_g_Soldier_M_F : I_G_Soldier_M_F {
		ASR_AI_SKILL_INS1;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	
	class I_G_Soldier_LAT_F;
	class rhs_g_Soldier_LAT_F : I_G_Soldier_LAT_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	class rhs_g_Soldier_AT_F : I_G_Soldier_LAT_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	
	class I_G_Soldier_A_F;
	class rhs_g_Soldier_AA_F : I_G_Soldier_A_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};

};
