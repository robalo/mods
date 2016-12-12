class CfgVehicles {

	class SoldierGB;

//CDF

    class rhsgref_cdf_ngd_base : SoldierGB {
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_COST_REG;
		ASR_AI_MINFIRETIME;
    };
    class rhsgref_cdf_ngd_rifleman : rhsgref_cdf_ngd_base {};

    class rhsgref_cdf_ngd_grenadier : rhsgref_cdf_ngd_rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsgref_cdf_ngd_machinegunner : rhsgref_cdf_ngd_rifleman {
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsgref_cdf_ngd_officer : rhsgref_cdf_ngd_rifleman {
		ASR_AI_COST_SPECIAL;
    };
    class rhsgref_cdf_ngd_squadleader : rhsgref_cdf_ngd_rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_COST_REG;
    };
    class rhsgref_cdf_ngd_grenadier_rpg : rhsgref_cdf_ngd_rifleman {
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_ngd_engineer : rhsgref_cdf_ngd_rifleman {
        ASR_AI_COST_REG;
    };
    class rhsgref_cdf_ngd_crew : rhsgref_cdf_ngd_rifleman {
        ASR_AI_COST_REG;
    };


    class rhsgref_cdf_reg_base : SoldierGB {
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_COST_REG;
		ASR_AI_MINFIRETIME;
    };
    class rhsgref_cdf_reg_rifleman : rhsgref_cdf_reg_base {};

    class rhsgref_cdf_reg_grenadier : rhsgref_cdf_reg_rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsgref_cdf_reg_machinegunner : rhsgref_cdf_reg_rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_COST_REG;
    };
    class rhsgref_cdf_reg_marksman : rhsgref_cdf_reg_rifleman {
        ASR_AI_COST_REG;
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsgref_cdf_reg_general : rhsgref_cdf_reg_rifleman {
		ASR_AI_COST_SPECIAL;
    };
    class rhsgref_cdf_reg_officer : rhsgref_cdf_reg_rifleman {
		ASR_AI_COST_SPECIAL;
    };
    class rhsgref_cdf_reg_squadleader : rhsgref_cdf_reg_rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_COST_REG;
    };
    class rhsgref_cdf_reg_grenadier_rpg : rhsgref_cdf_reg_rifleman {
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_reg_specialist_aa : rhsgref_cdf_reg_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_reg_engineer : rhsgref_cdf_reg_rifleman {
        ASR_AI_COST_REG;
    };
    class rhsgref_cdf_reg_crew : rhsgref_cdf_reg_rifleman {
        ASR_AI_COST_REG;
    };
    class rhsgref_cdf_air_pilot : rhsgref_cdf_reg_crew {
		ASR_AI_SKILL_PIL1;
        ASR_AI_COST_REG;
    };

    class rhsgref_cdf_para_base : rhsgref_cdf_reg_base {
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_COST_REG;
		ASR_AI_MINFIRETIME;
    };
    class rhsgref_cdf_para_rifleman;

    class rhsgref_cdf_para_autorifleman : rhsgref_cdf_para_rifleman {
        ASR_AI_COST_REG;
    };
    class rhsgref_cdf_para_machinegunner : rhsgref_cdf_para_rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_COST_REG;
    };
    class rhsgref_cdf_para_marksman : rhsgref_cdf_para_rifleman {
        ASR_AI_COST_REG;
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsgref_cdf_para_officer : rhsgref_cdf_para_rifleman {
		ASR_AI_COST_SPECIAL;
    };
    class rhsgref_cdf_para_squadleader : rhsgref_cdf_para_rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_COST_REG;
    };
    class rhsgref_cdf_para_grenadier_rpg : rhsgref_cdf_para_rifleman {
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_para_specialist_aa : rhsgref_cdf_para_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_cdf_para_engineer : rhsgref_cdf_para_rifleman {
        ASR_AI_COST_REG;
    };
    class rhsgref_cdf_para_crew : rhsgref_cdf_para_rifleman {
        ASR_AI_COST_REG;
    };

    class rhsgref_nat_base : SoldierGB {
		ASR_AI_SKILL_INS2;
        ASR_AI_CAMO_FULL;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_COST_LESS;
		ASR_AI_MINFIRETIME;
    };
    class rhsgref_nat_rifleman;

    class rhsgref_nat_grenadier_rpg : rhsgref_nat_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_nat_specialist_aa : rhsgref_nat_base {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_nat_hunter : rhsgref_nat_base {
		ASR_AI_COST_LESS;
    };
    class rhsgref_nat_scout : rhsgref_nat_base {
		ASR_AI_SKILL_INS1;
    };
    class rhsgref_nat_saboteur : rhsgref_nat_base {
		ASR_AI_SKILL_INS1;
		ASR_AI_COST_LESS;
        ASR_AI_CAMO_FULL;
    };
    class rhsgref_nat_crew : rhsgref_nat_base {
		ASR_AI_COST_LESS;
        ASR_AI_CAMO_FULL;
    };

    class rhsgref_nat_pmil_rifleman;

    class rhsgref_nat_pmil_grenadier_rpg : rhsgref_nat_pmil_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_nat_pmil_specialist_aa : rhsgref_nat_pmil_rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_nat_pmil_hunter : rhsgref_nat_pmil_rifleman {
		ASR_AI_COST_LESS;
    };
    class rhsgref_nat_pmil_scout : rhsgref_nat_pmil_rifleman {
		ASR_AI_SKILL_INS1;
    };
    class rhsgref_nat_pmil_saboteur : rhsgref_nat_pmil_rifleman {
		ASR_AI_SKILL_INS1;
		ASR_AI_COST_LESS;
        ASR_AI_CAMO_FULL;
    };
    class rhsgref_nat_pmil_crew : rhsgref_nat_pmil_rifleman {
		ASR_AI_COST_LESS;
        ASR_AI_CAMO_FULL;
    };

//Chedaki

    class rhsgref_ins_base : SoldierGB {
		ASR_AI_SKILL_INS2;
        ASR_AI_CAMO_FULL;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_COST_LESS;
		ASR_AI_MINFIRETIME;
    };
    class rhsgref_ins_reed;
    class rhsgref_ins_uniform_izlom;
    class rhsgref_ins_uniform_specter;
    class rhsgref_ins_uniform_gorka_y;
    class rhsgref_ins_uniform_gorka_g;

    class rhsgref_ins_squadleader : rhsgref_ins_uniform_specter {
		ASR_AI_SKILL_INS1;
    };
    class rhsgref_ins_grenadier_rpg : rhsgref_ins_uniform_izlom {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_ins_specialist_aa : rhsgref_ins_reed {
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsgref_ins_engineer : rhsgref_ins_uniform_gorka_g {
		ASR_AI_COST_LESS;
        ASR_AI_CAMO_FULL;
    };
    class rhsgref_ins_saboteur : rhsgref_ins_uniform_specter {
		ASR_AI_SKILL_INS1;
		ASR_AI_COST_LESS;
        ASR_AI_CAMO_FULL;
    };
    class rhsgref_ins_sniper : rhsgref_ins_uniform_izlom {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsgref_ins_spotter : rhsgref_ins_uniform_gorka_y {
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_REG;
    };
    class rhsgref_ins_crew : rhsgref_ins_uniform_specter {
		ASR_AI_COST_LESS;
        ASR_AI_CAMO_FULL;
    };
    class rhsgref_ins_pilot : rhsgref_ins_uniform_specter {
		ASR_AI_SKILL_PIL2;
		ASR_AI_COST_LESS;
		ASR_AI_CAMO_HALF;
    };

};
