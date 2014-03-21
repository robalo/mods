//lower level = better skills
#define __SKILL_SOF1 asr_ai_level = 1
#define __SKILL_SOF2 asr_ai_level = 2
#define __SKILL_REG1 asr_ai_level = 3
#define __SKILL_REG2 asr_ai_level = 4
#define __SKILL_INS1 asr_ai_level = 5
#define __SKILL_INS2 asr_ai_level = 6
#define __SKILL_CIV1 asr_ai_level = 7
#define __SKILL_PIL1 asr_ai_level = 8
#define __SKILL_PIL2 asr_ai_level = 9
#define __SKILL_SNP1 asr_ai_level = 10

//simple unit cost: civs, regs, specs
#define __COST_LESS cost = 40000
#define __COST_REG cost = 80000
#define __COST_SPECIAL cost = 120000

#define __CROUCH_MORE crouchProbabilityCombat = 0.6; crouchProbabilityEngage = 0.95

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
		__SKILL_INS2; // default insurgent
		//sensitivity = 3.0;
		sensitivityEar = 0.75;
		audible = 0.03;
		//lyingLimitSpeedHiding = 0.8;
		//crouchProbabilityHiding = 0.8;
		//lyingLimitSpeedCombat = 1.8;
		//crouchProbabilityCombat = 0.4;
		crouchProbabilityCombat = 0.5;
		//crouchProbabilityEngage = 0.75;
		crouchProbabilityEngage = 0.85;
		//lyingLimitSpeedStealth = 2;
		minFireTime = 7;
	};
	class Civilian: CAManBase {
		__SKILL_CIV1; // default civilian
		__COST_LESS;
		sensitivity = 2;
		minFireTime = 10;
	};
	class SoldierWB: CAManBase {
		__SKILL_REG2; // default soldier
		__COST_REG;
	};
	class SoldierEB: CAManBase {
		__SKILL_REG2;
		__COST_REG;
	};
	class SoldierGB: CAManBase {
		__SKILL_REG2;
		__COST_REG;
	};

 // BLUFOR
 // basic

	class B_Soldier_base_F: SoldierWB {
		__COST_REG;
	};
	class B_Soldier_F: B_Soldier_base_F {
		__COST_REG;
	};
	class B_Soldier_02_f: B_Soldier_base_F {
		__COST_REG;
	};
	class B_Soldier_03_f: B_Soldier_base_F {
		__COST_REG;
	};
	class B_Soldier_lite_F: B_Soldier_base_F {
		__COST_REG;
	};
	class B_Soldier_GL_F: B_Soldier_base_F {
		__COST_REG;
	};
	class B_soldier_LAT_F: B_Soldier_base_F {
		__COST_REG;
		__CROUCH_MORE;
	};
	class B_medic_F: B_Soldier_base_F {
		__COST_REG;
	};
	class B_soldier_repair_F: B_Soldier_base_F {
		__COST_REG;
	};
	class B_soldier_exp_F: B_Soldier_base_F {
		__COST_REG;
	};
	class B_RangeMaster_F: B_Soldier_base_F {
		__COST_REG;
	};
	class B_Competitor_F: B_RangeMaster_F {
		__COST_REG;
	};
	class B_Soldier_A_F: B_Soldier_base_F {
		__COST_REG;
	};
	class B_soldier_AT_F: B_Soldier_base_F {
		__COST_REG;
		__CROUCH_MORE;
	};
	class B_soldier_AA_F: B_Soldier_base_F {
		__COST_REG;
		__CROUCH_MORE;
	};
	class B_engineer_F: B_Soldier_base_F {
		__COST_REG;
	};
	class B_crew_F: B_Soldier_base_F {
		__COST_REG;
	};
	class B_Soldier_support_base_F: B_Soldier_base_F {
		__COST_REG;
	};
	class B_soldier_AAR_F: B_Soldier_support_base_F {
		__COST_REG;
	};
	class B_soldier_AAT_F: B_Soldier_support_base_F {
		__COST_REG;
	};
	class B_soldier_AAA_F: B_soldier_AAT_F {
		__COST_REG;
	};
	class B_soldier_UAV_F: B_Soldier_base_F {
		__COST_REG;
	};
	class B_soldier_PG_F : B_Soldier_base_F {
		__COST_REG;
	};
	class B_Story_Protagonist_F : B_Soldier_base_F {
		__COST_REG;
	};
	class B_Story_Engineer_F : B_Soldier_base_F {
		__COST_REG;
	};
	class B_Story_Tank_Commander_F : B_Soldier_base_F {
		__COST_REG;
	};
	class B_support_MG_F : B_Soldier_support_base_F {
		__COST_REG;
	};
	class B_support_GMG_F : B_Soldier_support_base_F {
		__COST_REG;
	};
	class B_support_Mort_F : B_Soldier_support_base_F {
		__COST_REG;
	};
	class B_support_AMG_F : B_Soldier_support_base_F {
		__COST_REG;
	};
	class B_support_AMort_F : B_Soldier_support_base_F {
		__COST_REG;
	};
	class B_CTRG_soldier_GL_LAT_F : B_Soldier_base_F {
		__COST_REG;
	};
	class B_CTRG_soldier_engineer_exp_F : B_Soldier_base_F {
		__COST_REG;
	};
	class B_CTRG_soldier_M_medic_F : B_Soldier_base_F {
		__COST_REG;
	};
	class B_CTRG_soldier_AR_A_F : B_Soldier_base_F {
		__COST_REG;
	};

