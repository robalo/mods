	class All {
		class SpeechVariants {
			class Default {
				speechSingular[] = {};
				speechPlural[] = {};
			};
		};
		textSingular = "";
		textPlural = "";
		nameSound = "";
    };

    class Man;

    class CAManBase : Man {
		ASR_AI_SKILL_INS2; // default insurgent
		audible = 0.025; //0.05
		crouchProbabilityCombat = 0.80; //0.4
		crouchProbabilityEngage = 0.90; //0.75
		ASR_AI_MINFIRETIME;
		spotableDarkNightLightsOff = 0.0015;  //0.003
		spotableNightLightsOff = 0.0175;      //0.035
        ASR_AI_CAMO_BASE;
    };

// CIV

    class Civilian : CAManBase {
		ASR_AI_SKILL_CIV1; // default civilian
		accuracy = 0.2;
        ASR_AI_AMMOCOEF_CIVILIAN;
        ASR_AI_CAMO_BASE;
    };
	class C_man_1;

// pilot

	class C_man_pilot_F : C_man_1 {
		ASR_AI_SKILL_PIL2;
	};

// BASE

	class SoldierWB: CAManBase {
		ASR_AI_SKILL_REG2; // default soldier
        ASR_AI_AMMOCOEF_STANDARD;
	};
	class SoldierEB: CAManBase {
		ASR_AI_SKILL_REG2;
        ASR_AI_AMMOCOEF_STANDARD;
	};
	class SoldierGB: CAManBase {
		ASR_AI_SKILL_REG2;
        ASR_AI_AMMOCOEF_STANDARD;
	};

 // BLUFOR

 // basic

    class B_Soldier_base_F : SoldierWB {
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
	class B_Soldier_02_f;
	class B_Soldier_03_f;
	class B_Soldier_04_f;
	class B_Soldier_05_f;

    class B_Soldier_lite_F : B_Soldier_03_f {
        ASR_AI_CAMO_BASE;
    };
    class B_medic_F : B_Soldier_02_f {
        ASR_AI_CAMO_BASE;
    };
    class B_soldier_repair_F : B_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class B_soldier_exp_F : B_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class B_Soldier_A_F : B_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class B_soldier_AT_F : B_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class B_soldier_AA_F : B_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class B_engineer_F : B_Soldier_03_f {
        ASR_AI_CAMO_BASE;
    };
    class B_crew_F : B_Soldier_03_f {
        ASR_AI_CAMO_BASE;
    };
    class B_officer_F : B_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class B_Soldier_support_base_F : B_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };

// lead

	class B_Soldier_SL_F: B_Soldier_03_f {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
	};
	class B_Soldier_TL_F: B_Soldier_03_f {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
	};

// dm

	class B_soldier_M_F: B_Soldier_base_F {
		ASR_AI_SKILL_REG1;
        ASR_AI_AMMOCOEF_SNIPER;
	};
	class B_Sharpshooter_F : B_Soldier_base_F {
		ASR_AI_SKILL_REG1;
        ASR_AI_AMMOCOEF_SNIPER;
	};

// pilot

	class B_Helipilot_F: B_Soldier_04_f {
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
	};
	class B_Pilot_F : B_Soldier_05_f {
		ASR_AI_SKILL_PIL1;
	};
	class B_Story_Pilot_F : B_Soldier_base_F {
		ASR_AI_SKILL_PIL1;
	};

// diver

	class B_Soldier_diver_base_F: B_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
        ASR_AI_AMMOCOEF_DIVER;
	};
    class B_diver_F : B_Soldier_diver_base_F {
        ASR_AI_CAMO_BASE;
    };
    class B_diver_TL_F : B_Soldier_diver_base_F {
        ASR_AI_CAMO_BASE;
    };
    class B_diver_exp_F : B_Soldier_diver_base_F {
        ASR_AI_CAMO_BASE;
    };

