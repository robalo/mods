class CfgVehicles {

    class Civilian_F;
    class LOP_AFR_Base_IND : Civilian_F {
		ASR_AI_SKILL_INS2;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AFR_Infantry_TL : LOP_AFR_Base_IND {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AFR_Infantry_SL : LOP_AFR_Base_IND {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AFR_Infantry_AT : LOP_AFR_Base_IND {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_AFR_Infantry_Marksman : LOP_AFR_Base_IND {
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_AFR_Infantry_IED : LOP_AFR_Base_IND {
        ASR_AI_CAMO_BASE;
    };

    class LOP_AFR_Civ_Base : Civilian_F {
		ASR_AI_SKILL_CIV1;
    };

    class PO_AFR_Civ_Soldier_Base : LOP_AFR_Civ_Base {
		ASR_AI_SKILL_CIV1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AFRCiv_Soldier_TL : PO_AFR_Civ_Soldier_Base {
		ASR_AI_SKILL_INS2;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AFRCiv_Soldier_SL : PO_AFR_Civ_Soldier_Base {
		ASR_AI_SKILL_INS2;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AFRCiv_Soldier_AT : PO_AFR_Civ_Soldier_Base {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_AFRCiv_Soldier_Marksman : PO_AFR_Civ_Soldier_Base {
		ASR_AI_SKILL_INS2;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_AFRCiv_Soldier_IED : PO_AFR_Civ_Soldier_Base {
        ASR_AI_CAMO_BASE;
    };

    class I_Soldier_base_F;
    class LOP_BH_Infantry_base : I_Soldier_base_F {
		ASR_AI_SKILL_INS2;
        ASR_AI_CAMO_BASE;
    };
    class LOP_BH_Infantry_Rifleman_lite : LOP_BH_Infantry_base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_BH_Infantry_SL : LOP_BH_Infantry_base {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_BH_Infantry_TL : LOP_BH_Infantry_base {
		ASR_AI_SKILL_INS1;
    };
    class LOP_BH_Infantry_IED : LOP_BH_Infantry_base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_BH_Infantry_Marksman : LOP_BH_Infantry_base {
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_BH_Infantry_AT : LOP_BH_Infantry_base {
		ASR_AI_AMMOCOEF_AT;
    };

    class rhs_infantry_msv_base;
    class LOP_UKR_Infantry_Base : rhs_infantry_msv_base {
		ASR_AI_SKILL_REG2;
        ASR_AI_CAMO_BASE;
    };
    class LOP_UKR_Infantry_Rifleman;
    class LOP_UKR_Infantry_LAT : LOP_UKR_Infantry_Rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_UKR_Infantry_RShG2 : LOP_UKR_Infantry_LAT {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_UKR_Infantry_Grenadier : LOP_UKR_Infantry_Rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class LOP_UKR_Infantry_Light : LOP_UKR_Infantry_Rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class LOP_UKR_Infantry_AR : LOP_UKR_Infantry_Rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class LOP_UKR_Infantry_RPG : LOP_UKR_Infantry_Rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_UKR_Infantry_RPG_Asst : LOP_UKR_Infantry_Rifleman {
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class LOP_UKR_Infantry_Marksman : LOP_UKR_Infantry_Rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_UKR_Infantry_sergeant : LOP_UKR_Infantry_Rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_UKR_Infantry_junior_sergeant : LOP_UKR_Infantry_sergeant {
        ASR_AI_CAMO_BASE;
    };
    class LOP_UKR_Infantry_officer_armored : LOP_UKR_Infantry_Rifleman {
        ASR_AI_CAMO_BASE;
    };
    class LOP_UKR_Infantry_AA : LOP_UKR_Infantry_RPG {
        ASR_AI_CAMO_BASE;
    };
    class LOP_UKR_Infantry_engineer : LOP_UKR_Infantry_Rifleman {
        ASR_AI_CAMO_BASE;
    };
    class LOP_UKR_Infantry_crew : LOP_UKR_Infantry_Rifleman {
        ASR_AI_CAMO_BASE;
    };
    class rhs_pilot_base;
    class LOP_UKR_Infantry_pilot : rhs_pilot_base {
        ASR_AI_CAMO_BASE;
    };


    class rhs_msv_rifleman;
    class LOP_US_Infantry_Base : rhs_msv_rifleman {
		ASR_AI_SKILL_INS2;
        ASR_AI_CAMO_BASE;
    };
    class LOP_US_Infantry_TL : LOP_US_Infantry_Base {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_US_Infantry_SL : LOP_US_Infantry_Base {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_US_Infantry_Officer : LOP_US_Infantry_Base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_US_Infantry_AT : LOP_US_Infantry_Base {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_US_Infantry_Marksman : LOP_US_Infantry_Base {
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_US_Infantry_AA : LOP_US_Infantry_Base {
		ASR_AI_AMMOCOEF_AT;
        ASR_AI_CAMO_BASE;
    };
    class LOP_US_Infantry_Crewman : LOP_US_Infantry_Base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_US_Infantry_Engineer : LOP_US_Infantry_Base {
        ASR_AI_CAMO_BASE;
    };

    class LOP_CHR_Civ_Villager_01 : Civilian_F {
		ASR_AI_SKILL_CIV1;
    };
    class LOP_CHR_Civ_Policeman_01 : Civilian_F {
		ASR_AI_SKILL_INS1;
    };

    class LOP_UVF_Infantry_base : I_Soldier_base_F {
		ASR_AI_SKILL_INS2;
        ASR_AI_CAMO_BASE;
    };
    class LOP_UVF_Infantry_Rifleman_lite : LOP_UVF_Infantry_base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_UVF_Infantry_SL : LOP_UVF_Infantry_base {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_UVF_Infantry_TL : LOP_UVF_Infantry_base {
		ASR_AI_SKILL_INS1;
    };
    class LOP_UVF_Infantry_IED : LOP_UVF_Infantry_base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_UVF_Infantry_Marksman : LOP_UVF_Infantry_base {
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_UVF_Infantry_AT : LOP_UVF_Infantry_base {
		ASR_AI_AMMOCOEF_AT;
    };

    class LOP_IRA_Infantry_base : I_Soldier_base_F {
		ASR_AI_SKILL_INS2;
        ASR_AI_CAMO_BASE;
    };
    class LOP_IRA_Infantry_Rifleman_lite : LOP_IRA_Infantry_base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_IRA_Infantry_SL : LOP_IRA_Infantry_base {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_IRA_Infantry_TL : LOP_IRA_Infantry_base {
		ASR_AI_SKILL_INS1;
    };
    class LOP_IRA_Infantry_IED : LOP_IRA_Infantry_base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_IRA_Infantry_Marksman : LOP_IRA_Infantry_base {
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_IRA_Infantry_AT : LOP_IRA_Infantry_base {
		ASR_AI_AMMOCOEF_AT;
    };


    class LOP_CDF_Infantry_Pilot : rhs_msv_rifleman {
		ASR_AI_SKILL_PIL1;
    };
    class LOP_TKA_Infantry_Pilot : rhs_msv_rifleman {
		ASR_AI_SKILL_PIL1;
    };

    class I_soldier_F;
    class LOP_RACS_Infantry_Marksman : I_soldier_F {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class I_crew_F;
    class LOP_RACS_Infantry_Pilot : I_crew_F {
		ASR_AI_SKILL_PIL1;
    };

    class LOP_UN_Infantry_Pilot : rhs_msv_rifleman {
		ASR_AI_SKILL_PIL1;
    };

    class LOP_SLA_Infantry_Pilot : rhs_msv_rifleman {
		ASR_AI_SKILL_PIL1;
    };

    class I_officer_F;
    class LOP_ChDKZ_Infantry_Bardak : I_officer_F {
		ASR_AI_SKILL_INS1;
    };
    class LOP_ChDKZ_Infantry_Commander : I_officer_F {
		ASR_AI_SKILL_INS1;
    };
    class I_Soldier_TL_F;
    class LOP_ChDKZ_Infantry_TL : I_Soldier_TL_F {
		ASR_AI_SKILL_INS1;
    };
    class I_medic_F;
    class LOP_ChDKZ_Infantry_Corpsman : I_medic_F {
		ASR_AI_SKILL_INS2;
    };
    class I_Soldier_SL_F;
    class LOP_ChDKZ_Infantry_SL : I_Soldier_SL_F {
		ASR_AI_SKILL_INS1;
    };
    class LOP_ChDKZ_Infantry_Rifleman : I_soldier_F {
		ASR_AI_SKILL_INS2;
    };
    class I_Soldier_GL_F;
    class LOP_ChDKZ_Infantry_GL : I_Soldier_GL_F {
		ASR_AI_SKILL_INS2;
    };
    class I_Soldier_AT_F;
    class LOP_ChDKZ_Infantry_AT : I_Soldier_AT_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_ChDKZ_Infantry_AT_Asst : I_Soldier_AT_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_AMMOCOEF_STANDARD;
    };
    class I_Soldier_AR_F;
    class LOP_ChDKZ_Infantry_MG : I_Soldier_AR_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_ChDKZ_Infantry_MG_Asst : I_Soldier_AR_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_ChDKZ_Infantry_Marksman : I_soldier_F {
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class I_engineer_F;
    class LOP_ChDKZ_Infantry_Engineer : I_engineer_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_ChDKZ_Infantry_Crewman : I_crew_F {
		ASR_AI_SKILL_INS2;
    };
    class I_helipilot_F;
    class LOP_ChDKZ_Infantry_Pilot : I_helipilot_F {
		ASR_AI_SKILL_PIL2;
    };


    class LOP_NAPA_Infantry_TL : I_Soldier_TL_F {
		ASR_AI_SKILL_INS1;
    };
    class LOP_NAPA_Infantry_Rifleman : I_soldier_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_NAPA_Infantry_Prizrak : I_soldier_F {
		ASR_AI_SKILL_INS1;
    };
    class LOP_NAPA_Infantry_SL : I_Soldier_SL_F {
		ASR_AI_SKILL_INS1;
    };
    class LOP_NAPA_Infantry_Corpsman : I_medic_F {
		ASR_AI_SKILL_INS2;
    };
    class I_Soldier_MG_F;
    class LOP_NAPA_Infantry_MG : I_Soldier_MG_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_NAPA_Infantry_AT : I_Soldier_AT_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_NAPA_Infantry_Marksman : I_soldier_F {
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_NAPA_Infantry_Engineer : I_engineer_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_NAPA_Infantry_GL : I_Soldier_GL_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_NAPA_Infantry_GL_2 : I_Soldier_GL_F {
		ASR_AI_SKILL_INS2;
    };


    class LOP_UA_Infantry_TL : I_Soldier_TL_F {
		ASR_AI_SKILL_INS1;
    };
    class LOP_UA_Infantry_SL : I_Soldier_SL_F {
		ASR_AI_SKILL_INS1;
    };
    class LOP_UA_Infantry_Corpsman : I_medic_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_UA_Officer : I_officer_F {
		ASR_AI_SKILL_INS1;
    };
    class LOP_UA_Infantry_MG : I_Soldier_AR_F {
		ASR_AI_SKILL_INS2;
    };
    class I_Soldier_A_F;
    class LOP_UA_Infantry_MG_Asst : I_Soldier_A_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_UA_Infantry_AT : I_Soldier_AT_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_UA_Infantry_AT_Asst : I_Soldier_A_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_UA_Infantry_Marksman : I_soldier_F {
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_UA_Infantry_Engineer : I_engineer_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_UA_Infantry_Rifleman : I_soldier_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_UA_Infantry_Rifleman_2 : I_soldier_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_UA_Infantry_Rifleman_3 : I_soldier_F {
		ASR_AI_SKILL_INS2;
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_UA_Infantry_GL : I_Soldier_GL_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_UA_Infantry_Crewman : I_crew_F {
		ASR_AI_SKILL_INS2;
    };
    class LOP_UA_Infantry_Pilot : I_helipilot_F {
		ASR_AI_SKILL_PIL2;
    };


    class PO_AA_Infantry_Base : I_Soldier_base_F {
		ASR_AI_SKILL_REG2;
        ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AA_Infantry_TL : PO_AA_Infantry_Base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AA_Infantry_SL : PO_AA_Infantry_Base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AA_Infantry_AT : PO_AA_Infantry_Base {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_AA_Infantry_Engineer : PO_AA_Infantry_Base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_AA_Infantry_Marksman : PO_AA_Infantry_Base {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_AA_Infantry_Crewman : PO_AA_Infantry_Base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_AA_Infantry_Rifleman;
    class LOP_AA_Infantry_Pilot : LOP_AA_Infantry_Rifleman {
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
    };
    class PO_AA_Police_Base : PO_AA_Infantry_Base {
		ASR_AI_SKILL_REG2;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AA_Police_TL : PO_AA_Police_Base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AA_Police_SL : PO_AA_Police_Base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };

    class PO_IA_Infantry_D_Base : I_Soldier_base_F {
		ASR_AI_SKILL_REG2;
        ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_CAMO_BASE;
    };
    class LOP_IA_Infantry_TL : PO_IA_Infantry_D_Base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_IA_Infantry_SL : PO_IA_Infantry_D_Base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_IA_Infantry_AT : PO_IA_Infantry_D_Base {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_IA_Infantry_Engineer : PO_IA_Infantry_D_Base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_IA_Infantry_Marksman : PO_IA_Infantry_D_Base {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_IA_Infantry_Crewman : PO_IA_Infantry_D_Base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_IA_Infantry_Pilot : PO_IA_Infantry_D_Base {
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
    };

    class PO_IA_Infantry_W_Base;
    class LOP_IA_Infantry_W_TL : PO_IA_Infantry_W_Base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_IA_Infantry_W_SL : PO_IA_Infantry_W_Base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_IA_Infantry_W_AT : PO_IA_Infantry_W_Base {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_IA_Infantry_W_Engineer : PO_IA_Infantry_W_Base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_IA_Infantry_W_Marksman : PO_IA_Infantry_W_Base {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_IA_Infantry_W_Crewman : PO_IA_Infantry_W_Base {
        ASR_AI_CAMO_BASE;
    };

    class PO_IA_Infantry_SF_Base : PO_IA_Infantry_D_Base {
		ASR_AI_SKILL_SOF2;
        ASR_AI_CAMO_BASE;
    };
    class PO_IA_Infantry_SF_TL : PO_IA_Infantry_SF_Base {
        ASR_AI_CAMO_BASE;
    };
    class PO_IA_Infantry_SF_SL : PO_IA_Infantry_SF_Base {
        ASR_AI_CAMO_BASE;
    };
    class PO_IA_Infantry_SF_AT : PO_IA_Infantry_SF_Base {
		ASR_AI_AMMOCOEF_AT;
    };
    class PO_IA_Infantry_SF_Mechanic : PO_IA_Infantry_SF_Base {
        ASR_AI_CAMO_BASE;
    };
    class PO_IA_Infantry_SF_Marksman : PO_IA_Infantry_SF_Base {
		ASR_AI_AMMOCOEF_SNIPER;
    };

    class PO_PESH_Infantry_Base : I_Soldier_base_F {
		ASR_AI_SKILL_INS2;
        ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_CAMO_BASE;
    };
    class LOP_PESH_Infantry_TL : PO_PESH_Infantry_Base {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_PESH_Infantry_SL : PO_PESH_Infantry_Base {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_PESH_Infantry_Rifleman_2 : PO_PESH_Infantry_Base {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_PESH_Infantry_AT : PO_PESH_Infantry_Base {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_PESH_Infantry_Engineer : PO_PESH_Infantry_Base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_PESH_Infantry_Marksman : PO_PESH_Infantry_Base {
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_PESH_Infantry_Sniper : PO_PESH_Infantry_Base {
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };

    class PO_PMC_Infantry_Base : I_Soldier_base_F {
		ASR_AI_SKILL_REG2;
        ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_CAMO_BASE;
    };
    class LOP_PMC_Infantry_TL : PO_PMC_Infantry_Base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_PMC_Infantry_SL : PO_PMC_Infantry_Base {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_PMC_Infantry_Rifleman_2 : PO_PMC_Infantry_Base {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_PMC_Infantry_AA : PO_PMC_Infantry_Base {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_PMC_Infantry_AT : PO_PMC_Infantry_Base {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_PMC_Infantry_Engineer : PO_PMC_Infantry_Base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_PMC_Infantry_Marksman : PO_PMC_Infantry_Base {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_PMC_Infantry_Crewman : PO_PMC_Infantry_Base {
        ASR_AI_CAMO_BASE;
    };
    class LOP_PMC_Infantry_Pilot : PO_PMC_Infantry_Base {
		ASR_AI_SKILL_PIL1;
        ASR_AI_CAMO_BASE;
    };

    class PO_AM_Infantry_Base_IND : I_Soldier_base_F {
		ASR_AI_SKILL_INS2;
        ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AM_Infantry_TL : PO_AM_Infantry_Base_IND {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AM_Infantry_SL : PO_AM_Infantry_Base_IND {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AM_Infantry_AT : PO_AM_Infantry_Base_IND {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_AM_Infantry_Marksman : PO_AM_Infantry_Base_IND {
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_AM_Infantry_Engineer : PO_AM_Infantry_Base_IND {
        ASR_AI_CAMO_BASE;
    };

    class PO_AM_Infantry_Base_OPF : PO_AM_Infantry_Base_IND {
        ASR_AI_CAMO_BASE;
    };
    class LOP_AM_OPF_Infantry_TL : PO_AM_Infantry_Base_OPF {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AM_OPF_Infantry_SL : PO_AM_Infantry_Base_OPF {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_AM_OPF_Infantry_AT : PO_AM_Infantry_Base_OPF {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_AM_OPF_Infantry_Marksman : PO_AM_Infantry_Base_OPF {
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_AM_OPF_Infantry_Engineer : PO_AM_Infantry_Base_OPF {
        ASR_AI_CAMO_BASE;
    };

    class PO_ISIS_Infantry_Base_IND : I_Soldier_base_F {
		ASR_AI_SKILL_INS2;
        ASR_AI_AMMOCOEF_STANDARD;
        ASR_AI_CAMO_BASE;
    };
    class LOP_ISTS_Infantry_TL : PO_ISIS_Infantry_Base_IND {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_ISTS_Infantry_SL : PO_ISIS_Infantry_Base_IND {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_ISTS_Infantry_AT : PO_ISIS_Infantry_Base_IND {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_ISTS_Infantry_Marksman : PO_ISIS_Infantry_Base_IND {
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_ISTS_Infantry_Engineer : PO_ISIS_Infantry_Base_IND {
        ASR_AI_CAMO_BASE;
    };
    class LOP_ISTS_Infantry_Rifleman_3 : PO_ISIS_Infantry_Base_IND {
		ASR_AI_AMMOCOEF_AT;
    };

    class PO_ISTS_Infantry_B_Base_IND : PO_ISIS_Infantry_Base_IND {
        ASR_AI_CAMO_BASE;
    };
    class LOP_ISTS_Infantry_B_TL : PO_ISTS_Infantry_B_Base_IND {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_ISTS_Infantry_B_SL : PO_ISTS_Infantry_B_Base_IND {
		ASR_AI_SKILL_INS1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_ISTS_Infantry_B_AT : PO_ISTS_Infantry_B_Base_IND {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_ISTS_Infantry_B_Marksman : PO_ISTS_Infantry_B_Base_IND {
		ASR_AI_SKILL_INS1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_ISTS_Infantry_B_Engineer : PO_ISTS_Infantry_B_Base_IND {
        ASR_AI_CAMO_BASE;
    };
    class LOP_ISTS_Infantry_B_Rifleman_3 : PO_ISTS_Infantry_B_Base_IND {
		ASR_AI_AMMOCOEF_AT;
    };

    class LOP_Tak_Civ_Man_01 : Civilian_F {
		ASR_AI_SKILL_CIV1;
    };


    class LOP_IRAN_Infantry_Base : rhs_infantry_msv_base {
		ASR_AI_SKILL_REG2;
        ASR_AI_CAMO_BASE;
    };
    class LOP_IRAN_Infantry_Rifleman;
    class LOP_IRAN_Infantry_LAT : LOP_IRAN_Infantry_Rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_IRAN_Infantry_Grenadier : LOP_IRAN_Infantry_Rifleman {
        ASR_AI_AMMOCOEF_STANDARD;
    };
    class LOP_IRAN_Infantry_Light : LOP_IRAN_Infantry_Rifleman {
        ASR_AI_AMMOCOEF_STANDARD;
    };
    class LOP_IRAN_Infantry_AR : LOP_IRAN_Infantry_Rifleman {
        ASR_AI_AMMOCOEF_STANDARD;
    };
    class LOP_IRAN_Infantry_RPG : LOP_IRAN_Infantry_Rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_IRAN_Infantry_RPG_Asst : LOP_IRAN_Infantry_Rifleman {
        ASR_AI_AMMOCOEF_STANDARD;
    };
    class LOP_IRAN_Infantry_Marksman : LOP_IRAN_Infantry_Rifleman {
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_IRAN_Infantry_sergeant : LOP_IRAN_Infantry_Rifleman {
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class LOP_IRAN_Infantry_junior_sergeant : LOP_IRAN_Infantry_sergeant {
        ASR_AI_CAMO_BASE;
    };
    class LOP_IRAN_Infantry_officer_armored : LOP_IRAN_Infantry_Rifleman {
        ASR_AI_CAMO_BASE;
    };
    class LOP_IRAN_Infantry_AA : LOP_IRAN_Infantry_RPG {
        ASR_AI_CAMO_BASE;
    };
    class LOP_IRAN_Infantry_engineer : LOP_IRAN_Infantry_Rifleman {
        ASR_AI_CAMO_BASE;
    };
    class LOP_IRAN_Infantry_crew : LOP_IRAN_Infantry_Rifleman {
        ASR_AI_CAMO_BASE;
    };
    class LOP_IRAN_Infantry_pilot : rhs_pilot_base {
        ASR_AI_CAMO_BASE;
    };

    class LOP_IRAN_Infantry_SF_Base : LOP_IRAN_Infantry_Base {
		ASR_AI_SKILL_SOF2;
        ASR_AI_CAMO_BASE;
    };
    class LOP_IRAN_Infantry_SF_Rifleman;
    class LOP_IRAN_Infantry_SF_LAT : LOP_IRAN_Infantry_SF_Rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_IRAN_Infantry_SF_AR : LOP_IRAN_Infantry_SF_Rifleman {
        ASR_AI_AMMOCOEF_STANDARD;
    };
    class LOP_IRAN_Infantry_SF_RPG : LOP_IRAN_Infantry_SF_Rifleman {
		ASR_AI_AMMOCOEF_AT;
    };
    class LOP_IRAN_Infantry_SF_RPG_Asst : LOP_IRAN_Infantry_SF_Rifleman {
        ASR_AI_AMMOCOEF_STANDARD;
    };
    class LOP_IRAN_Infantry_SF_Marksman : LOP_IRAN_Infantry_SF_Rifleman {
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class LOP_IRAN_Infantry_SF_sergeant : LOP_IRAN_Infantry_SF_Rifleman {
        ASR_AI_CAMO_BASE;
    };
    class LOP_IRAN_Infantry_SF_junior_sergeant : LOP_IRAN_Infantry_SF_sergeant {
        ASR_AI_CAMO_BASE;
    };
    class LOP_IRAN_Infantry_SF_engineer : LOP_IRAN_Infantry_SF_Rifleman {
        ASR_AI_CAMO_BASE;
    };

};