// ar
	class B_soldier_AR_F: B_Soldier_base_F {
		__COST_REG;
		__CROUCH_MORE;
	};

// lead
	class B_Soldier_SL_F: B_Soldier_base_F {
		__SKILL_REG1;
		__COST_REG;
	};
	class B_Soldier_TL_F: B_Soldier_base_F {
		__SKILL_REG1;
		__COST_REG;
	};

// dm
	class B_soldier_M_F: B_Soldier_base_F {
		__SKILL_REG1;
		__COST_REG;
	};

// pilot
	class B_Helipilot_F: B_Soldier_base_F {
		__SKILL_PIL1;
		__COST_REG;
	};
	class B_Pilot_F : B_helipilot_F {
		__COST_REG;
	};
	class B_helicrew_F : B_helipilot_F {
		__COST_REG;
	};
	class B_Story_Pilot_F : B_Soldier_base_F {
		__SKILL_PIL1;
		__COST_REG;
	};

// diver
	class B_Soldier_diver_base_F: B_Soldier_base_F {
		__SKILL_SOF2;
		__COST_REG;
		minFireTime = 5;
	};
	class B_diver_F: B_Soldier_diver_base_F {
		__COST_REG;
	};
	class B_diver_TL_F: B_Soldier_diver_base_F {
		__COST_REG;
	};
	class B_diver_exp_F: B_Soldier_diver_base_F {
		__COST_REG;
	};

// sniper
	class B_Soldier_sniper_base_F: B_Soldier_base_F {
		__SKILL_SNP1;
		__COST_SPECIAL;
		__CROUCH_MORE;
		sensitivity = 4;
		minFireTime = 5;
	};
	class B_spotter_F: B_Soldier_sniper_base_F {
		__SKILL_SOF2;
		__COST_SPECIAL;
		sensitivity = 4;
	};
	class B_sniper_F: B_Soldier_sniper_base_F {
		__COST_SPECIAL;
		sensitivity = 4;
	};

// officer
	class B_officer_F: B_Soldier_base_F {
		__COST_SPECIAL;
	};
	class B_Story_Colonel_F : B_Soldier_base_F {
		__COST_SPECIAL;
	};

