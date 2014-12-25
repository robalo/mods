#define __PREF_PRIMARY primaryAmmoCoef = 0.2; secondaryAmmoCoef = 0.05;	handgunAmmoCoef = 0.1
#define __PREF_TUBE secondaryAmmoCoef = 0.5

class CfgVehicles {

	class O_Soldier_F;

	class CAF_AG_AFR_P_BASE : O_Soldier_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
	};
	class CAF_AG_AFR_P_RPK74 : CAF_AG_AFR_P_BASE {
		ASR_AI_CROUCH_MORE;
	};
	class CAF_AG_AFR_P_PKM : CAF_AG_AFR_P_BASE {
		ASR_AI_CROUCH_MORE;
	};
	class CAF_AG_AFR_P_SVD : CAF_AG_AFR_P_BASE {
		ASR_AI_SKILL_INS1;
		ASR_AI_CROUCH_MORE;
		__PREF_PRIMARY;
	};
	class CAF_AG_AFR_P_RPG : CAF_AG_AFR_P_BASE {
		ASR_AI_CROUCH_MORE;
		__PREF_TUBE;
	};


	class CAF_AG_EEUR_R_BASE : O_Soldier_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
	};
	class CAF_AG_EEUR_R_RPK74 : CAF_AG_EEUR_R_BASE {
		ASR_AI_CROUCH_MORE;
	};
	class CAF_AG_EEUR_R_PKM : CAF_AG_EEUR_R_BASE {
		ASR_AI_CROUCH_MORE;
	};
	class CAF_AG_EEUR_R_SVD : CAF_AG_EEUR_R_BASE {
		ASR_AI_SKILL_INS1;
		ASR_AI_CROUCH_MORE;
		__PREF_PRIMARY;
	};
	class CAF_AG_EEUR_R_RPG : CAF_AG_EEUR_R_BASE {
		ASR_AI_CROUCH_MORE;
		__PREF_TUBE;
	};


	class CAF_AG_ME_T_BASE : O_Soldier_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
	};
	class CAF_AG_ME_T_RPK74 : CAF_AG_ME_T_BASE {
		ASR_AI_CROUCH_MORE;
	};
	class CAF_AG_ME_T_PKM : CAF_AG_ME_T_BASE {
		ASR_AI_CROUCH_MORE;
	};
	class CAF_AG_ME_T_SVD : CAF_AG_ME_T_BASE {
		ASR_AI_SKILL_INS1;
		ASR_AI_CROUCH_MORE;
		__PREF_PRIMARY;
	};
	class CAF_AG_ME_T_RPG : CAF_AG_ME_T_BASE {
		ASR_AI_CROUCH_MORE;
		__PREF_TUBE;
	};
};