// sniper

	class B_Soldier_sniper_base_F: B_Soldier_base_F {
		ASR_AI_SKILL_SNP1;
        ASR_AI_AMMOCOEF_SNIPER;
	};
	class B_spotter_F: B_Soldier_sniper_base_F {
		ASR_AI_SKILL_SOF2;
        ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_CAMO_BASE;
	};
    class B_sniper_F : B_Soldier_sniper_base_F {
        ASR_AI_CAMO_BASE;
    };
    class B_ghillie_base_F : B_Soldier_sniper_base_F {
        ASR_AI_CAMO_BASE;
    };


// sof
	class B_Soldier_recon_base: B_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
        ASR_AI_CAMO_BASE;
	};
	class B_recon_M_F: B_Soldier_recon_base {
        ASR_AI_AMMOCOEF_SNIPER;
	};
	class B_Story_SF_Captain_F : B_Soldier_02_f {
		ASR_AI_SKILL_SOF1;
	};
	class B_CTRG_soldier_GL_LAT_F : B_Soldier_base_F {
		ASR_AI_SKILL_SOF1;
	};
	class B_CTRG_soldier_engineer_exp_F : B_Soldier_02_f {
		ASR_AI_SKILL_SOF1;
	};
	class B_CTRG_soldier_M_medic_F : B_Soldier_03_f {
		ASR_AI_SKILL_SOF1;
        ASR_AI_CAMO_BASE;
	};
	class B_CTRG_soldier_AR_A_F : B_Soldier_03_f {
		ASR_AI_SKILL_SOF1;
	};
	class B_CTRG_Sharphooter_F : B_Soldier_base_F {
		ASR_AI_SKILL_SOF1;
	};

	class B_G_Soldier_F;

    class B_CTRG_Soldier_base_F : B_Soldier_base_F {
		ASR_AI_SKILL_SOF1;
    };

// gendarme

    class B_Soldier_F;
    class B_GEN_Soldier_base_F : B_Soldier_F {
        ASR_AI_CAMO_BASE;
    };
    class B_GEN_Commander_F : B_GEN_Soldier_base_F {
		ASR_AI_SKILL_REG1;
    };


// GUERRILLA

// basic

	class I_G_Soldier_base_F : SoldierGB {
		ASR_AI_SKILL_INS2;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
	};
    class I_G_Soldier_lite_F : I_G_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class I_G_Soldier_exp_F : I_G_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };

// lead

	class I_G_Soldier_SL_F : I_G_Soldier_base_F {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
	};
	class I_G_Soldier_TL_F : I_G_Soldier_base_F {
		ASR_AI_SKILL_INS1;
	};
	class I_G_Story_Protagonist_F : B_G_Soldier_F {
		ASR_AI_SKILL_INS1;
	};


// dm
	class I_G_Soldier_M_F : I_G_Soldier_base_F {
		ASR_AI_SKILL_INS1;
        ASR_AI_AMMOCOEF_SNIPER;
	};
	class I_G_Sharpshooter_F : I_G_Soldier_base_F {
		ASR_AI_SKILL_INS1;
        ASR_AI_AMMOCOEF_SNIPER;
	};

// officer
	class I_G_officer_F : I_G_Soldier_base_F {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
	};

// sof
	class I_G_Story_SF_Captain_F : B_G_Soldier_F {
		ASR_AI_SKILL_SOF1;
	};