// sof
	class B_Soldier_recon_base: B_Soldier_base_F {
		__SKILL_SOF2;
		__COST_SPECIAL;
		minFireTime = 5;
	};
	class B_recon_F: B_Soldier_recon_base {
		__COST_SPECIAL;
	};
	class B_recon_LAT_F: B_Soldier_recon_base {
		__COST_SPECIAL;
		__CROUCH_MORE;
	};
	class B_recon_exp_F: B_Soldier_recon_base {
		__COST_SPECIAL;
	};
	class B_recon_medic_F: B_Soldier_recon_base {
		__COST_SPECIAL;
	};
	class B_recon_TL_F: B_Soldier_recon_base {
		__COST_SPECIAL;
	};
	class B_recon_M_F: B_Soldier_recon_base {
		__COST_SPECIAL;
	};
	class B_recon_JTAC_F: B_Soldier_recon_base {
		__COST_SPECIAL;
	};
	class B_Story_SF_Captain_F : B_Soldier_base_F {
		__SKILL_SOF1;
		__COST_SPECIAL;
		minFireTime = 5;
	};

 // OPFOR

 // basic

	class O_Soldier_base_F: SoldierEB {
		__COST_REG;
	};
	class O_Soldier_F: O_Soldier_base_F {
		__COST_REG;
	};
	class O_Soldier_lite_F: O_Soldier_base_F {
		__COST_REG;
	};
	class O_Soldier_GL_F: O_Soldier_base_F {
		__COST_REG;
	};
	class O_Soldier_LAT_F: O_Soldier_base_F {
		__COST_REG;
		__CROUCH_MORE;
	};
	class O_medic_F: O_Soldier_base_F {
		__COST_REG;
	};
	class O_soldier_repair_F: O_Soldier_base_F {
		__COST_REG;
	};
	class O_soldier_exp_F: O_Soldier_base_F {
		__COST_REG;
	};
	class O_Soldier_A_F: O_Soldier_base_F {
		__COST_REG;
	};
	class O_Soldier_AT_F: O_Soldier_base_F {
		__COST_REG;
		__CROUCH_MORE;
	};
	class O_Soldier_AA_F: O_Soldier_base_F {
		__COST_REG;
		__CROUCH_MORE;
	};
	class O_engineer_F: O_Soldier_base_F {
		__COST_REG;
	};
	class O_crew_F: O_Soldier_base_F {
		__COST_REG;
	};
	class O_Soldier_support_base_F: O_Soldier_base_F {
		__COST_REG;
	};
	class O_Soldier_AAR_F: O_Soldier_support_base_F {
		__COST_REG;
	};
	class O_Soldier_AAT_F: O_Soldier_support_base_F {
		__COST_REG;
	};
	class O_Soldier_AAA_F: O_Soldier_AAT_F {
		__COST_REG;
	};
	class O_soldier_UAV_F: O_Soldier_base_F {
		__COST_REG;
	};
	class O_soldier_PG_F : O_Soldier_base_F {
		__COST_REG;
		__CROUCH_MORE;
	};
	class O_Story_CEO_F : O_Soldier_base_F {
		__COST_REG;
	};
	class O_support_AMG_F : O_Soldier_support_base_F {
		__COST_REG;
	};
	class O_support_AMort_F : O_Soldier_support_base_F {
		__COST_REG;
	};
	class O_support_MG_F : O_Soldier_support_base_F {
		__COST_REG;
	};
	class O_support_GMG_F : O_Soldier_support_base_F {
		__COST_REG;
	};
	class O_support_Mort_F : O_Soldier_support_base_F {
		__COST_REG;
	};
	class O_Soldier_Urban_base : O_Soldier_base_F {
		__COST_REG;
	};
	class O_soldierU_F : O_Soldier_Urban_base {
		__COST_REG;
	};
	class O_soldierU_AAR_F : O_Soldier_Urban_base {
		__COST_REG;
	};
	class O_soldierU_LAT_F : O_Soldier_Urban_base {
		__COST_REG;
		__CROUCH_MORE;
	};
	class O_soldierU_AT_F : O_Soldier_Urban_base {
		__COST_REG;
		__CROUCH_MORE;
	};
	class O_soldierU_AAT_F : O_Soldier_Urban_base {
		__COST_REG;
	};
	class O_soldierU_AA_F : O_Soldier_Urban_base {
		__COST_REG;
		__CROUCH_MORE;
	};
	class O_soldierU_AAA_F : O_Soldier_Urban_base {
		__COST_REG;
	};
	class O_soldierU_medic_F : O_Soldier_Urban_base {
		__COST_REG;
	};
	class O_soldierU_repair_F : O_Soldier_Urban_base {
		__COST_REG;
	};
	class O_soldierU_exp_F : O_Soldier_Urban_base {
		__COST_REG;
	};
	class O_engineer_U_F : O_Soldier_Urban_base {
		__COST_REG;
	};
	class O_soldierU_A_F : O_Soldier_Urban_base {
		__COST_REG;
	};
	class O_SoldierU_GL_F : O_Soldier_Urban_base {
		__COST_REG;
	};

// ar
	class O_Soldier_AR_F: O_Soldier_base_F {
		__COST_REG;
		__CROUCH_MORE;
	};
	class O_soldierU_AR_F : O_Soldier_Urban_base {
		__COST_REG;
		__CROUCH_MORE;
	};

// lead
	class O_Soldier_SL_F: O_Soldier_base_F {
		__SKILL_REG1;
		__COST_REG;
	};
	class O_Soldier_TL_F: O_Soldier_base_F {
		__SKILL_REG1;
		__COST_REG;
	};
	class O_soldierU_TL_F : O_Soldier_Urban_base {
		__SKILL_REG1;
		__COST_REG;
	};
	class O_SoldierU_SL_F : O_Soldier_Urban_base {
		__SKILL_REG1;
		__COST_REG;
	};

// dm
	class O_soldier_M_F: O_Soldier_base_F {
		__SKILL_REG1;
		__COST_REG;
	};
	class O_soldierU_M_F : O_Soldier_Urban_base {
		__SKILL_REG1;
		__COST_REG;
	};

