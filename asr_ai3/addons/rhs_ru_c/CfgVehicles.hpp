class CfgVehicles {

	class SoldierGB;

//MSV

    class rhs_infantry_msv_base : SoldierGB {
        //faction = "rhs_//faction_msv";
        //displayName = "Rifleman";
		ASR_AI_SKILL_REG2;
		minFireTime = 7;
		ASR_AI_CAMO_FULL;
		ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_COST_REG;
    };
    class rhs_msv_rifleman : rhs_infantry_msv_base {
        //displayName = "Rifleman";
    };
    class rhs_msv_LAT : rhs_msv_rifleman {
        //displayName = "Rifleman (RPG-26)";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_msv_RShG2 : rhs_msv_LAT {
        //displayName = "Rifleman (RShG-2)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_msv_grenadier : rhs_msv_rifleman {
        //displayName = "Rifleman (GP-25)";
        ASR_AI_COST_REG;
    };
    class rhs_msv_arifleman : rhs_msv_rifleman {
        //displayName = "Automatic Rifleman (PKP)";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhs_msv_machinegunner : rhs_msv_arifleman {
        //displayName = "Machine Gunner";
    };
    class rhs_msv_machinegunner_assistant : rhs_msv_rifleman {
        //displayName = "Machine Gunner Assistant";
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_msv_grenadier_rpg : rhs_msv_rifleman {
        //displayName = "Grenadier (RPG-7V2)";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_msv_strelok_rpg_assist : rhs_msv_rifleman {
        //displayName = "Grenadier Assistant";
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhs_msv_marksman : rhs_msv_rifleman {
        //displayName = "Marksman";
		ASR_AI_SKILL_REG1;
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhs_msv_efreitor : rhs_msv_rifleman {
        //displayName = "Efreitor";
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_msv_sergeant : rhs_msv_rifleman {
        //displayName = "Sergeant";
		ASR_AI_SKILL_REG1;
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_msv_junior_sergeant : rhs_msv_sergeant {
        //displayName = "Junior Sergeant";
		ASR_AI_SKILL_REG2;
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_msv_officer_armored : rhs_msv_rifleman {
        //displayName = "Officer (Armored)";
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
    };
    class rhs_msv_officer : rhs_msv_officer_armored {
        //displayName = "Officer";
    };
    class rhs_msv_at : rhs_msv_grenadier_rpg {
        //displayName = "AT Specialist";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_msv_aa : rhs_msv_at {
        //displayName = "AA Specialist";
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_msv_engineer : rhs_msv_rifleman {
        //displayName = "Engineer";
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_msv_medic : rhs_msv_rifleman {
        //displayName = "Medic";
    };

    class rhs_msv_driver_armored : rhs_msv_rifleman {
        //displayName = "Driver (Armored)";
    };
    class rhs_msv_driver : rhs_msv_driver_armored {
        //displayName = "Driver";
    };
    class rhs_msv_crew : rhs_msv_rifleman {
        //displayName = "Crew";
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_msv_armoredcrew : rhs_msv_crew {
        //displayName = "Crew (Armored)";
    };
    class rhs_msv_combatcrew : rhs_msv_crew {
        //displayName = "Crew (Combat)";
    };
    class rhs_msv_crew_commander : rhs_msv_crew {
        //displayName = "Crew Commander";
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };

//Pilots

    class rhs_pilot_base : rhs_infantry_msv_base {
        //displayName = "Pilot";
        //faction = "rhs_//faction_vvs";
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_NONE;
    };
    class rhs_pilot_tan_base : rhs_pilot_base {};

    class rhs_pilot : rhs_pilot_base {
        //displayName = "Pilot";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_NONE;
    };
    class rhs_pilot_tan : rhs_pilot_tan_base {
        ASR_AI_COST_REG;
        ASR_AI_CAMO_NONE;
    };
    class rhs_pilot_combat_heli : rhs_pilot_base {
        //displayName = "Pilot (Combat Helicopter)";
    };
    class rhs_pilot_transport_heli : rhs_pilot_base {
        //displayName = "Pilot (Transport)";
    };

//EMR

    class rhs_msv_emr_grenadier;
    class rhs_msv_emr_efreitor : rhs_msv_emr_grenadier {
        //displayName = "Efreitor";
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_msv_emr_sergeant : rhs_msv_emr_grenadier {
        //displayName = "Sergeant";
		ASR_AI_SKILL_REG1;
    };
    class rhs_msv_emr_junior_sergeant : rhs_msv_emr_sergeant {
        //displayName = "Junior Sergeant";
		ASR_AI_SKILL_REG2;
    };
    class rhs_msv_emr_officer_armored : rhs_msv_officer_armored {
		ASR_AI_COST_SPECIAL;
    };
    class rhs_msv_emr_officer : rhs_msv_emr_officer_armored {
        //displayName = "Officer";
    };

//MVD

    class rhs_mvd_izlom_rifleman : rhs_msv_rifleman {
        //displayName = "Rifleman (AK-103)";
        //faction = "rhs_//faction_vv";
    };
    class rhs_mvd_izlom_rifleman_asval : rhs_mvd_izlom_rifleman {
        //displayName = "Rifleman (AS Val)";
    };
    class rhs_mvd_izlom_rifleman_LAT : rhs_mvd_izlom_rifleman {
        //displayName = "Rifleman (RPG-26)";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_mvd_izlom_grenadier_rpg : rhs_mvd_izlom_rifleman {
        //displayName = "Grenadier (RPG-7V2)";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_mvd_izlom_arifleman : rhs_mvd_izlom_rifleman {
        //displayName = "Automatic Rifleman (PKP)";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhs_mvd_izlom_machinegunner : rhs_mvd_izlom_arifleman {
        //displayName = "Machine Gunner";
    };
    class rhs_mvd_izlom_marksman : rhs_mvd_izlom_rifleman {
        //displayName = "Marksman";
        ASR_AI_COST_REG;
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhs_mvd_izlom_efreitor : rhs_mvd_izlom_rifleman_LAT {
        //displayName = "Efreitor";
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_mvd_izlom_sergeant : rhs_mvd_izlom_rifleman {
        //displayName = "Sergeant";
		ASR_AI_SKILL_REG1;
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };

//VDV

    class rhs_infantry_vdv_base : rhs_infantry_msv_base {
        //faction = "rhs_//faction_vdv";
        //displayName = "Rifleman";
		ASR_AI_CAMO_FULL;
    };
    class rhs_vdv_rifleman : rhs_infantry_vdv_base {
        //displayName = "Rifleman";
    };
    class rhs_vdv_LAT : rhs_vdv_rifleman {
        //displayName = "Rifleman (RPG-26)";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_vdv_RShG2 : rhs_vdv_LAT {
        //displayName = "Rifleman (RShG-2)";
    };
    class rhs_vdv_grenadier : rhs_vdv_rifleman {
        //displayName = "Rifleman (GP-25)";
        ASR_AI_COST_REG;
    };
    class rhs_vdv_rifleman_asval : rhs_vdv_rifleman {
        //displayName = "Rifleman (AS Val)";
    };
    class rhs_vdv_arifleman : rhs_vdv_rifleman {
        //displayName = "Automatic Rifleman (PKP)";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhs_vdv_machinegunner : rhs_vdv_arifleman {
        //displayName = "Machine Gunner";
        ASR_AI_COST_REG;
    };
    class rhs_vdv_machinegunner_assistant : rhs_vdv_rifleman {
        //displayName = "Machine Gunner Assistant";
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_vdv_marksman : rhs_vdv_rifleman {
        //displayName = "Marksman";
		ASR_AI_SKILL_REG1;
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhs_vdv_marksman_asval : rhs_vdv_rifleman_asval {
        //displayName = "Marksman (AS Val)";
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhs_vdv_efreitor : rhs_vdv_LAT {
        //displayName = "Efreitor";
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_vdv_sergeant : rhs_vdv_LAT {
        //displayName = "Sergeant";
		ASR_AI_SKILL_REG1;
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_vdv_junior_sergeant : rhs_vdv_sergeant {
        //displayName = "Junior Sergeant";
		ASR_AI_SKILL_REG2;
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_vdv_officer_armored : rhs_vdv_rifleman {
        //displayName = "Officer (Armored)";
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
    };
    class rhs_vdv_officer : rhs_vdv_officer_armored {
        //displayName = "Officer";
    };
    class rhs_vdv_grenadier_rpg : rhs_vdv_grenadier {
        //displayName = "Grenadier (RPG-7V2)";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_vdv_at : rhs_vdv_grenadier_rpg {
        //displayName = "AT Specialist";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_vdv_aa : rhs_vdv_at {
        //displayName = "AA Specialist";
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_vdv_strelok_rpg_assist : rhs_vdv_rifleman {
        //displayName = "Grenadier Assistant";
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhs_vdv_medic : rhs_vdv_rifleman {
        //displayName = "Medic";
    };
    class rhs_vdv_engineer : rhs_vdv_rifleman {
        //displayName = "Engineer";
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_vdv_driver_armored : rhs_vdv_rifleman {
        //displayName = "Driver (Armored)";
    };
    class rhs_vdv_driver : rhs_vdv_driver_armored {
        //displayName = "Driver";
    };
    class rhs_vdv_crew : rhs_vdv_rifleman {
        //displayName = "Crew";
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };
    class rhs_vdv_armoredcrew : rhs_vdv_crew {
        //displayName = "Crew (Armored)";
    };
    class rhs_vdv_combatcrew : rhs_vdv_crew {
        //displayName = "Crew (Combat)";
    };
    class rhs_vdv_crew_commander : rhs_vdv_crew {
        //displayName = "Crew Commander";
        ASR_AI_COST_REG;
		ASR_AI_CAMO_FULL;
    };

    class rhs_infantry_vdv_des_base : rhs_infantry_vdv_base {
        //faction = "rhs_//faction_vdv";
        //displayName = "Rifleman";
		ASR_AI_CAMO_FULL;
    };

//VDV Recon

    class rhs_vdv_recon_rifleman : rhs_vdv_rifleman {
        //displayName = "Rifleman";
		minFireTime = 5;
		ASR_AI_SKILL_SOF2;
		ASR_AI_CAMO_FULL;
		ASR_AI_COST_SPECIAL;
    };
    class rhs_vdv_recon_rifleman_l : rhs_vdv_recon_rifleman {
        //displayName = "Rifleman (Light)";
    };
    class rhs_vdv_recon_rifleman_akms : rhs_vdv_recon_rifleman {
        //displayName = "Rifleman (AKMS)";
    };
    class rhs_vdv_recon_rifleman_ak103 : rhs_vdv_recon_rifleman_akms {
        //displayName = "Rifleman (AK-103)";
    };
    class rhs_vdv_recon_rifleman_lat : rhs_vdv_recon_rifleman {
        //displayName = "Rifleman (RPG-26)";
    };
    class rhs_vdv_recon_grenadier : rhs_vdv_recon_rifleman {
        //displayName = "Rifleman (GP-25)";
    };
    class rhs_vdv_recon_rifleman_asval : rhs_vdv_recon_rifleman {
        //displayName = "Rifleman (AS Val)";
    };
    class rhs_vdv_recon_arifleman : rhs_vdv_recon_rifleman {
        //displayName = "Automatic Rifleman (PKP)";
    };
    class rhs_vdv_recon_machinegunner_assistant : rhs_vdv_recon_rifleman {
        //displayName = "Machine Gunner Assistant";
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
    };
    class rhs_vdv_recon_efreitor : rhs_vdv_recon_rifleman_lat {
        //displayName = "Efreitor";
		ASR_AI_COST_SPECIAL;
		ASR_AI_CAMO_FULL;
    };
    class rhs_vdv_recon_sergeant : rhs_vdv_recon_rifleman_lat {
        //displayName = "Sergeant";
    };
    class rhs_vdv_recon_officer_armored : rhs_vdv_recon_rifleman {
        //displayName = "Officer (Armored)";
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_FULL;
    };
    class rhs_vdv_recon_officer : rhs_vdv_recon_officer_armored {
        //displayName = "Officer";
    };
    class rhs_vdv_recon_marksman : rhs_vdv_recon_rifleman {
        //displayName = "Marksman";
		ASR_AI_COST_SPECIAL;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhs_vdv_recon_marksman_asval : rhs_vdv_recon_marksman {
        //displayName = "Marksman (AS Val)";
    };
    class rhs_vdv_recon_medic : rhs_vdv_recon_rifleman {
        //displayName = "Medic";
    };
    class rhs_vdv_recon_rifleman_scout : rhs_vdv_recon_rifleman {
        //displayName = "Scout (AK-74)";
    };
    class rhs_vdv_recon_rifleman_scout_akm : rhs_vdv_recon_rifleman_akms {
        //displayName = "Scout";
    };
    class rhs_vdv_recon_grenadier_scout : rhs_vdv_recon_rifleman_scout_akm {
        //displayName = "Scout (GP-25)";
    };
    class rhs_vdv_recon_arifleman_scout : rhs_vdv_recon_rifleman_scout {
        //displayName = "Scout (PKP)";
    };

    class I_G_Soldier_F;

//INS

    class rhs_ins_base : I_G_Soldier_F {
        //displayName = "Rifleman";
        //faction = "rhs_//faction_insurgents";
		ASR_AI_SKILL_INS2;
        minFireTime = 10;
        ASR_AI_CAMO_FULL;
    };
    class rhs_g_Soldier_F : rhs_ins_base {
        //displayName = "Rifleman (AKM)";
    };
    class rhs_g_Soldier_lite_F : rhs_ins_base {
        //displayName = "Rifleman (Light)";
    };
    class rhs_g_Soldier_F2 : rhs_ins_base {
        //displayName = "Rifleman (AK-103)";
    };
    class rhs_g_Soldier_F3 : rhs_ins_base {
        //displayName = "Rifleman (AK74M)";
    };
    class rhs_g_Soldier_AT_F : rhs_ins_base {
        //displayName = "Rifleman (RPG-26)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_g_Soldier_GL_F : rhs_ins_base {
        //displayName = "Rifleman (GP-25)";
    };
    class rhs_g_Soldier_TL_F : rhs_g_Soldier_GL_F {
        //displayName = "Scout (GP-25)";
		ASR_AI_SKILL_INS1;
    };
    class rhs_g_Soldier_M_F : rhs_ins_base {
        //displayName = "Marksman";
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhs_g_Soldier_AR_F : rhs_ins_base {
        //displayName = "Machine Gunner";
    };
    class rhs_g_Soldier_AAR_F : rhs_ins_base {
        //displayName = "Machine Gunner Assistant";
    };
    class rhs_g_Soldier_LAT_F : rhs_ins_base {
        //displayName = "Grenadier (RPG-7V2)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhs_g_Soldier_AAT_F : rhs_ins_base {
        //displayName = "Grenadier Assistant";
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhs_g_Soldier_SL_F : rhs_ins_base {
        //displayName = "Sergeant";
		ASR_AI_SKILL_INS1;
    };
     class rhs_g_engineer_F : rhs_ins_base {
		ASR_AI_COST_LESS;
        ASR_AI_CAMO_FULL;
    };
   class rhs_g_Soldier_exp_F : rhs_ins_base {
        //displayName = "Bomber";
    };
    class rhs_g_Soldier_AA_F : rhs_ins_base {
        //displayName = "AA Specialist";
		ASR_AI_AMMOCOEF_AT;
    };

};