// Syndikat

    class I_C_Soldier_base_F : I_G_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };

    class I_C_Soldier_Para_1_F : I_C_Soldier_base_F {
		ASR_AI_SKILL_INS1;
    };
    class I_C_Soldier_Para_2_F : I_C_Soldier_base_F {
		ASR_AI_SKILL_INS1;
    };
    class I_C_Soldier_Para_3_F : I_C_Soldier_base_F {
		ASR_AI_SKILL_INS1;
    };
    class I_C_Soldier_Para_4_F : I_C_Soldier_base_F {
		ASR_AI_SKILL_INS1;
    };
    class I_C_Soldier_Para_5_F : I_C_Soldier_base_F {
		ASR_AI_SKILL_INS1;
        ASR_AI_AMMOCOEF_AT;
    };
    class I_C_Soldier_Para_6_F : I_C_Soldier_base_F {
		ASR_AI_SKILL_INS1;
    };
    class I_C_Soldier_Para_7_F : I_C_Soldier_base_F {
		ASR_AI_SKILL_INS1;
    };
    class I_C_Soldier_Para_8_F : I_C_Soldier_base_F {
		ASR_AI_SKILL_INS1;
    };
    class I_C_Soldier_Bandit_1_F : I_C_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Bandit_2_F : I_C_Soldier_base_F {
        ASR_AI_AMMOCOEF_AT;
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Bandit_3_F : I_C_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Bandit_4_F : I_C_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Bandit_5_F : I_C_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Bandit_6_F : I_C_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Bandit_7_F : I_C_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Bandit_8_F : I_C_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Camo_F : I_C_Soldier_base_F {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class I_C_Pilot_F : I_C_Soldier_base_F {
        ASR_AI_SKILL_PIL2;
        ASR_AI_CAMO_BASE;
    };
    class I_C_Helipilot_F : I_C_Soldier_base_F {
        ASR_AI_SKILL_PIL2;
        ASR_AI_CAMO_BASE;
    };


 // GREENFOR
 // basic

	class I_Soldier_base_F: SoldierGB {
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
	};
	class I_Soldier_02_F;
	class I_Soldier_03_F;
	class I_Soldier_04_F;                           

    class I_Soldier_lite_F : I_Soldier_02_F {
        ASR_AI_CAMO_BASE;
    };
    class I_Soldier_A_F : I_Soldier_02_F {
        ASR_AI_CAMO_BASE;
    };
    class I_medic_F : I_Soldier_02_F {
        ASR_AI_CAMO_BASE;
    };
    class I_Soldier_repair_F : I_Soldier_02_F {
        ASR_AI_CAMO_BASE;
    };
    class I_Soldier_exp_F : I_Soldier_02_F {
        ASR_AI_CAMO_BASE;
    };
    class I_engineer_F : I_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class I_crew_F : I_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class I_officer_F : I_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class I_Soldier_support_base_F : I_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };

// lead

	class I_Soldier_SL_F: I_Soldier_02_F {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
	};
	class I_Soldier_TL_F: I_Soldier_base_F {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
	};

// dm
	class I_Soldier_M_F: I_Soldier_base_F {
		ASR_AI_SKILL_REG1;
        ASR_AI_AMMOCOEF_SNIPER;
	};

// pilot
	class I_helipilot_F: I_Soldier_03_F {
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
	};
	class I_pilot_F : I_Soldier_04_F {
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
	};

// sniper
	class I_Soldier_sniper_base_F: I_Soldier_base_F {
		ASR_AI_SKILL_SNP1;
        ASR_AI_AMMOCOEF_SNIPER;
	};
	class I_Spotter_F: I_Soldier_sniper_base_F {
		ASR_AI_SKILL_SOF2;
        ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_CAMO_BASE;
	};
    class I_Sniper_F : I_Soldier_sniper_base_F {
        ASR_AI_CAMO_BASE;
    };
    class I_ghillie_base_F : I_Soldier_sniper_base_F {
        ASR_AI_CAMO_BASE;
    };

// diver

	class I_Soldier_diver_base_F: I_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
        ASR_AI_AMMOCOEF_DIVER;
	};
    class I_diver_F : I_Soldier_diver_base_F {
        ASR_AI_CAMO_BASE;
    };
    class I_diver_exp_F : I_Soldier_diver_base_F {
        ASR_AI_CAMO_BASE;
    };
    class I_diver_TL_F : I_Soldier_diver_base_F {
        ASR_AI_CAMO_BASE;
    };


 // OPFOR

 // basic

	class O_Soldier_base_F: SoldierEB {
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
	};
	class O_Soldier_02_F;
    class O_Soldier_Urban_base;

    class O_officer_F : O_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class O_Soldier_lite_F : O_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class O_medic_F : O_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class O_soldier_repair_F : O_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class O_soldier_exp_F : O_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class O_Soldier_A_F : O_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class O_Soldier_AT_F : O_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class O_Soldier_AA_F : O_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class O_engineer_F : O_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class O_crew_F : O_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class O_Soldier_support_base_F : O_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class O_soldierU_repair_F : O_Soldier_Urban_base {
        ASR_AI_CAMO_BASE;
    };
    class O_soldierU_exp_F : O_Soldier_Urban_base {
        ASR_AI_CAMO_BASE;
    };
    class O_engineer_U_F : O_Soldier_Urban_base {
        ASR_AI_CAMO_BASE;
    };
    class O_soldierU_A_F : O_Soldier_Urban_base {
        ASR_AI_CAMO_BASE;
    };

