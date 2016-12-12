class CfgVehicles {

    class B_AssaultPack_Base;
    class B_Kitbag_Base;
    class B_TacticalPack_Base;
    class B_FieldPack_Base;
    class B_Carryall_Base;
    class Bag_Base;

    class BWA3_AssaultPack_Fleck : B_AssaultPack_Base {
        //displayName = "Assault Pack (Flecktarn)";
        __CAMO_B_SMALLCAMO;
    };
    class BWA3_AssaultPack_Tropen : B_AssaultPack_Base {
        //displayName = "Assault Pack (Tropentarn)";
        __CAMO_B_SMALLCAMO;
    };

    class BWA3_Kitbag_Fleck : B_Kitbag_Base {
        //displayName = "Kitbag (Flecktarn)";
        __CAMO_B_MEDIUMCAMO;
    };
    class BWA3_Kitbag_Tropen : B_Kitbag_Base {
        //displayName = "Kitbag (Tropentarn)";
        __CAMO_B_MEDIUMCAMO;
    };
    class BWA3_Kitbag_Fleck_Medic : B_Kitbag_Base {
        //displayName = "Kitbag (Flecktarn, Medic)";
        __CAMO_B_MEDIUMCAMO;
    };
    class BWA3_Kitbag_Tropen_Medic : B_Kitbag_Base {
        //displayName = "Kitbag (Tropentarn, Medic)";
        __CAMO_B_MEDIUMCAMO;
    };

    class BWA3_TacticalPack_Fleck : B_TacticalPack_Base {
        //displayName = "Tactical Backpack (Flecktarn)";
        __CAMO_B_MEDIUMCAMO;
    };
    class BWA3_TacticalPack_Tropen : B_TacticalPack_Base {
        //displayName = "Tactical Backpack (Tropentarn)";
        __CAMO_B_MEDIUMCAMO;
    };
    class BWA3_TacticalPack_Fleck_Medic : B_TacticalPack_Base {
        //displayName = "Tactical Backpack (Flecktarn, Medic)";
        __CAMO_B_MEDIUMCAMO;
    };
    class BWA3_TacticalPack_Tropen_Medic : B_TacticalPack_Base {
        //displayName = "Tactical Backpack (Tropentarn, Medic)";
        __CAMO_B_MEDIUMCAMO;
    };

    class BWA3_FieldPack_Fleck : B_FieldPack_Base {
        //displayName = "Field Pack (Flecktarn)";
        __CAMO_B_MEDIUMCAMO;
    };
    class BWA3_FieldPack_Tropen : B_FieldPack_Base {
        //displayName = "Field Pack (Tropentarn)";
        __CAMO_B_MEDIUMCAMO;
    };

    class BWA3_Carryall_Fleck : B_Carryall_Base {
        //displayName = "Carryall Backpack (Flecktarn)";
        __CAMO_B_LARGECAMO;
    };
    class BWA3_Carryall_Tropen : B_Carryall_Base {
        //displayName = "Carryall Backpack (Tropentarn)";
        __CAMO_B_LARGECAMO;
    };

    class BWA3_PatrolPack_Fleck : Bag_Base {
        //displayName = "Patrol Pack (Flecktarn)";
        __CAMO_B_LARGECAMO;
    };
    class BWA3_PatrolPack_Tropen : BWA3_PatrolPack_Fleck {
        //displayName = "Patrol Pack (Tropentarn)";
        __CAMO_B_LARGECAMO;
    };


    class B_Soldier_base_F;

    class BWA3_Crew_base : B_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Helipilot_base : B_Soldier_base_F {
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Rifleman_03_base;
    class BWA3_Rifleman_lite_Fleck : BWA3_Rifleman_03_base {
        //displayName = "Rifleman (Light)";
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Rifleman_base;
    class BWA3_CombatLifeSaver_Fleck : BWA3_Rifleman_base {
        //displayName = "Combat Life Saver";
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Sniper_base;
    class BWA3_SniperG82_Fleck : BWA3_Sniper_base {
        //displayName = "Sniper";
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Spotter_Fleck : BWA3_Sniper_base {
        //displayName = "Spotter";
        ASR_AI_CAMO_BASE;
    };
    class BWA3_RiflemanAT_Pzf3_Fleck : BWA3_Rifleman_base {
        //displayName = "Rifleman (AT) (Pzf 3)";
        ASR_AI_CAMO_BASE;
    };
    class BWA3_RiflemanAT_CG_Fleck : BWA3_Rifleman_base {
        //displayName = "Rifleman (Illumination)";
        ASR_AI_CAMO_BASE;
    };
    class BWA3_RiflemanAA_Fliegerfaust_Fleck : BWA3_Rifleman_base {
        //displayName = "Rifleman (AA)";
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Rifleman_02_base;
    class BWA3_Engineer_Fleck : BWA3_Rifleman_02_base {
        //displayName = "Engineer";
        ASR_AI_CAMO_BASE;
    };
    class BWA3_TL_Fleck : BWA3_Rifleman_03_base {
        //displayName = "Team Leader";
        ASR_AI_CAMO_BASE;
    };
    class BWA3_SL_Fleck : BWA3_Rifleman_03_base {
        //displayName = "Squad Leader";
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Officer_Fleck : BWA3_Rifleman_base {
        //displayName = "Officer";
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Crew_Fleck : BWA3_Crew_base {
        //displayName = "Crewman";
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Tank_Commander_Fleck : BWA3_Crew_base {
        //displayName = "Tank Commander";
        ASR_AI_CAMO_BASE;
    };
    class BWA3_Rifleman_recon_base : BWA3_Rifleman_base {
        //displayName = "FernspÃ¤her Scout";
        ASR_AI_CAMO_BASE;
    };

};
