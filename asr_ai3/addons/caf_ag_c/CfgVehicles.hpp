#define __PREF_PRIMARY primaryAmmoCoef = 0.2; secondaryAmmoCoef = 0.05;	handgunAmmoCoef = 0.1
#define __PREF_TUBE secondaryAmmoCoef = 0.5

class CfgVehicles {
	class Man;

	class O_Soldier_F: Man {
		class EventHandlers;
	};

	class CAF_AG_AFR_P_BASE : O_Soldier_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		class EventHandlers: EventHandlers {
			init = "(_this select 0) execVM ""\caf_ag_factions\africa\pirates\Random.sqf""; _this call SLX_XEH_EH_Init";
		};
	};
	class CAF_AG_AFR_P_SVD : CAF_AG_AFR_P_BASE {
		ASR_AI_SKILL_INS1;
		__PREF_PRIMARY;
	};
	class CAF_AG_AFR_P_RPG : CAF_AG_AFR_P_BASE {
		__PREF_TUBE;
	};

	class CAF_AG_EEUR_R_BASE : O_Soldier_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		class EventHandlers: EventHandlers {
			init = "(_this select 0) execVM ""\caf_ag_factions\easteurope\rebels\Random.sqf""; _this call SLX_XEH_EH_Init";
		};
	};
	class CAF_AG_EEUR_R_SVD : CAF_AG_EEUR_R_BASE {
		ASR_AI_SKILL_INS1;
		__PREF_PRIMARY;
	};
	class CAF_AG_EEUR_R_RPG : CAF_AG_EEUR_R_BASE {
		__PREF_TUBE;
	};

	class CAF_AG_ME_T_BASE : O_Soldier_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_COST_LESS;
		class EventHandlers: EventHandlers {
			init = "(_this select 0) execVM ""\caf_ag_factions\middleeast\tribal\Random.sqf""; _this call SLX_XEH_EH_Init";
		};
	};
	class CAF_AG_ME_T_SVD : CAF_AG_ME_T_BASE {
		ASR_AI_SKILL_INS1;
		__PREF_PRIMARY;
	};
	class CAF_AG_ME_T_RPG : CAF_AG_ME_T_BASE {
		__PREF_TUBE;
	};
};
