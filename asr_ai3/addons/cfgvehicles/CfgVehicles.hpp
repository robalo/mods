class CfgVehicles {

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
	class CAManBase: Man {
		ASR_AI_SKILL_INS2; // default insurgent
		audible = 0.025; //0.05
		crouchProbabilityCombat = 0.80; //0.4
		crouchProbabilityEngage = 0.90; //0.75
		ASR_AI_MINFIRETIME;
		spotableDarkNightLightsOff = 0.0015;  //0.003
		spotableNightLightsOff = 0.0175;      //0.035
	};

// CIV

	class Civilian: CAManBase {
		ASR_AI_SKILL_CIV1; // default civilian
		accuracy = 0.2;
        ASR_AI_AMMOCOEF_CIVILIAN;
	};
	class C_man_1;

// pilot
	class C_man_pilot_F : C_man_1 {
		ASR_AI_SKILL_PIL2;
	};

// BASE

	class SoldierWB: CAManBase {
		fsmDanger = "x\asr_ai3\addons\main\danger.fsm";
		ASR_AI_SKILL_REG2; // default soldier
        ASR_AI_AMMOCOEF_STANDARD;
	};
	class SoldierEB: CAManBase {
		fsmDanger = "x\asr_ai3\addons\main\danger.fsm";
		ASR_AI_SKILL_REG2;
        ASR_AI_AMMOCOEF_STANDARD;
	};
	class SoldierGB: CAManBase {
		fsmDanger = "x\asr_ai3\addons\main\danger.fsm";
		ASR_AI_SKILL_REG2;
        ASR_AI_AMMOCOEF_STANDARD;
	};

 // BLUFOR
 // basic

	class B_Soldier_base_F: SoldierWB {
		ASR_AI_MINFIRETIME;
	};
	class B_Soldier_02_f;
	class B_Soldier_03_f;
	class B_Soldier_04_f;
	class B_Soldier_05_f;

// lead
	class B_Soldier_SL_F: B_Soldier_03_f {
		ASR_AI_SKILL_REG1;
	};
	class B_Soldier_TL_F: B_Soldier_03_f {
		ASR_AI_SKILL_REG1;
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

// sniper
	class B_Soldier_sniper_base_F: B_Soldier_base_F {
		ASR_AI_SKILL_SNP1;
        ASR_AI_AMMOCOEF_SNIPER;
	};
	class B_spotter_F: B_Soldier_sniper_base_F {
		ASR_AI_SKILL_SOF2;
        ASR_AI_AMMOCOEF_STANDARD;
	};


// sof
	class B_Soldier_recon_base: B_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
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

    class B_GEN_Soldier_base_F;
    class B_GEN_Commander_F : B_GEN_Soldier_base_F {
		ASR_AI_SKILL_REG1;
    };


// GUERRILLA

// basic

	class I_G_Soldier_base_F : SoldierGB {
		ASR_AI_SKILL_INS2;
		ASR_AI_MINFIRETIME;
	};

// lead
	class I_G_Soldier_SL_F : I_G_Soldier_base_F {
		ASR_AI_SKILL_INS1;
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
	};

// sof
	class I_G_Story_SF_Captain_F : B_G_Soldier_F {
		ASR_AI_SKILL_SOF1;
	};

// Syndikat

    class I_C_Soldier_base_F;

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
    class I_C_Soldier_Bandit_2_F : I_C_Soldier_base_F {
        ASR_AI_AMMOCOEF_AT;
    };
    class I_C_Soldier_Camo_F : I_C_Soldier_base_F {
		ASR_AI_SKILL_INS1;
    };
    class I_C_Pilot_F : I_C_Soldier_base_F {
        ASR_AI_SKILL_PIL2;
    };
    class I_C_Helipilot_F : I_C_Soldier_base_F {
        ASR_AI_SKILL_PIL2;
    };


 // GREENFOR
 // basic

	class I_Soldier_base_F: SoldierGB {
		ASR_AI_MINFIRETIME;
	};
	class I_Soldier_02_F;
	class I_Soldier_03_F;
	class I_Soldier_04_F;

// lead
	class I_Soldier_SL_F: I_Soldier_02_F {
		ASR_AI_SKILL_REG1;
	};
	class I_Soldier_TL_F: I_Soldier_base_F {
		ASR_AI_SKILL_REG1;
	};

// dm
	class I_Soldier_M_F: I_Soldier_base_F {
		ASR_AI_SKILL_REG1;
        ASR_AI_AMMOCOEF_SNIPER;
	};

// pilot
	class I_helipilot_F: I_Soldier_03_F {
		ASR_AI_SKILL_PIL1;
	};
	class I_pilot_F : I_Soldier_04_F {
		ASR_AI_SKILL_PIL1;
	};

// sniper
	class I_Soldier_sniper_base_F: I_Soldier_base_F {
		ASR_AI_SKILL_SNP1;
        ASR_AI_AMMOCOEF_SNIPER;
	};
	class I_Spotter_F: I_Soldier_sniper_base_F {
		ASR_AI_SKILL_SOF2;
        ASR_AI_AMMOCOEF_STANDARD;
	};

// diver
	class I_Soldier_diver_base_F: I_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
        ASR_AI_AMMOCOEF_DIVER;
	};


 // OPFOR

 // basic

	class O_Soldier_base_F: SoldierEB {
		ASR_AI_MINFIRETIME;
	};
	class O_Soldier_02_F;
    class O_Soldier_Urban_base;

// lead
	class O_Soldier_SL_F: O_Soldier_base_F {
		ASR_AI_SKILL_REG1;
	};
	class O_Soldier_TL_F: O_Soldier_base_F {
		ASR_AI_SKILL_REG1;
	};
	class O_soldierU_TL_F : O_Soldier_Urban_base {
		ASR_AI_SKILL_REG1;
	};
	class O_SoldierU_SL_F : O_Soldier_Urban_base {
		ASR_AI_SKILL_REG1;
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
	};

// diver
	class O_Soldier_diver_base_F: O_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
        ASR_AI_AMMOCOEF_DIVER;
	};

// sniper
	class O_Soldier_sniper_base_F: O_Soldier_base_F {
		ASR_AI_SKILL_SNP1;
        ASR_AI_AMMOCOEF_SNIPER;
	};
	class O_spotter_F: O_Soldier_sniper_base_F {
		ASR_AI_SKILL_SOF2;
        ASR_AI_AMMOCOEF_STANDARD;
	};

// sof
	class O_Soldier_recon_base: O_Soldier_base_F {
		ASR_AI_SKILL_SOF2;
	};
	class O_recon_M_F: O_Soldier_recon_base {
        ASR_AI_AMMOCOEF_SNIPER;
	};

    class O_V_Soldier_Viper_F : O_Soldier_base_F {
		ASR_AI_SKILL_SOF1;
    };
    class O_V_Soldier_base_F : O_Soldier_base_F {
		ASR_AI_SKILL_SOF1;
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

};