// pilot
	class O_helipilot_F: O_Soldier_base_F {
		__SKILL_PIL1;
		__COST_REG;
	};
	class O_Pilot_F : O_helipilot_F {
		__COST_REG;
	};
	class O_helicrew_F : O_helipilot_F {
		__COST_REG;
	};

// diver
	class O_Soldier_diver_base_F: O_Soldier_base_F {
		__SKILL_SOF2;
		__COST_REG;
		minFireTime = 5;
	};
	class O_diver_F: O_Soldier_diver_base_F {
		__COST_REG;
	};
	class O_diver_TL_F: O_Soldier_diver_base_F {
		__COST_REG;
	};
	class O_diver_exp_F: O_Soldier_diver_base_F {
		__COST_REG;
	};

// sniper
	class O_Soldier_sniper_base_F: O_Soldier_base_F {
		__SKILL_SNP1;
		__COST_SPECIAL;
		__CROUCH_MORE;
		sensitivity = 4;
		minFireTime = 5;
	};
	class O_spotter_F: O_Soldier_sniper_base_F {
		__SKILL_SOF2;
		__COST_SPECIAL;
		sensitivity = 4;
	};
	class O_sniper_F: O_Soldier_sniper_base_F {
		__COST_SPECIAL;
		sensitivity = 4;
	};

// officer
	class O_officer_F: O_Soldier_base_F {
		__COST_SPECIAL;
	};
	class O_Story_Colonel_F : O_Soldier_base_F {
		__COST_SPECIAL;
	};

// sof
	class O_Soldier_recon_base: O_Soldier_base_F {
		__SKILL_SOF2;
		__COST_SPECIAL;
		minFireTime = 5;
	};
	class O_recon_F: O_Soldier_recon_base {
		__COST_SPECIAL;
	};
	class O_recon_M_F: O_Soldier_recon_base {
		__COST_SPECIAL;
	};
	class O_recon_LAT_F: O_Soldier_recon_base {
		__COST_SPECIAL;
		__CROUCH_MORE;
	};
	class O_recon_medic_F: O_Soldier_recon_base {
		__COST_SPECIAL;
	};
	class O_recon_exp_F: O_Soldier_recon_base {
		__COST_SPECIAL;
	};
	class O_recon_JTAC_F: O_Soldier_recon_base {
		__COST_SPECIAL;
	};
	class O_recon_TL_F: O_Soldier_recon_base {
		__COST_SPECIAL;
	};

 // GREENFOR
 // basic

	class I_Soldier_base_F: SoldierGB {
		__COST_REG;
		minFireTime = 7;
	};
	class I_Soldier_02_F: I_Soldier_base_F {
		__COST_REG;
	};
	class I_soldier_F: I_Soldier_base_F {
		__COST_REG;
	};
	class I_Soldier_lite_F: I_Soldier_base_F {
		__COST_REG;
	};
	class I_Soldier_A_F: I_Soldier_base_F {
		__COST_REG;
	};
	class I_Soldier_GL_F: I_Soldier_base_F {
		__COST_REG;
	};
	class I_Soldier_LAT_F: I_Soldier_base_F {
		__COST_REG;
		__CROUCH_MORE;
	};
	class I_Soldier_AT_F: I_Soldier_base_F {
		__COST_REG;
		__CROUCH_MORE;
	};
	class I_Soldier_AA_F: I_Soldier_base_F {
		__COST_REG;
		__CROUCH_MORE;
	};
	class I_medic_F: I_Soldier_base_F {
		__COST_REG;
	};
	class I_Soldier_repair_F: I_Soldier_base_F {
		__COST_REG;
	};
	class I_Soldier_exp_F: I_Soldier_base_F {
		__COST_REG;
	};
	class I_engineer_F: I_Soldier_base_F {
		__COST_REG;
	};
	class I_crew_F: I_Soldier_base_F {
		__COST_REG;
	};
	class I_Soldier_support_base_F: I_Soldier_base_F {
		__COST_REG;
	};
	class I_Soldier_AAR_F: I_Soldier_support_base_F {
		__COST_REG;
	};
	class I_Soldier_AAT_F: I_Soldier_support_base_F {
		__COST_REG;
	};
	class I_Soldier_AAA_F: I_Soldier_AAT_F {
		__COST_REG;
	};
	class I_soldier_UAV_F: I_Soldier_base_F {
		__COST_REG;
	};
	class I_support_MG_F : I_Soldier_support_base_F {
		__COST_REG;
	};
	class I_support_GMG_F : I_Soldier_support_base_F {
		__COST_REG;
	};
	class I_support_Mort_F : I_Soldier_support_base_F {
		__COST_REG;
	};
	class I_support_AMG_F : I_Soldier_support_base_F {
		__COST_REG;
	};
	class I_support_AMort_F : I_Soldier_support_base_F {
		__COST_REG;
	};

