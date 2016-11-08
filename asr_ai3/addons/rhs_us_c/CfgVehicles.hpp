class CfgVehicles {

	class SoldierWB;

//US Army

    class rhsusf_infantry_army_base : SoldierWB {
        //faction = "rhs_//faction_usarmy_d";
        //displayName = "Rifleman";
		minFireTime = 7;
        ASR_AI_CAMO_FULL;
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_COST_REG;
    };
    class rhsusf_army_ocp_rifleman;
    class rhsusf_army_ocp_riflemanl : rhsusf_army_ocp_rifleman {
        //displayName = "Rifleman (Light)";
        ASR_AI_CAMO_FULL;
        ASR_AI_COST_REG;
    };
    class rhsusf_army_ocp_riflemanat : rhsusf_army_ocp_rifleman {
        //displayName = "Rifleman (M136)";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_army_ocp_grenadier : rhsusf_infantry_army_base {
        //displayName = "Grenadier";
        ASR_AI_COST_REG;
    };
    class rhsusf_army_ocp_autorifleman : rhsusf_infantry_army_base {
        //displayName = "Auto Rifleman (M249)";
        ASR_AI_COST_REG;
    };
    class rhsusf_army_ocp_autoriflemana : rhsusf_army_ocp_rifleman {
        //displayName = "Auto Rifleman Ass.";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_army_ocp_machinegunner : rhsusf_army_ocp_autorifleman {
        //displayName = "Machine Gunner";
    };
    class rhsusf_army_ocp_machinegunnera : rhsusf_army_ocp_rifleman {
        //displayName = "Machine Gunner Assistant";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_army_ocp_marksman : rhsusf_infantry_army_base {
        //displayName = "Marksman";
		ASR_AI_SKILL_REG1;
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsusf_army_ocp_officer : rhsusf_infantry_army_base {
        //displayName = "Officer";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_army_ocp_squadleader : rhsusf_infantry_army_base {
        //displayName = "Squad Leader";
		ASR_AI_SKILL_REG1;
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_army_ocp_teamleader : rhsusf_infantry_army_base {
        //displayName = "Team Leader";
		ASR_AI_SKILL_REG1;
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_army_ocp_jfo : rhsusf_infantry_army_base {
        //faction = "rhs_//faction_usarmy_d";
        //displayName = "Joint Fires Observer";
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_SPECIAL;
    };
    class rhsusf_army_ocp_fso : rhsusf_army_ocp_jfo {
        //faction = "rhs_//faction_usarmy_d";
        //displayName = "Fire Support Officer";
		ASR_AI_COST_SPECIAL;
    };
    class rhsusf_army_ocp_javelin : rhsusf_army_ocp_riflemanat {
        //displayName = "AT Specialist (Javelin)";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_army_ocp_aa : rhsusf_army_ocp_riflemanat {
        //displayName = "AA Specialist (FIM-92F)";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_army_ocp_uav : rhsusf_army_ocp_rifleman {
        //displayName = "UAV Operator";
    };
    class rhsusf_army_ocp_medic : rhsusf_army_ocp_rifleman {
        //displayName = "Combat Medic";
    };
    class rhsusf_army_ocp_engineer : rhsusf_army_ocp_rifleman {
        //displayName = "Engineer";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_army_ocp_explosives : rhsusf_army_ocp_rifleman {
        //displayName = "Explosives Specialist";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_army_ocp_sniper : rhsusf_army_ocp_marksman {
        //displayName = "Sniper";
		minFireTime = 5;
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_FULL;
		ASR_AI_AMMOCOEF_SNIPER;
		ASR_AI_SKILL_SNP1;
    };
    class rhsusf_army_ocp_crewman : rhsusf_infantry_army_base {
        //displayName = "Crew";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_army_ocp_combatcrewman : rhsusf_army_ocp_crewman {
        //displayName = "Crew (Combat)";
    };
    class rhsusf_army_ocp_driver : rhsusf_infantry_army_base {
        //displayName = "Driver";
    };
    class rhsusf_army_ocp_helipilot : rhsusf_infantry_army_base {
        //displayName = "Helicopter Pilot";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
		ASR_AI_SKILL_PIL1;
    };
    class rhsusf_army_ocp_helicrew : rhsusf_army_ocp_helipilot {
        //displayName = "Helicopter Crew";
        ASR_AI_COST_REG;
    };

//USMC

    class rhsusf_infantry_usmc_base : rhsusf_infantry_army_base {
        //faction = "rhs_//faction_usmc_wd";
    };
    class rhsusf_usmc_marpat_wd_rifleman : rhsusf_infantry_usmc_base {
        //displayName = "Rifleman (M16)";
    };
    class rhsusf_usmc_marpat_wd_rifleman_m4 : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Rifleman (M4)";
    };
    class rhsusf_usmc_marpat_wd_rifleman_light : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Rifleman (Light)";
        ASR_AI_CAMO_FULL;
        ASR_AI_COST_REG;
    };
    class rhsusf_usmc_marpat_wd_riflemanat : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Rifleman (M136)";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_marpat_wd_rifleman_m590 : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Rifleman (M590)";
    };
    class rhsusf_usmc_marpat_wd_grenadier : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Grenadier";
        ASR_AI_COST_REG;
    };
    class rhsusf_usmc_marpat_wd_grenadier_m32 : rhsusf_usmc_marpat_wd_grenadier {
        //displayName = "Grenadier (M32)";
    };
    class rhsusf_usmc_marpat_wd_autorifleman : rhsusf_infantry_usmc_base {
        //displayName = "Auto Rifleman (M27)";
        ASR_AI_COST_REG;
    };
    class rhsusf_usmc_marpat_wd_autorifleman_m249 : rhsusf_usmc_marpat_wd_autorifleman {
        //displayName = "Auto Rifleman (M249)";
        ASR_AI_COST_REG;
    };
    class rhsusf_usmc_marpat_wd_autorifleman_m249_ass : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Auto Rifleman Ass.";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_usmc_marpat_wd_machinegunner : rhsusf_usmc_marpat_wd_autorifleman {
        //displayName = "Machine Gunner";
    };
    class rhsusf_usmc_marpat_wd_machinegunner_ass : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Machine Gunner Assistant";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_usmc_marpat_wd_officer : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Officer";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_usmc_marpat_wd_squadleader : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Squad Leader";
		ASR_AI_SKILL_REG1;
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_usmc_marpat_wd_teamleader : rhsusf_infantry_usmc_base {
        //displayName = "Team Leader";
		ASR_AI_SKILL_REG1;
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_usmc_marpat_wd_jfo : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Joint Fires Observer";
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_SPECIAL;
    };
    class rhsusf_usmc_marpat_wd_fso : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Fire Support Officer";
		ASR_AI_SKILL_REG1;
		ASR_AI_COST_SPECIAL;
    };
    class rhsusf_usmc_marpat_wd_smaw : rhsusf_usmc_marpat_wd_riflemanat {
        //displayName = "Assaultman";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_usmc_marpat_wd_javelin : rhsusf_usmc_marpat_wd_smaw {
        //displayName = "AT Missileman (Javelin)";
    };
    class rhsusf_usmc_marpat_wd_stinger : rhsusf_usmc_marpat_wd_smaw {
        //displayName = "AA Specialist (FIM-92F)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_marpat_wd_engineer : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Combat Engineer";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_usmc_marpat_wd_explosives : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "EOD Tech";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_usmc_marpat_wd_uav : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "UAV Operator";
    };
    class rhsusf_usmc_marpat_wd_marksman : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Designated Marksman";
		ASR_AI_SKILL_REG1;
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsusf_usmc_marpat_wd_spotter : rhsusf_usmc_marpat_wd_marksman {
        //displayName = "Scout Spotter";
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_FULL;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_SKILL_SOF2;
    };
    class rhsusf_usmc_marpat_wd_sniper : rhsusf_usmc_marpat_wd_marksman {
        //displayName = "Scout Sniper";
		minFireTime = 5;
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_FULL;
		ASR_AI_AMMOCOEF_SNIPER;
		ASR_AI_SKILL_SNP1;
    };
    class rhsusf_usmc_marpat_wd_crewman : rhsusf_infantry_usmc_base {
        //displayName = "Crew";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_usmc_marpat_wd_combatcrewman : rhsusf_usmc_marpat_wd_crewman {
        //displayName = "Crew (Combat)";
    };
    class rhsusf_usmc_marpat_wd_driver : rhsusf_infantry_usmc_base {
        //displayName = "Driver";
    };
    class rhsusf_usmc_marpat_wd_gunner : rhsusf_usmc_marpat_wd_driver {
        //displayName = "Gunner";
    };
    class rhsusf_usmc_marpat_wd_helipilot : rhsusf_infantry_usmc_base {
        //displayName = "Helicopter Pilot";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
		ASR_AI_SKILL_PIL1;
    };
    class rhsusf_usmc_marpat_wd_helicrew : rhsusf_usmc_marpat_wd_helipilot {
        //displayName = "Helicopter Crew";
        ASR_AI_COST_REG;
    };


