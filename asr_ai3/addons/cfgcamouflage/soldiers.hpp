    class Man;

    class CAManBase : Man {
        ASR_AI_CAMO_BASE;
    };
    class Civilian : CAManBase {
        //displayName = "Civilian";
        ASR_AI_CAMO_BASE;
    };

    class SoldierWB;

    class B_Soldier_base_F : SoldierWB {
        ASR_AI_CAMO_BASE;
    };

    class B_Soldier_03_f;

    class B_Soldier_lite_F : B_Soldier_03_f {
        //displayName = "Rifleman (Light)";
        ASR_AI_CAMO_BASE;
    };
    class B_Soldier_SL_F : B_Soldier_03_f {
        //displayName = "Squad Leader";
        ASR_AI_CAMO_BASE;
    };
    class B_Soldier_TL_F : B_Soldier_03_f {
        //displayName = "Team Leader";
        ASR_AI_CAMO_BASE;
    };

    class B_Soldier_02_f;

    class B_medic_F : B_Soldier_02_f {
        //displayName = "Combat Life Saver";
        ASR_AI_CAMO_BASE;
    };
    class B_soldier_repair_F : B_Soldier_base_F {
        //displayName = "Repair Specialist";
        ASR_AI_CAMO_BASE;
    };
    class B_soldier_exp_F : B_Soldier_base_F {
        //displayName = "Explosive Specialist";
        ASR_AI_CAMO_BASE;
    };

    class B_Soldier_04_f;

    class B_Helipilot_F : B_Soldier_04_f {
        //displayName = "Helicopter Pilot";
        ASR_AI_CAMO_BASE;
    };
    class B_Soldier_A_F : B_Soldier_base_F {
        //displayName = "Ammo Bearer";
        ASR_AI_CAMO_BASE;
    };
    class B_soldier_AT_F : B_Soldier_base_F {
        //displayName = "Missile Specialist (AT)";
        ASR_AI_CAMO_BASE;
    };
    class B_soldier_AA_F : B_Soldier_base_F {
        //displayName = "Missile Specialist (AA)";
        ASR_AI_CAMO_BASE;
    };
    class B_engineer_F : B_Soldier_03_f {
        //displayName = "Engineer";
        ASR_AI_CAMO_BASE;
    };
    class B_crew_F : B_Soldier_03_f {
        //displayName = "Crewman";
        ASR_AI_CAMO_BASE;
    };
    class B_officer_F : B_Soldier_base_F {
        //displayName = "Officer";
        ASR_AI_CAMO_BASE;
    };

    class B_Soldier_diver_base_F;

    class B_diver_F : B_Soldier_diver_base_F {
        //displayName = "Assault Diver";
        ASR_AI_CAMO_BASE;
    };
    class B_diver_TL_F : B_Soldier_diver_base_F {
        //displayName = "Diver Team Leader";
        ASR_AI_CAMO_BASE;
    };
    class B_diver_exp_F : B_Soldier_diver_base_F {
        //displayName = "Diver Explosive Specialist";
        ASR_AI_CAMO_BASE;
    };
    class B_Soldier_recon_base : B_Soldier_base_F {
        //displayName = "Recon";
        ASR_AI_CAMO_BASE;
    };

    class B_Soldier_sniper_base_F;

    class B_spotter_F : B_Soldier_sniper_base_F {
        //displayName = "Spotter";
        ASR_AI_CAMO_BASE;
    };
    class B_sniper_F : B_Soldier_sniper_base_F {
        //displayName = "Sniper";
        ASR_AI_CAMO_BASE;
    };
    class B_CTRG_soldier_M_medic_F : B_Soldier_03_f {
        //displayName = "James";
        ASR_AI_CAMO_BASE;
    };
    class B_Soldier_support_base_F : B_Soldier_base_F {
        ASR_AI_CAMO_BASE;
        //displayName = "Support";
    };

    class SoldierGB;

    class I_G_Soldier_base_F : SoldierGB {
        ASR_AI_CAMO_BASE;
    };
    class I_G_Soldier_lite_F : I_G_Soldier_base_F {
        //displayName = "Rifleman (Light)";
        ASR_AI_CAMO_BASE;
    };
    class I_G_Soldier_SL_F : I_G_Soldier_base_F {
        //displayName = "Squad Leader";
        ASR_AI_CAMO_BASE;
    };
    class I_G_Soldier_exp_F : I_G_Soldier_base_F {
        //displayName = "Explosive Specialist";
        ASR_AI_CAMO_BASE;
    };
    class I_G_officer_F : I_G_Soldier_base_F {
        ASR_AI_CAMO_BASE;
        //displayName = "Officer";
    };
    class I_Soldier_base_F : SoldierGB {
        ASR_AI_CAMO_BASE;
    };

    class I_Soldier_02_F;

    class I_Soldier_lite_F : I_Soldier_02_F {
        //displayName = "Rifleman (Light)";
        ASR_AI_CAMO_BASE;
    };
    class I_Soldier_A_F : I_Soldier_02_F {
        //displayName = "Ammo Bearer";
        ASR_AI_CAMO_BASE;
    };
    class I_Soldier_SL_F : I_Soldier_02_F {
        //displayName = "Squad Leader";
        ASR_AI_CAMO_BASE;
    };
    class I_Soldier_TL_F : I_Soldier_base_F {
        //displayName = "Team Leader";
        ASR_AI_CAMO_BASE;
    };
    class I_medic_F : I_Soldier_02_F {
        //displayName = "Combat Life Saver";
        ASR_AI_CAMO_BASE;
    };
    class I_Soldier_repair_F : I_Soldier_02_F {
        //displayName = "Repair Specialist";
        ASR_AI_CAMO_BASE;
    };
    class I_Soldier_exp_F : I_Soldier_02_F {
        //displayName = "Explosive Specialist";
        ASR_AI_CAMO_BASE;
    };
    class I_engineer_F : I_Soldier_base_F {
        //displayName = "Engineer";
        ASR_AI_CAMO_BASE;
    };
    class I_crew_F : I_Soldier_base_F {
        //displayName = "Crewman";
        ASR_AI_CAMO_BASE;
    };

    class I_Soldier_03_F;

    class I_helipilot_F : I_Soldier_03_F {
        //displayName = "Helicopter Pilot";
        ASR_AI_CAMO_BASE;
    };

    class I_Soldier_04_F;

    class I_pilot_F : I_Soldier_04_F {
        //displayName = "Pilot";
        ASR_AI_CAMO_BASE;
    };
    class I_officer_F : I_Soldier_base_F {
        //displayName = "Officer";
        ASR_AI_CAMO_BASE;
    };

    class I_Soldier_diver_base_F;

    class I_diver_F : I_Soldier_diver_base_F {
        //displayName = "Assault Diver";
        ASR_AI_CAMO_BASE;
    };
    class I_diver_exp_F : I_Soldier_diver_base_F {
        //displayName = "Diver Explosive Specialist";
        ASR_AI_CAMO_BASE;
    };
    class I_diver_TL_F : I_Soldier_diver_base_F {
        //displayName = "Diver Team Leader";
        ASR_AI_CAMO_BASE;
    };

    class I_Soldier_sniper_base_F;

    class I_Spotter_F : I_Soldier_sniper_base_F {
        //displayName = "Spotter";
        ASR_AI_CAMO_BASE;
    };
    class I_Sniper_F : I_Soldier_sniper_base_F {
        //displayName = "Sniper";
        ASR_AI_CAMO_BASE;
    };
    class I_Soldier_support_base_F : I_Soldier_base_F {
        ASR_AI_CAMO_BASE;
        //displayName = "Support";
    };

    class SoldierEB;

    class O_Soldier_base_F : SoldierEB {
        ASR_AI_CAMO_BASE;
    };
    class O_officer_F : O_Soldier_base_F {
        //displayName = "Officer";
        ASR_AI_CAMO_BASE;
    };
    class O_Soldier_lite_F : O_Soldier_base_F {
        //displayName = "Rifleman (Light)";
        ASR_AI_CAMO_BASE;
    };
    class O_Soldier_SL_F : O_Soldier_base_F {
        //displayName = "Squad Leader";
        ASR_AI_CAMO_BASE;
    };
    class O_Soldier_TL_F : O_Soldier_base_F {
        //displayName = "Team Leader";
        ASR_AI_CAMO_BASE;
    };
    class O_medic_F : O_Soldier_base_F {
        //displayName = "Combat Life Saver";
        ASR_AI_CAMO_BASE;
    };
    class O_soldier_repair_F : O_Soldier_base_F {
        //displayName = "Repair Specialist";
        ASR_AI_CAMO_BASE;
    };
    class O_soldier_exp_F : O_Soldier_base_F {
        //displayName = "Explosive Specialist";
        ASR_AI_CAMO_BASE;
    };

    class O_Soldier_02_F;

    class O_helipilot_F : O_Soldier_02_F {
        //displayName = "Helicopter Pilot";
        ASR_AI_CAMO_BASE;
    };
    class O_Soldier_A_F : O_Soldier_base_F {
        //displayName = "Ammo Bearer";
        ASR_AI_CAMO_BASE;
    };
    class O_Soldier_AT_F : O_Soldier_base_F {
        //displayName = "Missile Specialist (AT)";
        ASR_AI_CAMO_BASE;
    };
    class O_Soldier_AA_F : O_Soldier_base_F {
        //displayName = "Missile Specialist (AA)";
        ASR_AI_CAMO_BASE;
    };
    class O_engineer_F : O_Soldier_base_F {
        //displayName = "Engineer";
        ASR_AI_CAMO_BASE;
    };
    class O_crew_F : O_Soldier_base_F {
        //displayName = "Crewman";
        ASR_AI_CAMO_BASE;
    };

    class O_Soldier_diver_base_F;

    class O_diver_F : O_Soldier_diver_base_F {
        //displayName = "Assault Diver";
        ASR_AI_CAMO_BASE;
    };
    class O_diver_TL_F : O_Soldier_diver_base_F {
        //displayName = "Diver Team Leader";
        ASR_AI_CAMO_BASE;
    };
    class O_diver_exp_F : O_Soldier_diver_base_F {
        //displayName = "Diver Explosive Specialist";
        ASR_AI_CAMO_BASE;
    };

    class O_Soldier_sniper_base_F;

    class O_spotter_F : O_Soldier_sniper_base_F {
        //displayName = "Spotter";
        ASR_AI_CAMO_BASE;
    };
    class O_sniper_F : O_Soldier_sniper_base_F {
        //displayName = "Sniper";
        ASR_AI_CAMO_BASE;
    };
    class O_Soldier_recon_base : O_Soldier_base_F {
        //displayName = "Recon";
        ASR_AI_CAMO_BASE;
    };
    class O_Soldier_support_base_F : O_Soldier_base_F {
        ASR_AI_CAMO_BASE;
        //displayName = "Support";
    };

    class O_Soldier_Urban_base;

    class O_soldierU_AT_F : O_Soldier_Urban_base {
        //displayName = "Missile Specialist (AT)";
        ASR_AI_CAMO_BASE;
    };
    class O_soldierU_AAT_F : O_Soldier_Urban_base {
        //displayName = "Asst. Missile Specialist (AT)";
        ASR_AI_CAMO_BASE;
    };
    class O_soldierU_AA_F : O_Soldier_Urban_base {
        //displayName = "Missile Specialist (AA)";
        ASR_AI_CAMO_BASE;
    };
    class O_soldierU_AAA_F : O_Soldier_Urban_base {
        //displayName = "Asst. Missile Specialist (AA)";
        ASR_AI_CAMO_BASE;
    };
    class O_soldierU_TL_F : O_Soldier_Urban_base {
        //displayName = "Team Leader";
        ASR_AI_CAMO_BASE;
    };
    class O_SoldierU_SL_F : O_Soldier_Urban_base {
        //displayName = "Squad Leader";
        ASR_AI_CAMO_BASE;
    };
    class O_soldierU_repair_F : O_Soldier_Urban_base {
        //displayName = "Repair Specialist";
        ASR_AI_CAMO_BASE;
    };
    class O_soldierU_exp_F : O_Soldier_Urban_base {
        //displayName = "Explosive Specialist";
        ASR_AI_CAMO_BASE;
    };
    class O_engineer_U_F : O_Soldier_Urban_base {
        //displayName = "Engineer";
        ASR_AI_CAMO_BASE;
    };
    class O_soldierU_A_F : O_Soldier_Urban_base {
        //displayName = "Ammo Bearer";
        ASR_AI_CAMO_BASE;
    };
    class B_ghillie_base_F : B_Soldier_sniper_base_F {
        //displayName = "Sniper";
        ASR_AI_CAMO_BASE;
    };
    class O_ghillie_base_F : O_Soldier_sniper_base_F {
        //displayName = "Sniper";
        ASR_AI_CAMO_BASE;
    };
    class I_ghillie_base_F : I_Soldier_sniper_base_F {
        //displayName = "Sniper";
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_base_F : I_G_Soldier_base_F {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Bandit_1_F : I_C_Soldier_base_F {
        //displayName = "Snatcher (Medikit)";
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Bandit_2_F : I_C_Soldier_base_F {
        //displayName = "Hireling (Launcher)";
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Bandit_3_F : I_C_Soldier_base_F {
        //displayName = "Guard (Machine Gun)";
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Bandit_4_F : I_C_Soldier_base_F {
        //displayName = "Watcher (Rifle)";
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Bandit_5_F : I_C_Soldier_base_F {
        //displayName = "Scout (Rifle)";
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Bandit_6_F : I_C_Soldier_base_F {
        //displayName = "Smuggler (UGL)";
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Bandit_7_F : I_C_Soldier_base_F {
        //displayName = "Dealer (Rifle)";
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Bandit_8_F : I_C_Soldier_base_F {
        //displayName = "Thug (Mines)";
        ASR_AI_CAMO_BASE;
    };
    class I_C_Soldier_Camo_F : I_C_Soldier_base_F {
        //displayName = "Solomon Maru";
        ASR_AI_CAMO_BASE;
    };
    class I_C_Pilot_F : I_C_Soldier_base_F {
        //displayName = "Pilot";
        ASR_AI_CAMO_BASE;
    };
    class I_C_Helipilot_F : I_C_Soldier_base_F {
        //displayName = "Helicopter Pilot";
        ASR_AI_CAMO_BASE;
    };
    class O_V_Soldier_base_F : O_Soldier_base_F {
        //displayName = "";
        ASR_AI_CAMO_BASE;
    };
    
    class B_Soldier_F;

    class B_GEN_Soldier_base_F : B_Soldier_F {
        //displayName = "Gendarme";
        ASR_AI_CAMO_BASE;
    };