// ar
	class I_Soldier_AR_F: I_Soldier_base_F {
		__COST_REG;
		__CROUCH_MORE;
	};

// lead
	class I_Soldier_SL_F: I_Soldier_base_F {
		__SKILL_REG1;
		__COST_REG;
	};
	class I_Soldier_TL_F: I_Soldier_base_F {
		__SKILL_REG1;
		__COST_REG;
	};

// dm
	class I_Soldier_M_F: I_Soldier_base_F {
		__SKILL_REG1;
		__COST_REG;
	};

// pilot
	class I_helipilot_F: I_Soldier_base_F {
		__SKILL_PIL1;
		__COST_REG;
	};
	class I_pilot_F : I_helipilot_F {
		__SKILL_PIL1;
		__COST_REG;
	};
	class I_helicrew_F: I_helipilot_F {
		__COST_REG;
	};

// officer
	class I_officer_F: I_Soldier_base_F {
		__COST_SPECIAL;
	};
	class I_Story_Colonel_F : I_officer_F {
		__COST_SPECIAL;
	};

// sniper
	class I_Soldier_sniper_base_F: I_Soldier_base_F {
		__SKILL_SNP1;
		__COST_SPECIAL;
		__CROUCH_MORE;
		sensitivity = 4;
		minFireTime = 5;
	};
	class I_Spotter_F: I_Soldier_sniper_base_F {
		__COST_SPECIAL;
		sensitivity = 4;
	};
	class I_Sniper_F: I_Soldier_sniper_base_F {
		__COST_SPECIAL;
		sensitivity = 4;
	};

// diver
	class I_Soldier_diver_base_F: I_Soldier_base_F {
		__SKILL_SOF2;
		__COST_REG;
		minFireTime = 5;
	};
	class I_diver_F: I_Soldier_diver_base_F {
		__COST_REG;
	};
	class I_diver_exp_F: I_Soldier_diver_base_F {
		__COST_REG;
	};
	class I_diver_TL_F: I_Soldier_diver_base_F {
		__COST_REG;
	};

// CIV

	class Civilian_F : Civilian {};
	class C_man_1 : Civilian_F {};

// pilot
	class C_man_pilot_F : C_man_1 {
		__SKILL_PIL2;
	};

// GUERRILLA
// basic

	class I_G_Soldier_base_F : SoldierGB {
		__SKILL_INS2;
		__COST_LESS;
	};
	class I_G_Soldier_F : I_G_Soldier_base_F {
		__COST_LESS;
	};
	class I_G_Soldier_lite_F : I_G_Soldier_base_F {
		__COST_LESS;
	};
	class I_G_medic_F : I_G_Soldier_base_F {
		__COST_LESS;
	};
	class I_G_engineer_F : I_G_Soldier_base_F {
		__COST_LESS;
	};
	class I_G_Soldier_exp_F : I_G_Soldier_base_F {
		__COST_LESS;
	};
	class I_G_Soldier_GL_F : I_G_Soldier_base_F {
		__COST_LESS;
	};
	class I_G_Soldier_LAT_F : I_G_Soldier_base_F {
		__COST_LESS;
		__CROUCH_MORE;
	};
	class I_G_Soldier_A_F : I_G_Soldier_base_F {
		__COST_LESS;
	};
	
	class B_G_Soldier_F : I_G_Soldier_F {};

// lead
	class I_G_Soldier_SL_F : I_G_Soldier_base_F {
		__SKILL_INS1;
		__COST_LESS;
	};
	class I_G_Soldier_TL_F : I_G_Soldier_base_F {
		__SKILL_INS1;
		__COST_LESS;
	};
	class I_G_Story_Protagonist_F : B_G_Soldier_F {
		__SKILL_INS1;
		__COST_LESS;
	};

// ar
	class I_G_Soldier_AR_F : I_G_Soldier_base_F {
		__COST_LESS;
		__CROUCH_MORE;
	};

// dm
	class I_G_Soldier_M_F : I_G_Soldier_base_F {
		__SKILL_INS1;
		__COST_LESS;
	};

// officer
	class I_G_officer_F : I_G_Soldier_base_F {
		__SKILL_INS1;
		__COST_SPECIAL;
	};

// sof
	class I_G_Story_SF_Captain_F : B_G_Soldier_F {
		__SKILL_SOF1;
		__COST_SPECIAL;
		minFireTime = 5;
	};

};