// lead

	class O_Soldier_SL_F: O_Soldier_base_F {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
	};
	class O_Soldier_TL_F: O_Soldier_base_F {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
	};
	class O_soldierU_TL_F : O_Soldier_Urban_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
	};
	class O_SoldierU_SL_F : O_Soldier_Urban_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
	};

// dm
	class O_soldier_M_F: O_Soldier_base_F {
		ASR_AI_SKILL_REG1;
        ASR_AI_AMMOCOEF_SNIPER;
	};
	class O_soldierU_M_F : O_Soldier_Urban_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_AMMOCOEF_SNIPER;
	};
	class O_Sharpshooter_F : O_Soldier_base_F {
		ASR_AI_SKILL_REG1;
        ASR_AI_AMMOCOEF_SNIPER;
	};
	class O_Urban_Sharpshooter_F : O_Soldier_Urban_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_AMMOCOEF_SNIPER;
	};

// pilot

	class O_helipilot_F: O_Soldier_02_F {
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
	};

// diver

	class O_Soldier_diver_base_F: O_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
        ASR_AI_AMMOCOEF_DIVER;
	};
    class O_diver_F : O_Soldier_diver_base_F {
        ASR_AI_CAMO_BASE;
    };
    class O_diver_TL_F : O_Soldier_diver_base_F {
        ASR_AI_CAMO_BASE;
    };
    class O_diver_exp_F : O_Soldier_diver_base_F {
        ASR_AI_CAMO_BASE;
    };

// sniper

	class O_Soldier_sniper_base_F: O_Soldier_base_F {
		ASR_AI_SKILL_SNP1;
        ASR_AI_AMMOCOEF_SNIPER;
	};
	class O_spotter_F: O_Soldier_sniper_base_F {
		ASR_AI_SKILL_SOF2;
        ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_CAMO_BASE;
    };
    class O_sniper_F : O_Soldier_sniper_base_F {
        ASR_AI_CAMO_BASE;
    };
    class O_ghillie_base_F : O_Soldier_sniper_base_F {
        ASR_AI_CAMO_BASE;
    };

// sof

	class O_Soldier_recon_base: O_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
        ASR_AI_CAMO_BASE;
	};
	class O_recon_M_F: O_Soldier_recon_base {
        ASR_AI_AMMOCOEF_SNIPER;
	};

    class O_V_Soldier_Viper_F : O_Soldier_base_F {
		ASR_AI_SKILL_SOF1;
    };
    class O_V_Soldier_base_F : O_Soldier_base_F {
		ASR_AI_SKILL_SOF1;
        ASR_AI_CAMO_BASE;
    };

// UAV

    class B_UAV_AI : B_Helipilot_F {
        ASR_AI_SKILL_UAV1;
    };
    class O_UAV_AI : O_helipilot_F {
        ASR_AI_SKILL_UAV1;
    };
    class I_UAV_AI : O_UAV_AI {
        ASR_AI_SKILL_UAV1;
    };
    class UAV_AI_base_F : CAManBase {
        ASR_AI_SKILL_UAV1;
    };

//tac-ops

    class O_A_soldier_base_F : O_officer_F {
		ASR_AI_SKILL_REG2;
        ASR_AI_CAMO_BASE;
    };
    class O_A_soldier_M_F : O_A_soldier_base_F {
		ASR_AI_SKILL_REG1;
        ASR_AI_AMMOCOEF_SNIPER;
    };
    class O_A_soldier_SL_F : O_A_soldier_base_F {
		ASR_AI_SKILL_REG1;
    };
    class O_A_soldier_TL_F : O_A_soldier_base_F {
		ASR_AI_SKILL_REG1;
    };

