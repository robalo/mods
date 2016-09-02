class CfgVehicles {

	class B_Soldier_base_F;
    class B_Soldier_02_f;
    class B_Soldier_03_f;
    class B_Soldier_sniper_base_F;
    class I_Soldier_base_F;
    class I_Soldier_02_F;
    class I_Soldier_sniper_base_F;

    class BWA3_Rifleman_base : B_Soldier_base_F {
        //faction = "BWA3_Faction";
        //uniformClass = "BWA3_Uniform_idz_Fleck";
    };
    class BWA3_Rifleman_02_base : B_Soldier_02_f {
        //faction = "BWA3_Faction";
        //uniformClass = "BWA3_Uniform2_idz_Fleck";
    };
    class BWA3_Rifleman_03_base : B_Soldier_03_f {
        //faction = "BWA3_Faction";
        //uniformClass = "BWA3_Uniform3_idz_Fleck";
    };
    class BWA3_Sniper_base : B_Soldier_sniper_base_F {
        //faction = "BWA3_Faction";
        //uniformClass = "BWA3_Uniform_Ghillie_idz_Fleck";
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_GHIL;
		ASR_AI_SKILL_SNP1;
		ASR_AI_AMMOCOEF_SNIPER;
    };

    class BWA3_Crew_base : B_Soldier_base_F {
        //faction = "BWA3_Faction";
        //uniformClass = "BWA3_Uniform_Crew_Fleck";
        ASR_AI_CAMO_FULL;
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class BWA3_Helipilot_base : B_Soldier_base_F {
        //faction = "BWA3_Faction";
        //uniformClass = "BWA3_Uniform_Helipilot";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_HALF;
		ASR_AI_SKILL_PIL1;
    };
    class BWA3_Rifleman_lite_Fleck : BWA3_Rifleman_03_base {
        //displayName = "Rifleman (Light)";
        ASR_AI_CAMO_FULL;
        ASR_AI_COST_REG;
    };
    class BWA3_Grenadier_Fleck : BWA3_Rifleman_base {
        //displayName = "Grenadier";
        ASR_AI_COST_REG;
    };
    class BWA3_GrenadierG27_Fleck : BWA3_Rifleman_03_base {
        //displayName = "Grenadier (G27)";
        ASR_AI_COST_REG;
    };
    class BWA3_Autorifleman_Fleck : BWA3_Rifleman_03_base {
        //displayName = "Autorifleman";
        ASR_AI_COST_REG;
    };
    class BWA3_AutoriflemanMG5_Fleck : BWA3_Rifleman_02_base {
        //displayName = "Autorifleman (MG5)";
        ASR_AI_COST_REG;
    };
    class BWA3_CombatLifeSaver_Fleck : BWA3_Rifleman_base {
        //displayName = "Combat Life Saver";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class BWA3_Marksman_Fleck : BWA3_Rifleman_base {
        //displayName = "Marksman";
        ASR_AI_COST_REG;
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };

    class BWA3_SniperG82_Fleck : BWA3_Sniper_base {
        //displayName = "Sniper";
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_GHIL;
    };
    class BWA3_Spotter_Fleck : BWA3_Sniper_base {
        //displayName = "Spotter";
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_GHIL;
		ASR_AI_SKILL_SOF2;
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class BWA3_RiflemanAT_RGW90_Fleck : BWA3_Rifleman_base {
        //displayName = "Rifleman (AT) (RGW 90)";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
    };
    class BWA3_RiflemanAT_Pzf3_Fleck : BWA3_Rifleman_base {
        //displayName = "Rifleman (AT) (Pzf 3)";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
		ASR_AI_AMMOCOEF_AT;
    };
	class BWA3_RiflemanAT_CG_Fleck: BWA3_Rifleman_base {
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
		ASR_AI_AMMOCOEF_AT;
    };
    class BWA3_RiflemanAA_Fliegerfaust_Fleck : BWA3_Rifleman_base {
        //displayName = "Rifleman (AA)";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
		ASR_AI_AMMOCOEF_AT;
    };
    class BWA3_Engineer_Fleck : BWA3_Rifleman_02_base {
        //displayName = "Engineer";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class BWA3_TL_Fleck : BWA3_Rifleman_03_base {
        //displayName = "Team Leader";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
		ASR_AI_SKILL_REG1;
    };
    class BWA3_SL_Fleck : BWA3_Rifleman_03_base {
        //displayName = "Squad Leader";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
		ASR_AI_SKILL_REG1;
    };
    class BWA3_Officer_Fleck : BWA3_Rifleman_base {
        //displayName = "Officer";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class BWA3_Crew_Fleck : BWA3_Crew_base {
        //displayName = "Crewman";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class BWA3_Tank_Commander_Fleck : BWA3_Crew_base {
        //displayName = "Tank Commander";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };

    class BWA3_Rifleman_04_base : I_Soldier_base_F {
        //faction = "BWA3_Faction";
        //uniformClass = "BWA3_Uniform_Fleck";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class BWA3_Rifleman_05_base : I_Soldier_02_F {
        //faction = "BWA3_Faction";
        //uniformClass = "BWA3_Uniform2_Fleck";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class BWA3_Sniper_02_base : I_Soldier_sniper_base_F {
        //faction = "BWA3_Faction";
        //uniformClass = "BWA3_Uniform_Ghillie_Fleck";
		minFireTime = 5;
		ASR_AI_COST_SPECIAL;
		ASR_AI_AMMOCOEF_SNIPER;
    };

    class BWA3_Rifleman_recon_base : BWA3_Rifleman_base {
        //displayName = "FernspÃ¤her Scout";
		minFireTime = 5;
        ASR_AI_CAMO_FULL;
		ASR_AI_COST_SPECIAL;
		ASR_AI_SKILL_SOF2;
    };
    class BWA3_recon_Fleck : BWA3_Rifleman_recon_base {
        //displayName = "FernspÃ¤her Scout";
        //uniformClass = "BWA3_Uniform_Fleck";
		ASR_AI_COST_SPECIAL;
    };
    class BWA3_recon_LAT_Fleck : BWA3_Rifleman_recon_base {
        //displayName = "FernspÃ¤her Recon (RGW90)";
        //uniformClass = "BWA3_Uniform_Fleck";
		ASR_AI_COST_SPECIAL;
		ASR_AI_AMMOCOEF_AT;
    };
    class BWA3_recon_Pioneer_Fleck : BWA3_Rifleman_recon_base {
        //displayName = "FernspÃ¤her Pioneer";
        //uniformClass = "BWA3_Uniform2_Fleck";
		ASR_AI_COST_SPECIAL;
    };
    class BWA3_recon_Medic_Fleck : BWA3_Rifleman_recon_base {
        //displayName = "FernspÃ¤her Paramedic";
        //uniformClass = "BWA3_Uniform2_Fleck";
		ASR_AI_COST_SPECIAL;
    };
    class BWA3_recon_TL_Fleck : BWA3_Rifleman_recon_base {
        //displayName = "FernspÃ¤her Team Leader";
        //uniformClass = "BWA3_Uniform_Fleck";
		ASR_AI_COST_SPECIAL;
    };
    class BWA3_recon_Marksman_Fleck : BWA3_Rifleman_recon_base {
        //displayName = "FernspÃ¤her Marksman";
        //uniformClass = "BWA3_Uniform2_Fleck";
		ASR_AI_COST_SPECIAL;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class BWA3_recon_Radioman_Fleck : BWA3_Rifleman_recon_base {
        //displayName = "FernspÃ¤her Radioman";
        //uniformClass = "BWA3_Uniform_Fleck";
		ASR_AI_COST_SPECIAL;
    };

};
