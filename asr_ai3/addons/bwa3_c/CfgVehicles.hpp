class CfgVehicles {

    #include "bags.hpp"

	class B_Soldier_base_F;
    class B_Soldier_sniper_base_F;
    class I_Soldier_base_F;
    class I_Soldier_02_F;
    class I_Soldier_sniper_base_F;

    class BWA3_Rifleman_base;
    class BWA3_Rifleman_03_base;

    class BWA3_Rifleman_lite_Fleck : BWA3_Rifleman_03_base {
        ASR_AI_CAMO_BASE;
    };
    class BWA3_CombatLifeSaver_Fleck : BWA3_Rifleman_base {
        ASR_AI_CAMO_BASE;
    };

    class BWA3_Sniper_base : B_Soldier_sniper_base_F {
		ASR_AI_SKILL_SNP1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class BWA3_SniperG82_Fleck : BWA3_Sniper_base {
        ASR_AI_CAMO_BASE;
    };

    class BWA3_Crew_base : B_Soldier_base_F {
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Helipilot_base : B_Soldier_base_F {
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Marksman_Fleck : BWA3_Rifleman_base {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };

    class BWA3_Spotter_Fleck : BWA3_Sniper_base {
		ASR_AI_SKILL_SOF2;
		ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_CAMO_BASE;
    };
    class BWA3_RiflemanAT_RGW90_Fleck : BWA3_Rifleman_base {
		ASR_AI_AMMOCOEF_AT;
    };
    class BWA3_RiflemanAT_Pzf3_Fleck : BWA3_Rifleman_base {
		ASR_AI_AMMOCOEF_AT;
        ASR_AI_CAMO_BASE;
    };
	class BWA3_RiflemanAT_CG_Fleck: BWA3_Rifleman_base {
		ASR_AI_AMMOCOEF_AT;
        ASR_AI_CAMO_BASE;
    };
    class BWA3_RiflemanAA_Fliegerfaust_Fleck : BWA3_Rifleman_base {
		ASR_AI_AMMOCOEF_AT;
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Rifleman_02_base;
    class BWA3_Engineer_Fleck : BWA3_Rifleman_02_base {
        ASR_AI_CAMO_BASE;
    };

    class BWA3_TL_Fleck : BWA3_Rifleman_03_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class BWA3_SL_Fleck : BWA3_Rifleman_03_base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Officer_Fleck : BWA3_Rifleman_base {
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Crew_Fleck : BWA3_Crew_base {
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Tank_Commander_Fleck : BWA3_Crew_base {
        ASR_AI_CAMO_BASE;
    };

    class BWA3_Rifleman_04_base : I_Soldier_base_F {
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
    };
    class BWA3_Rifleman_05_base : I_Soldier_02_F {
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
    };
    class BWA3_Sniper_02_base : I_Soldier_sniper_base_F {
		ASR_AI_AMMOCOEF_SNIPER;
		ASR_AI_MINFIRETIME;
    };

    class BWA3_Rifleman_recon_base : BWA3_Rifleman_base {
		ASR_AI_SKILL_SOF2;
        ASR_AI_CAMO_BASE;
    };
    class BWA3_recon_LAT_Fleck : BWA3_Rifleman_recon_base {
		ASR_AI_AMMOCOEF_AT;
    };
    class BWA3_recon_Marksman_Fleck : BWA3_Rifleman_recon_base {
		ASR_AI_AMMOCOEF_SNIPER;
    };

};
