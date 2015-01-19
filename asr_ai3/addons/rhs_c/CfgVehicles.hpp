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
	class rhs_msv_at : rhs_msv_rifleman {
		__PREF_TUBE;
	};
	class rhs_msv_LAT : rhs_msv_rifleman {
		__PREF_TUBE;
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
	class rhs_vdv_at : rhs_vdv_rifleman {
		__PREF_TUBE;
	};
	class rhs_vdv_LAT : rhs_vdv_rifleman {
		__PREF_TUBE;
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

//US

	class rhsusf_infantry_army_base : SoldierEB {
		ASR_AI_SKILL_REG2;
		ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
	};
	class rhsusf_army_ocp_riflemanat : rhsusf_infantry_army_base {
		__PREF_TUBE;
	};
	class rhsusf_army_ocp_grenadier : rhsusf_infantry_army_base {
		ASR_AI_COST_REG;
	};
	class rhsusf_army_ocp_squadleader : rhsusf_infantry_army_base {
		ASR_AI_COST_REG;
		ASR_AI_SKILL_REG1;
	};
	class rhsusf_army_ocp_rifleman;
	class rhsusf_army_ocp_teamleader : rhsusf_army_ocp_rifleman {
		ASR_AI_SKILL_REG1;
	};
	class rhsusf_army_ocp_aa : rhsusf_army_ocp_riflemanat {
		__PREF_TUBE;
	};
	class rhsusf_army_ocp_marksman : rhsusf_infantry_army_base {
		ASR_AI_COST_REG;
		ASR_AI_SKILL_REG1;
		__PREF_PRIMARY;
	};
	class rhsusf_army_ocp_helipilot : rhsusf_infantry_army_base {
		ASR_AI_SKILL_PIL1;
	};
	class rhsusf_army_ocp_sniper : rhsusf_army_ocp_marksman {
		ASR_AI_SKILL_SNP1;
		ASR_AI_COST_SPECIAL;
		sensitivity = 4;
		minFireTime = 5;
	};

};
