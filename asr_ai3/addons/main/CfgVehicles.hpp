class CfgVehicles {

	class AllVehicles;
	class Air : AllVehicles {
		sensitivity = 6;
	};
	class Helicopter_Base_H;
	class Heli_Light_01_base_F : Helicopter_Base_H {
		sensitivity = 6;
	};
	class Heli_Light_02_base_F : Helicopter_Base_H {
		sensitivity = 6;
	};

	class Man;
	class CAManBase: Man {
		fsmDanger = "x\asr_ai3\addons\main\danger.fsm";
		ASR_AI_SKILL_INS2; // default insurgent
		//sensitivity = 3.0;
		sensitivityEar = 0.75;
		audible = 0.03;
		//lyingLimitSpeedHiding = 0.8;
		//crouchProbabilityHiding = 0.8;
		//lyingLimitSpeedCombat = 1.8;
		//crouchProbabilityCombat = 0.4;
		//crouchProbabilityEngage = 0.75;
		//lyingLimitSpeedStealth = 2;
		minFireTime = 7;
		ASR_AI_CROUCH_MORE;
		ASR_AI_CAMO_HALF;
	};
	class Civilian: CAManBase {
		ASR_AI_SKILL_CIV1; // default civilian
		ASR_AI_COST_LESS;
		sensitivity = 2;
		minFireTime = 10;
		ASR_AI_CAMO_NONE;
	};
	class SoldierWB: CAManBase {
		ASR_AI_SKILL_REG2; // default soldier
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class SoldierEB: CAManBase {
		ASR_AI_SKILL_REG2;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class SoldierGB: CAManBase {
		ASR_AI_SKILL_REG2;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};

 // BLUFOR
 // basic

	class B_Soldier_base_F: SoldierWB {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class B_Soldier_F: B_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class B_Soldier_02_f: B_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class B_Soldier_03_f: B_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class B_Soldier_04_f : B_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class B_Soldier_05_f : B_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class B_Soldier_lite_F: B_Soldier_03_f {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class B_Soldier_GL_F: B_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class B_soldier_LAT_F: B_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class B_medic_F: B_Soldier_02_f {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class B_soldier_repair_F: B_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class B_soldier_exp_F: B_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class B_RangeMaster_F: B_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class B_Competitor_F: B_RangeMaster_F {
		ASR_AI_COST_REG;
	};
	class B_Soldier_A_F: B_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class B_soldier_AT_F: B_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class B_soldier_AA_F: B_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class B_engineer_F: B_Soldier_03_f {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class B_crew_F: B_Soldier_03_f {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class B_Soldier_support_base_F: B_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class B_soldier_AAR_F: B_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class B_soldier_AAT_F: B_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class B_soldier_AAA_F: B_soldier_AAT_F {
		ASR_AI_COST_REG;
	};
	class B_soldier_UAV_F: B_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class B_soldier_PG_F : B_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class B_Story_Protagonist_F : B_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class B_Story_Engineer_F : B_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class B_Story_Tank_Commander_F : B_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class B_support_MG_F : B_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class B_support_GMG_F : B_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class B_support_Mort_F : B_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class B_support_AMG_F : B_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class B_support_AMort_F : B_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};

// ar
	class B_soldier_AR_F: B_Soldier_02_f {
		ASR_AI_COST_REG;
	};

// lead
	class B_Soldier_SL_F: B_Soldier_03_f {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class B_Soldier_TL_F: B_Soldier_03_f {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};

// dm
	class B_soldier_M_F: B_Soldier_base_F {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
	};

// pilot
	class B_Helipilot_F: B_Soldier_04_f {
		ASR_AI_SKILL_PIL1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_HALF;
	};
	class B_Pilot_F : B_Soldier_05_f {
		ASR_AI_SKILL_PIL1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_HALF;
	};
	class B_helicrew_F : B_helipilot_F {
		ASR_AI_COST_REG;
	};
	class B_Story_Pilot_F : B_Soldier_base_F {
		ASR_AI_SKILL_PIL1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_HALF;
	};

// diver
	class B_Soldier_diver_base_F: B_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_REG;
		minFireTime = 5;
		ASR_AI_CAMO_HALF;
	};
	class B_diver_F: B_Soldier_diver_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_HALF;
	};
	class B_diver_TL_F: B_Soldier_diver_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_HALF;
	};
	class B_diver_exp_F: B_Soldier_diver_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_HALF;
	};

// sniper
	class B_Soldier_sniper_base_F: B_Soldier_base_F {
		ASR_AI_SKILL_SNP1;
		ASR_AI_COST_SPECIAL;
		sensitivity = 4;
		minFireTime = 5;
		ASR_AI_CAMO_GHIL;
	};
	class B_spotter_F: B_Soldier_sniper_base_F {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_SPECIAL;
		sensitivity = 4;
		ASR_AI_CAMO_GHIL;
	};
	class B_sniper_F: B_Soldier_sniper_base_F {
		ASR_AI_COST_SPECIAL;
		sensitivity = 4;
		ASR_AI_CAMO_GHIL;
	};

// officer
	class B_officer_F: B_Soldier_base_F {
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
	};
	class B_Story_Colonel_F : B_Soldier_base_F {
		ASR_AI_COST_SPECIAL;
	};

// sof
	class B_Soldier_recon_base: B_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_SPECIAL;
		minFireTime = 5;
		ASR_AI_CAMO_FULL;
	};
	class B_recon_F: B_Soldier_recon_base {
		ASR_AI_COST_SPECIAL;
	};
	class B_recon_LAT_F: B_Soldier_recon_base {
		ASR_AI_COST_SPECIAL;
	};
	class B_recon_exp_F: B_Soldier_recon_base {
		ASR_AI_COST_SPECIAL;
	};
	class B_recon_medic_F: B_Soldier_recon_base {
		ASR_AI_COST_SPECIAL;
	};
	class B_recon_TL_F: B_Soldier_recon_base {
		ASR_AI_COST_SPECIAL;
	};
	class B_recon_M_F: B_Soldier_recon_base {
		ASR_AI_COST_SPECIAL;
	};
	class B_recon_JTAC_F: B_Soldier_recon_base {
		ASR_AI_COST_SPECIAL;
	};
	class B_Story_SF_Captain_F : B_Soldier_base_F {
		ASR_AI_SKILL_SOF1;
		ASR_AI_COST_SPECIAL;
		minFireTime = 5;
	};
	class B_CTRG_soldier_GL_LAT_F : B_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_SPECIAL;
		minFireTime = 5;
	};
	class B_CTRG_soldier_engineer_exp_F : B_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_SPECIAL;
		minFireTime = 5;
	};
	class B_CTRG_soldier_M_medic_F : B_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_SPECIAL;
		minFireTime = 5;
		ASR_AI_CAMO_FULL;
	};
	class B_CTRG_soldier_AR_A_F : B_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_SPECIAL;
		minFireTime = 5;
	};

 // OPFOR

 // basic

	class O_Soldier_base_F: SoldierEB {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_Soldier_F: O_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class O_Soldier_02_F : O_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class O_Soldier_lite_F: O_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_Soldier_GL_F: O_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class O_Soldier_LAT_F: O_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class O_medic_F: O_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_soldier_repair_F: O_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_soldier_exp_F: O_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_Soldier_A_F: O_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_Soldier_AT_F: O_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_Soldier_AA_F: O_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_engineer_F: O_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_crew_F: O_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_Soldier_support_base_F: O_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_Soldier_AAR_F: O_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class O_Soldier_AAT_F: O_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class O_Soldier_AAA_F: O_Soldier_AAT_F {
		ASR_AI_COST_REG;
	};
	class O_soldier_UAV_F: O_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class O_soldier_PG_F : O_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class O_Story_CEO_F : O_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class O_support_AMG_F : O_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class O_support_AMort_F : O_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class O_support_MG_F : O_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class O_support_GMG_F : O_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class O_support_Mort_F : O_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class O_Soldier_Urban_base : O_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class O_soldierU_F : O_Soldier_Urban_base {
		ASR_AI_COST_REG;
	};
	class O_soldierU_AAR_F : O_Soldier_Urban_base {
		ASR_AI_COST_REG;
	};
	class O_soldierU_LAT_F : O_Soldier_Urban_base {
		ASR_AI_COST_REG;
	};
	class O_soldierU_AT_F : O_Soldier_Urban_base {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_soldierU_AAT_F : O_Soldier_Urban_base {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_soldierU_AA_F : O_Soldier_Urban_base {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_soldierU_AAA_F : O_Soldier_Urban_base {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_soldierU_medic_F : O_Soldier_Urban_base {
		ASR_AI_COST_REG;
	};
	class O_soldierU_repair_F : O_Soldier_Urban_base {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_soldierU_exp_F : O_Soldier_Urban_base {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_engineer_U_F : O_Soldier_Urban_base {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_soldierU_A_F : O_Soldier_Urban_base {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_SoldierU_GL_F : O_Soldier_Urban_base {
		ASR_AI_COST_REG;
	};

// ar
	class O_Soldier_AR_F: O_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class O_soldierU_AR_F : O_Soldier_Urban_base {
		ASR_AI_COST_REG;
	};

// lead
	class O_Soldier_SL_F: O_Soldier_base_F {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_Soldier_TL_F: O_Soldier_base_F {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_soldierU_TL_F : O_Soldier_Urban_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class O_SoldierU_SL_F : O_Soldier_Urban_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};

// dm
	class O_soldier_M_F: O_Soldier_base_F {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
	};
	class O_soldierU_M_F : O_Soldier_Urban_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
	};

// pilot
	class O_helipilot_F: O_Soldier_02_F {
		ASR_AI_SKILL_PIL1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_HALF;
	};
	class O_Pilot_F : O_helipilot_F {
		ASR_AI_COST_REG;
	};
	class O_helicrew_F : O_helipilot_F {
		ASR_AI_COST_REG;
	};

// diver
	class O_Soldier_diver_base_F: O_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_REG;
		minFireTime = 5;
		ASR_AI_CAMO_HALF;
	};
	class O_diver_F: O_Soldier_diver_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_HALF;
	};
	class O_diver_TL_F: O_Soldier_diver_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_HALF;
	};
	class O_diver_exp_F: O_Soldier_diver_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_HALF;
	};

// sniper
	class O_Soldier_sniper_base_F: O_Soldier_base_F {
		ASR_AI_SKILL_SNP1;
		ASR_AI_COST_SPECIAL;
		sensitivity = 4;
		minFireTime = 5;
		ASR_AI_CAMO_GHIL;
	};
	class O_spotter_F: O_Soldier_sniper_base_F {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_SPECIAL;
		sensitivity = 4;
		ASR_AI_CAMO_GHIL;
	};
	class O_sniper_F: O_Soldier_sniper_base_F {
		ASR_AI_COST_SPECIAL;
		sensitivity = 4;
		ASR_AI_CAMO_GHIL;
	};

// officer
	class O_officer_F: O_Soldier_base_F {
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
	};
	class O_Story_Colonel_F : O_Soldier_base_F {
		ASR_AI_COST_SPECIAL;
	};

// sof
	class O_Soldier_recon_base: O_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_SPECIAL;
		minFireTime = 5;
		ASR_AI_CAMO_FULL;
	};
	class O_recon_F: O_Soldier_recon_base {
		ASR_AI_COST_SPECIAL;
	};
	class O_recon_M_F: O_Soldier_recon_base {
		ASR_AI_COST_SPECIAL;
	};
	class O_recon_LAT_F: O_Soldier_recon_base {
		ASR_AI_COST_SPECIAL;
	};
	class O_recon_medic_F: O_Soldier_recon_base {
		ASR_AI_COST_SPECIAL;
	};
	class O_recon_exp_F: O_Soldier_recon_base {
		ASR_AI_COST_SPECIAL;
	};
	class O_recon_JTAC_F: O_Soldier_recon_base {
		ASR_AI_COST_SPECIAL;
	};
	class O_recon_TL_F: O_Soldier_recon_base {
		ASR_AI_COST_SPECIAL;
	};

 // GREENFOR
 // basic

	class I_Soldier_base_F: SoldierGB {
		ASR_AI_COST_REG;
		minFireTime = 7;
		ASR_AI_CAMO_FULL;
	};
	class I_Soldier_02_F: I_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class I_Soldier_03_F : I_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class I_Soldier_04_F : I_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class I_soldier_F: I_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class I_Soldier_lite_F: I_Soldier_02_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class I_Soldier_A_F: I_Soldier_02_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class I_Soldier_GL_F: I_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class I_Soldier_LAT_F: I_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class I_Soldier_AT_F: I_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class I_Soldier_AA_F: I_Soldier_02_F {
		ASR_AI_COST_REG;
	};
	class I_medic_F: I_Soldier_02_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class I_Soldier_repair_F: I_Soldier_02_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class I_Soldier_exp_F: I_Soldier_02_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class I_engineer_F: I_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class I_crew_F: I_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class I_Soldier_support_base_F: I_Soldier_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class I_Soldier_AAR_F: I_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class I_Soldier_AAT_F: I_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class I_Soldier_AAA_F: I_Soldier_AAT_F {
		ASR_AI_COST_REG;
	};
	class I_soldier_UAV_F: I_Soldier_base_F {
		ASR_AI_COST_REG;
	};
	class I_support_MG_F : I_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class I_support_GMG_F : I_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class I_support_Mort_F : I_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class I_support_AMG_F : I_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};
	class I_support_AMort_F : I_Soldier_support_base_F {
		ASR_AI_COST_REG;
	};

// ar
	class I_Soldier_AR_F: I_Soldier_02_F {
		ASR_AI_COST_REG;
	};

// lead
	class I_Soldier_SL_F: I_Soldier_02_F {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class I_Soldier_TL_F: I_Soldier_base_F {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};

// dm
	class I_Soldier_M_F: I_Soldier_base_F {
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_REG;
	};

// pilot
	class I_helipilot_F: I_Soldier_03_F {
		ASR_AI_SKILL_PIL1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_HALF;
	};
	class I_pilot_F : I_Soldier_04_F {
		ASR_AI_SKILL_PIL1;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_HALF;
	};
	class I_helicrew_F: I_helipilot_F {
		ASR_AI_COST_REG;
	};

// officer
	class I_officer_F: I_Soldier_base_F {
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
	};
	class I_Story_Colonel_F : I_officer_F {
		ASR_AI_COST_SPECIAL;
	};

// sniper
	class I_Soldier_sniper_base_F: I_Soldier_base_F {
		ASR_AI_SKILL_SNP1;
		ASR_AI_COST_SPECIAL;
		sensitivity = 4;
		minFireTime = 5;
		ASR_AI_CAMO_GHIL;
	};
	class I_Spotter_F: I_Soldier_sniper_base_F {
		ASR_AI_COST_SPECIAL;
		sensitivity = 4;
		ASR_AI_CAMO_GHIL;
	};
	class I_Sniper_F: I_Soldier_sniper_base_F {
		ASR_AI_COST_SPECIAL;
		sensitivity = 4;
		ASR_AI_CAMO_GHIL;
	};

// diver
	class I_Soldier_diver_base_F: I_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_REG;
		minFireTime = 5;
		ASR_AI_CAMO_HALF;
	};
	class I_diver_F: I_Soldier_diver_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_HALF;
	};
	class I_diver_exp_F: I_Soldier_diver_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_HALF;
	};
	class I_diver_TL_F: I_Soldier_diver_base_F {
		ASR_AI_COST_REG;
		ASR_AI_CAMO_HALF;
	};

// CIV

	class Civilian_F : Civilian {};
	class C_man_1 : Civilian_F {};

// pilot
	class C_man_pilot_F : C_man_1 {
		ASR_AI_SKILL_PIL2;
	};

// GUERRILLA
// basic

	class I_G_Soldier_base_F : SoldierGB {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	class I_G_Soldier_F : I_G_Soldier_base_F {
		ASR_AI_COST_LESS;
	};
	class I_G_Soldier_lite_F : I_G_Soldier_base_F {
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	class I_G_medic_F : I_G_Soldier_base_F {
		ASR_AI_COST_LESS;
	};
	class I_G_engineer_F : I_G_Soldier_base_F {
		ASR_AI_COST_LESS;
	};
	class I_G_Soldier_exp_F : I_G_Soldier_base_F {
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	class I_G_Soldier_GL_F : I_G_Soldier_base_F {
		ASR_AI_COST_LESS;
	};
	class I_G_Soldier_LAT_F : I_G_Soldier_base_F {
		ASR_AI_COST_LESS;
	};
	class I_G_Soldier_A_F : I_G_Soldier_base_F {
		ASR_AI_COST_LESS;
	};
	
	class B_G_Soldier_F : I_G_Soldier_F {};

// lead
	class I_G_Soldier_SL_F : I_G_Soldier_base_F {
		ASR_AI_SKILL_INS1;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
	};
	class I_G_Soldier_TL_F : I_G_Soldier_base_F {
		ASR_AI_SKILL_INS1;
		ASR_AI_COST_LESS;
	};
	class I_G_Story_Protagonist_F : B_G_Soldier_F {
		ASR_AI_SKILL_INS1;
		ASR_AI_COST_LESS;
	};

// ar
	class I_G_Soldier_AR_F : I_G_Soldier_base_F {
		ASR_AI_COST_LESS;
	};

// dm
	class I_G_Soldier_M_F : I_G_Soldier_base_F {
		ASR_AI_SKILL_INS1;
		ASR_AI_COST_LESS;
	};

// officer
	class I_G_officer_F : I_G_Soldier_base_F {
		ASR_AI_SKILL_INS1;
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_HALF;
	};

// sof
	class I_G_Story_SF_Captain_F : B_G_Soldier_F {
		ASR_AI_SKILL_SOF1;
		ASR_AI_COST_SPECIAL;
		minFireTime = 5;
	};

};
