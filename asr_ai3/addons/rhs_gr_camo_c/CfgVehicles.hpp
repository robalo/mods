class CfgVehicles {

    class SoldierGB;
    class rhsgref_cdf_ngd_rifleman;
    class rhsgref_cdf_reg_rifleman;
    class rhsgref_cdf_para_rifleman;
    class rhsgref_nat_pmil_rifleman;
    class rhsgref_ins_uniform_gorka_g;
    class rhsgref_ins_uniform_specter;

    class rhsgref_cdf_ngd_base : SoldierGB {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_ngd_officer : rhsgref_cdf_ngd_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_ngd_squadleader : rhsgref_cdf_ngd_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_ngd_engineer : rhsgref_cdf_ngd_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_ngd_crew : rhsgref_cdf_ngd_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_reg_base : SoldierGB {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_reg_general : rhsgref_cdf_reg_rifleman {
        //displayName = "General";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_reg_officer : rhsgref_cdf_reg_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_reg_squadleader : rhsgref_cdf_reg_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_reg_engineer : rhsgref_cdf_reg_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_reg_crew : rhsgref_cdf_reg_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_air_pilot : rhsgref_cdf_reg_crew {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_para_base : rhsgref_cdf_reg_base {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_para_officer : rhsgref_cdf_para_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_para_squadleader : rhsgref_cdf_para_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_para_engineer : rhsgref_cdf_para_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_cdf_para_crew : rhsgref_cdf_para_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_nat_base : SoldierGB {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_nat_saboteur : rhsgref_nat_base {
        //displayName = "Saboteur";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_nat_crew : rhsgref_nat_base {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_nat_pmil_saboteur : rhsgref_nat_pmil_rifleman {
        //displayName = "Saboteur";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_nat_pmil_crew : rhsgref_nat_pmil_rifleman {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_ins_base : SoldierGB {
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_ins_engineer : rhsgref_ins_uniform_gorka_g {
        //displayName = "Sapper";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_ins_saboteur : rhsgref_ins_uniform_specter {
        //displayName = "Saboteur";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_ins_crew : rhsgref_ins_uniform_specter {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class rhsgref_ins_pilot : rhsgref_ins_uniform_specter {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };

};
