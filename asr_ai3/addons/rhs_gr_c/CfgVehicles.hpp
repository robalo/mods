class CfgVehicles {

	#include "bags.hpp"

	class SoldierGB;
	class SoldierWB;

//CDF

    class rhsgref_cdf_ngd_base : SoldierGB {
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_ngd_rifleman;

    class rhsgref_cdf_ngd_rifleman_rpg75 : rhsgref_cdf_ngd_base {
        //displayName = "Rifleman (RPG-75)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_ngd_grenadier : rhsgref_cdf_ngd_rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsgref_cdf_ngd_machinegunner : rhsgref_cdf_ngd_rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsgref_cdf_ngd_officer : rhsgref_cdf_ngd_rifleman {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_ngd_squadleader : rhsgref_cdf_ngd_rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_ngd_grenadier_rpg : rhsgref_cdf_ngd_rifleman {
        //displayName = "AT Specialist";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_ngd_engineer : rhsgref_cdf_ngd_rifleman {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_ngd_crew : rhsgref_cdf_ngd_rifleman {
        ASR_AI_CAMO_BASE;
    };

    class rhsgref_cdf_reg_base : SoldierGB {
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_reg_rifleman;
    class rhsgref_cdf_reg_rifleman_rpg75 : rhsgref_cdf_reg_base {
        //displayName = "Rifleman (RPG-75)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_reg_grenadier : rhsgref_cdf_reg_rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsgref_cdf_reg_machinegunner : rhsgref_cdf_reg_rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsgref_cdf_reg_marksman : rhsgref_cdf_reg_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsgref_cdf_reg_general : rhsgref_cdf_reg_rifleman {
        //displayName = "General";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_reg_officer : rhsgref_cdf_reg_rifleman {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_reg_squadleader : rhsgref_cdf_reg_rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_reg_grenadier_rpg : rhsgref_cdf_reg_rifleman {
        //displayName = "AT Specialist";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_reg_specialist_aa : rhsgref_cdf_reg_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_reg_engineer : rhsgref_cdf_reg_rifleman {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_reg_crew : rhsgref_cdf_reg_rifleman {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_reg_crew_commander : rhsgref_cdf_reg_crew {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_air_pilot : rhsgref_cdf_reg_crew {
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
    };

    class rhsgref_cdf_para_base : rhsgref_cdf_reg_base {
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_para_rifleman;
    class rhsgref_cdf_para_grenadier : rhsgref_cdf_para_rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsgref_cdf_para_machinegunner : rhsgref_cdf_para_rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsgref_cdf_para_marksman : rhsgref_cdf_para_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsgref_cdf_para_officer : rhsgref_cdf_para_rifleman {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_para_squadleader : rhsgref_cdf_para_rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_para_grenadier_rpg : rhsgref_cdf_para_rifleman {
        //displayName = "AT Specialist";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_para_specialist_aa : rhsgref_cdf_para_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_para_engineer : rhsgref_cdf_para_rifleman {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_para_crew : rhsgref_cdf_para_rifleman {
        ASR_AI_CAMO_BASE;
    };

    class rhsgref_nat_base : SoldierGB {
		ASR_AI_SKILL_INS2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_nat_rifleman;

    class rhsgref_nat_warlord : rhsgref_nat_base {
        //displayName = "Warlord";
		ASR_AI_SKILL_INS1;
    };
    class rhsgref_nat_commander : rhsgref_nat_base {
        //displayName = "Commander";
		ASR_AI_SKILL_INS1;
    };
    class rhsgref_nat_grenadier_rpg : rhsgref_nat_rifleman {
        //displayName = "AT Specialist";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_nat_specialist_aa : rhsgref_nat_base {
        //displayName = "AA Specialist";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_nat_scout : rhsgref_nat_base {
		ASR_AI_SKILL_INS1;
    };
    class rhsgref_nat_saboteur : rhsgref_nat_base {
        //displayName = "Saboteur";
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_nat_crew : rhsgref_nat_base {
        ASR_AI_CAMO_BASE;
    };

    class rhsgref_nat_pmil_rifleman;

    class rhsgref_nat_pmil_commander : rhsgref_nat_pmil_rifleman {
        //displayName = "Commander";
		ASR_AI_SKILL_INS1;
    };
    class rhsgref_nat_pmil_grenadier_rpg : rhsgref_nat_pmil_rifleman {
        //displayName = "AT Specialist";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_nat_pmil_specialist_aa : rhsgref_nat_pmil_rifleman {
        //displayName = "AA Specialist";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_nat_pmil_scout : rhsgref_nat_pmil_rifleman {
		ASR_AI_SKILL_INS1;
    };
    class rhsgref_nat_pmil_saboteur : rhsgref_nat_pmil_rifleman {
        //displayName = "Saboteur";
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_nat_pmil_crew : rhsgref_nat_pmil_rifleman {
        ASR_AI_CAMO_BASE;
    };

//Chedaki

    class rhsgref_ins_base : SoldierGB {
		ASR_AI_SKILL_INS2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };

    class rhsgref_ins_uniform_specter;
    class rhsgref_ins_rifleman_RPG26 : rhsgref_ins_uniform_specter {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_ins_squadleader : rhsgref_ins_uniform_specter {
		ASR_AI_SKILL_INS1;
    };
    class rhsgref_ins_reed;
    class rhsgref_ins_commander : rhsgref_ins_reed {
        //displayName = "Commander";
		ASR_AI_SKILL_INS1;
    };
    class rhsgref_ins_uniform_izlom;
    class rhsgref_ins_grenadier_rpg : rhsgref_ins_uniform_izlom {
        //displayName = "AT Specialist";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_ins_specialist_aa : rhsgref_ins_reed {
        //displayName = "AA Specialist";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_ins_uniform_gorka_g;
    class rhsgref_ins_engineer : rhsgref_ins_uniform_gorka_g {
        //displayName = "Sapper";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_ins_saboteur : rhsgref_ins_uniform_specter {
        //displayName = "Saboteur";
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_ins_sniper : rhsgref_ins_uniform_izlom {
        //displayName = "Sniper";
		ASR_AI_SKILL_SOF2;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsgref_ins_uniform_gorka_y;
    class rhsgref_ins_spotter : rhsgref_ins_uniform_gorka_y {
		ASR_AI_SKILL_SOF2;
    };
    class rhsgref_ins_crew : rhsgref_ins_uniform_specter {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_ins_pilot : rhsgref_ins_uniform_specter {
		ASR_AI_SKILL_PIL2;
        ASR_AI_CAMO_BASE;
    };

//HI DF

    class rhsgref_hidf_base : SoldierWB {
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_hidf_rifleman;
    class rhsgref_hidf_rifleman_m72 : rhsgref_hidf_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_hidf_marksman : rhsgref_hidf_rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsgref_hidf_squadleader : rhsgref_hidf_rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_hidf_teamleader : rhsgref_hidf_rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_hidf_sniper : rhsgref_hidf_marksman {
		ASR_AI_SKILL_SOF2;
		ASR_AI_AMMOCOEF_SNIPER;
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_hidf_crewman : rhsgref_hidf_base {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_hidf_helipilot : rhsgref_hidf_base {
        //displayName = "Helicopter Pilot";
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
    };
};