// USMC LAR

    class rhsusf_usmc_lar_marpat_wd_rifleman : rhsusf_usmc_marpat_wd_rifleman {
        //displayName = "Scout (M4)";
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_lar_marpat_wd_rifleman_light : rhsusf_usmc_lar_marpat_wd_rifleman {
        //displayName = "Scout (M4/Light)";
        ASR_AI_CAMO_FULL;
        ASR_AI_COST_REG;
    };
    class rhsusf_usmc_lar_marpat_wd_riflemanat : rhsusf_usmc_lar_marpat_wd_rifleman {
        //displayName = "Scout (M136)";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_lar_marpat_wd_grenadier_m32 : rhsusf_usmc_lar_marpat_wd_rifleman {
        //displayName = "Scout (M32)";
        ASR_AI_COST_REG;
    };
    class rhsusf_usmc_lar_marpat_wd_autorifleman : rhsusf_infantry_usmc_base {
        //displayName = "Scout (M27)";
        ASR_AI_COST_REG;
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_lar_marpat_wd_squadleader : rhsusf_usmc_lar_marpat_wd_rifleman {
        //displayName = "Scout (Squad Leader)";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_usmc_lar_marpat_wd_teamleader : rhsusf_infantry_usmc_base {
        //displayName = "Scout (Team Leader)";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
		ASR_AI_SKILL_REG1;
    };
    class rhsusf_usmc_lar_marpat_wd_marksman : rhsusf_usmc_lar_marpat_wd_rifleman {
        //displayName = "Scout (Marksman)";
        ASR_AI_COST_REG;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsusf_usmc_lar_marpat_wd_crewman : rhsusf_infantry_usmc_base {
        //displayName = "Crew";
        ASR_AI_COST_REG;
        ASR_AI_CAMO_FULL;
		ASR_AI_SKILL_REG1;
    };


// USMC Recon

    class rhsusf_infantry_usmc_recon_base : rhsusf_infantry_usmc_base {
        //faction = "rhs_//faction_usmc_wd";
		minFireTime = 5;
        ASR_AI_CAMO_FULL;
		ASR_AI_COST_SPECIAL;
		ASR_AI_SKILL_SOF2;
    };
    class rhsusf_usmc_recon_marpat_wd_rifleman : rhsusf_infantry_usmc_recon_base {
        //displayName = "Rifleman";
    };
    class rhsusf_usmc_recon_marpat_wd_rifleman_at : rhsusf_infantry_usmc_recon_base {
        //displayName = "Rifleman (M136)";
		ASR_AI_COST_SPECIAL;
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_recon_marpat_wd_grenadier_m32 : rhsusf_usmc_recon_marpat_wd_rifleman {
		ASR_AI_COST_SPECIAL;
    };
    class rhsusf_usmc_recon_marpat_wd_autorifleman : rhsusf_infantry_usmc_recon_base {
        //displayName = "Auto Rifleman (M27)";
    };
    class rhsusf_usmc_recon_marpat_wd_machinegunner : rhsusf_infantry_usmc_recon_base {
        //displayName = "Machine Gunner";
    };
    class rhsusf_usmc_recon_marpat_wd_marksman : rhsusf_infantry_usmc_recon_base {
        //displayName = "Marksman";
		ASR_AI_COST_SPECIAL;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsusf_usmc_recon_marpat_wd_officer : rhsusf_infantry_usmc_recon_base {
        //displayName = "Officer";
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_usmc_recon_marpat_wd_teamleader : rhsusf_infantry_usmc_recon_base {
        //displayName = "Team Leader";
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_FULL;
    };

//USMC FR

    class rhsusf_infantry_usmc_fr_base : rhsusf_infantry_usmc_base {
        //faction = "rhs_//faction_usmc_wd";
        //displayName = "Rifleman";
		minFireTime = 5;
		ASR_AI_COST_SPECIAL;
		ASR_AI_SKILL_SOF2;
    };
    class rhsusf_usmc_fr_marpat_wd_rifleman : rhsusf_infantry_usmc_fr_base {
        //displayName = "Rifleman";
    };
    class rhsusf_usmc_fr_marpat_wd_light : rhsusf_usmc_fr_marpat_wd_rifleman {
        //displayName = "Rifleman (Light)";
    };
    class rhsusf_usmc_fr_marpat_wd_rifleman_cqb : rhsusf_usmc_fr_marpat_wd_rifleman {
        //displayName = "Rifleman (CQB)";
    };
    class rhsusf_usmc_fr_marpat_wd_riflemanat : rhsusf_usmc_fr_marpat_wd_rifleman {
        //displayName = "Rifleman (M136)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhsusf_usmc_fr_marpat_wd_rifleman_m590 : rhsusf_usmc_fr_marpat_wd_rifleman {
        //displayName = "Rifleman (M590)";
    };
    class rhsusf_usmc_fr_marpat_wd_grenadier : rhsusf_usmc_fr_marpat_wd_rifleman {
        //displayName = "Grenadier";
    };
    class rhsusf_usmc_fr_marpat_wd_autorifleman : rhsusf_usmc_fr_marpat_wd_rifleman {
        //displayName = "Auto Rifleman (M27)";
    };
    class rhsusf_usmc_fr_marpat_wd_autorifleman_m249 : rhsusf_usmc_fr_marpat_wd_rifleman {
        //displayName = "Auto Rifleman (M249)";
    };
    class rhsusf_usmc_fr_marpat_wd_autorifleman_m249_ass : rhsusf_usmc_fr_marpat_wd_rifleman {
        //displayName = "Auto Rifleman Ass.";
    };
    class rhsusf_usmc_fr_marpat_wd_machinegunner : rhsusf_usmc_fr_marpat_wd_rifleman {
        //displayName = "Machine Gunner";
    };
    class rhsusf_usmc_fr_marpat_wd_machinegunner_ass : rhsusf_usmc_fr_marpat_wd_rifleman {
        //displayName = "Machine Gunner Assistant";
    };
    class rhsusf_usmc_fr_marpat_wd_squadleader : rhsusf_usmc_fr_marpat_wd_rifleman {
        //displayName = "Squad Leader";
		ASR_AI_COST_SPECIAL;
    };
    class rhsusf_usmc_fr_marpat_wd_teamleader : rhsusf_infantry_usmc_fr_base {
        //displayName = "Team Leader";
		ASR_AI_COST_SPECIAL;
    };
    class rhsusf_usmc_fr_marpat_wd_engineer : rhsusf_usmc_fr_marpat_wd_rifleman {
        //displayName = "Combat Engineer";
    };
    class rhsusf_usmc_fr_marpat_wd_marksman : rhsusf_usmc_fr_marpat_wd_rifleman {
        //displayName = "Marksman";
		ASR_AI_COST_SPECIAL;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhsusf_usmc_fr_marpat_wd_spotter : rhsusf_usmc_fr_marpat_wd_marksman {
        //displayName = "Spotter";
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class rhsusf_usmc_fr_marpat_wd_sniper : rhsusf_usmc_fr_marpat_wd_marksman {
        //displayName = "Sniper";
		ASR_AI_SKILL_SNP1;
    };

// ARMY SF

    class rhsusf_socom_mc_uniform;
    class rhsusf_infantry_socom_armysf_base : rhsusf_socom_mc_uniform {
		minFireTime = 5;
        ASR_AI_CAMO_FULL;
		ASR_AI_COST_SPECIAL;
		ASR_AI_SKILL_SOF1;
    };


//MARSOC

    class rhsusf_socom_g3_m81_uniform;
    class rhsusf_infantry_socom_marsoc_base : rhsusf_socom_g3_m81_uniform {
        //displayName = "Rifleman";
		minFireTime = 5;
        ASR_AI_CAMO_FULL;
		ASR_AI_COST_SPECIAL;
		ASR_AI_SKILL_SOF1;
    };
    class rhsusf_socom_marsoc_cso : rhsusf_infantry_socom_marsoc_base {
        //displayName = "Operator";
    };
    class rhsusf_socom_marsoc_cso_cqb : rhsusf_infantry_socom_marsoc_base {};
    class rhsusf_socom_marsoc_cso_light : rhsusf_socom_marsoc_cso_cqb {
        //displayName = "Operator (Light)";
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_socom_marsoc_teamleader : rhsusf_infantry_socom_marsoc_base {
        //displayName = "Team Leader";
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_socom_marsoc_teamchief : rhsusf_socom_marsoc_teamleader {
        //displayName = "Team Chief";
		ASR_AI_COST_SPECIAL;
    };
    class rhsusf_socom_marsoc_elementleader : rhsusf_socom_marsoc_cso_cqb {
        //displayName = "Element leader";
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_socom_marsoc_jtac : rhsusf_infantry_socom_marsoc_base {
		ASR_AI_COST_SPECIAL;
    };
    class rhsusf_socom_marsoc_jfo : rhsusf_socom_marsoc_jtac {
        //displayName = "Joint Fires Observer";
		ASR_AI_COST_SPECIAL;
    };
    class rhsusf_socom_marsoc_cso_eod : rhsusf_infantry_socom_marsoc_base {
        //displayName = "EOD technician";
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_FULL;
        canDeactivateMines = 1;
    };
    class rhsusf_socom_marsoc_cso_mechanic : rhsusf_infantry_socom_marsoc_base {
        //displayName = "Mechanic";
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_FULL;
        engineer = 1;
    };
    class rhsusf_socom_marsoc_sarc : rhsusf_infantry_socom_marsoc_base {
		ASR_AI_COST_SPECIAL;
    };
    class rhsusf_socom_marsoc_spotter : rhsusf_infantry_socom_marsoc_base {
        //displayName = "Scout Spotter";
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_socom_marsoc_sniper : rhsusf_socom_marsoc_spotter {
        //displayName = "Scout Sniper";
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_FULL;
		ASR_AI_AMMOCOEF_SNIPER;
		ASR_AI_SKILL_SNP1;
    };
    class rhsusf_socom_marsoc_sniper_m107 : rhsusf_socom_marsoc_sniper {
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_FULL;
    };
    class rhsusf_socom_swcc_crewman;
    class rhsusf_socom_swcc_officer : rhsusf_socom_swcc_crewman {
		ASR_AI_COST_SPECIAL;
        ASR_AI_CAMO_FULL;
    };

//Navy

    class rhsusf_navy_marpat_wd_medic : rhsusf_usmc_marpat_wd_rifleman_m4 {
        //displayName = "Corpsman";
        //faction = "rhs_//faction_usn";
        ASR_AI_COST_REG;
    };
    class rhsusf_usmc_marpat_d_rifleman_m4;
    class rhsusf_navy_marpat_d_medic : rhsusf_usmc_marpat_d_rifleman_m4 {
        //displayName = "Corpsman";
        //faction = "rhs_//faction_usn";
        ASR_AI_COST_REG;
    };

    class rhsusf_navy_sarc_w : rhsusf_infantry_usmc_recon_base {
        //displayName = "SARC Medic";
        //faction = "rhs_//faction_usn";
		ASR_AI_COST_SPECIAL;
    };

//Air Force

    class rhsusf_airforce_jetpilot : rhsusf_usmc_marpat_wd_rifleman_m4 {
        //displayName = "Jet Pilot";
        ASR_AI_COST_REG;
		ASR_AI_CAMO_NONE;
		ASR_AI_SKILL_PIL1;
    };

};
