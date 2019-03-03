class CfgVehicles {

	#include "bags.hpp"

	class SoldierGB;

    class rhssaf_soldier_m10_base : SoldierGB {
		ASR_AI_SKILL_REG2;
		ASR_AI_AMMOCOEF_STANDARD;
		ASR_AI_MINFIRETIME;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_soldier_army_digital_base;
    class rhssaf_army_m10_digital_rifleman_m21;

    class rhssaf_army_m10_digital_rifleman_ammo : rhssaf_army_m10_digital_rifleman_m21 {
        //displayName = "RiflemanÂ (AmmoÂ Bearer)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_asst_mgun : rhssaf_army_m10_digital_rifleman_m21 {
        //displayName = "Asst.Â MachinegunnerÂ (M84)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_sq_lead : rhssaf_soldier_army_digital_base {
        //displayName = "SquadÂ Leader";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_sniper_m76 : rhssaf_soldier_army_digital_base {
        //displayName = "MarksmanÂ (M76)";
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhssaf_army_m10_digital_spotter : rhssaf_army_m10_digital_rifleman_m21 {
        //displayName = "Spotter";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_rifleman_at : rhssaf_soldier_army_digital_base {
        //displayName = "RiflemanÂ (AT)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhssaf_army_m10_digital_asst_spec_at : rhssaf_army_m10_digital_rifleman_m21 {
        //displayName = "Asst.Â MissileÂ SpecialistÂ (AT)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_asst_spec_aa : rhssaf_army_m10_digital_rifleman_m21 {
        //displayName = "Asst.Â MissileÂ SpecialistÂ (AA)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_medic : rhssaf_soldier_army_digital_base {
        //displayName = "FieldÂ Medic";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_repair : rhssaf_soldier_army_digital_base {
        //displayName = "RepairÂ Specialist";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_exp : rhssaf_soldier_army_digital_base {
        //displayName = "ExplosiveÂ Specialist";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_engineer : rhssaf_soldier_army_digital_base {
        //displayName = "Engineer";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_crew : rhssaf_soldier_army_digital_base {
        //displayName = "CrewmanÂ (Light)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_crew_armored : rhssaf_soldier_army_digital_base {
        //displayName = "CrewmanÂ (Armored)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_crew_armored_nco : rhssaf_soldier_army_digital_base {
        //displayName = "CrewÂ CommanderÂ (Armored)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_digital_officer : rhssaf_soldier_army_digital_base {
        //displayName = "Officer";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_soldier_army_oakleaf_summer_base;
    class rhssaf_army_m93_oakleaf_summer_rifleman_m21;

    class rhssaf_army_m93_oakleaf_summer_rifleman_ammo : rhssaf_army_m93_oakleaf_summer_rifleman_m21 {
        //displayName = "RiflemanÂ (AmmoÂ Bearer)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_asst_mgun : rhssaf_army_m93_oakleaf_summer_rifleman_m21 {
        //displayName = "Asst.Â MachinegunnerÂ (M84)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_sq_lead : rhssaf_soldier_army_oakleaf_summer_base {
        //displayName = "SquadÂ Leader";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_sniper_m76 : rhssaf_soldier_army_oakleaf_summer_base {
        //displayName = "MarksmanÂ (M76)";
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhssaf_army_m93_oakleaf_summer_spotter : rhssaf_army_m93_oakleaf_summer_rifleman_m21 {
        //displayName = "Spotter";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_rifleman_at : rhssaf_soldier_army_oakleaf_summer_base {
        //displayName = "RiflemanÂ (AT)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhssaf_army_m93_oakleaf_summer_asst_spec_at : rhssaf_army_m93_oakleaf_summer_rifleman_m21 {
        //displayName = "Asst.Â MissileÂ SpecialistÂ (AT)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_asst_spec_aa : rhssaf_army_m93_oakleaf_summer_rifleman_m21 {
        //displayName = "Asst.Â MissileÂ SpecialistÂ (AA)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_medic : rhssaf_soldier_army_oakleaf_summer_base {
        //displayName = "FieldÂ Medic";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_repair : rhssaf_soldier_army_oakleaf_summer_base {
        //displayName = "RepairÂ Specialist";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_exp : rhssaf_soldier_army_oakleaf_summer_base {
        //displayName = "ExplosiveÂ Specialist";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_engineer : rhssaf_soldier_army_oakleaf_summer_base {
        //displayName = "Engineer";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_crew : rhssaf_soldier_army_oakleaf_summer_base {
        //displayName = "CrewmanÂ (Light)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m93_oakleaf_summer_officer : rhssaf_soldier_army_oakleaf_summer_base {
        //displayName = "Officer";
        ASR_AI_CAMO_BASE;
    };
    
    class rhssaf_army_m10_para_rifleman_m21;
    class rhssaf_army_m10_para_rifleman_ammo : rhssaf_army_m10_para_rifleman_m21 {
        //displayName = "RiflemanÂ (AmmoÂ Bearer)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_asst_mgun_m84 : rhssaf_army_m10_para_rifleman_m21 {
        //displayName = "Asst.Â MachinegunnerÂ (M84)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_asst_mgun_minimi : rhssaf_army_m10_para_rifleman_m21 {
        //displayName = "Asst.Â MachinegunnerÂ (Minimi)";
        ASR_AI_CAMO_BASE;
    };

    class rhssaf_soldier_army_para_digital_base;
    class rhssaf_army_m10_para_sq_lead : rhssaf_soldier_army_para_digital_base {
        //displayName = "SquadÂ Leader";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_sniper_m76 : rhssaf_soldier_army_para_digital_base {
        //displayName = "MarksmanÂ (M76)";
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhssaf_army_m10_para_sniper_m82a1 : rhssaf_army_m10_para_sniper_m76 {
        //displayName = "SniperÂ (M82A1)";
		ASR_AI_SKILL_SNP1;
    };
    class rhssaf_army_m10_para_spotter : rhssaf_army_m10_para_rifleman_m21 {
        //displayName = "Spotter";
		ASR_AI_SKILL_SOF2;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_rifleman_at : rhssaf_soldier_army_para_digital_base {
        //displayName = "RiflemanÂ (AT)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhssaf_army_m10_para_asst_spec_at : rhssaf_army_m10_para_rifleman_m21 {
        //displayName = "Asst.Â MissileÂ SpecialistÂ (AT)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_asst_spec_aa : rhssaf_army_m10_para_rifleman_m21 {
        //displayName = "Asst.Â MissileÂ SpecialistÂ (AA)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_medic : rhssaf_soldier_army_para_digital_base {
        //displayName = "FieldÂ Medic";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_repair : rhssaf_soldier_army_para_digital_base {
        //displayName = "RepairÂ Specialist";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_exp : rhssaf_soldier_army_para_digital_base {
        //displayName = "ExplosiveÂ Specialist";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_engineer : rhssaf_soldier_army_para_digital_base {
        //displayName = "Engineer";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_crew : rhssaf_soldier_army_para_digital_base {
        //displayName = "CrewmanÂ (Light)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_army_m10_para_officer : rhssaf_soldier_army_para_digital_base {
        //displayName = "Officer";
        ASR_AI_CAMO_BASE;
    };

    class rhssaf_un_m10_digital_desert_rifleman_m21;
    class rhssaf_un_m10_digital_desert_rifleman_ammo : rhssaf_un_m10_digital_desert_rifleman_m21 {
        //displayName = "RiflemanÂ (AmmoÂ Bearer)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_asst_mgun : rhssaf_un_m10_digital_desert_rifleman_m21 {
        //displayName = "Asst.Â MachinegunnerÂ (M84)";
        ASR_AI_CAMO_BASE;
    };

    class rhssaf_soldier_un_desert_base;
    class rhssaf_un_m10_digital_desert_sq_lead : rhssaf_soldier_un_desert_base {
        //displayName = "SquadÂ Leader";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_sniper_m76 : rhssaf_soldier_un_desert_base {
        //displayName = "MarksmanÂ (M76)";
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhssaf_un_m10_digital_desert_spotter : rhssaf_un_m10_digital_desert_rifleman_m21 {
        //displayName = "Spotter";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_rifleman_at : rhssaf_soldier_un_desert_base {
        //displayName = "RiflemanÂ (AT)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhssaf_un_m10_digital_desert_asst_spec_at : rhssaf_un_m10_digital_desert_rifleman_m21 {
        //displayName = "Asst.Â MissileÂ SpecialistÂ (AT)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_asst_spec_aa : rhssaf_un_m10_digital_desert_rifleman_m21 {
        //displayName = "Asst.Â MissileÂ SpecialistÂ (AA)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_medic : rhssaf_soldier_un_desert_base {
        //displayName = "FieldÂ Medic";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_repair : rhssaf_soldier_un_desert_base {
        //displayName = "RepairÂ Specialist";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_exp : rhssaf_soldier_un_desert_base {
        //displayName = "ExplosiveÂ Specialist";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_engineer : rhssaf_soldier_un_desert_base {
        //displayName = "Engineer";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_crew : rhssaf_soldier_un_desert_base {
        //displayName = "CrewmanÂ (Light)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_desert_officer : rhssaf_soldier_un_desert_base {
        //displayName = "Officer";
        ASR_AI_CAMO_BASE;
    };

    class rhssaf_un_m10_digital_rifleman_m21;
    class rhssaf_un_m10_digital_rifleman_ammo : rhssaf_un_m10_digital_rifleman_m21 {
        //displayName = "RiflemanÂ (AmmoÂ Bearer)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_asst_mgun : rhssaf_un_m10_digital_rifleman_m21 {
        //displayName = "Asst.Â MachinegunnerÂ (M84)";
        ASR_AI_CAMO_BASE;
    };

    class rhssaf_soldier_un_digital_base;
    class rhssaf_un_m10_digital_sq_lead : rhssaf_soldier_un_digital_base {
        //displayName = "SquadÂ Leader";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_sniper_m76 : rhssaf_soldier_un_digital_base {
        //displayName = "MarksmanÂ (M76)";
		ASR_AI_SKILL_REG1;
		ASR_AI_AMMOCOEF_SNIPER;
    };
    class rhssaf_un_m10_digital_spotter : rhssaf_un_m10_digital_rifleman_m21 {
        //displayName = "Spotter";
		ASR_AI_SKILL_REG1;
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_rifleman_at : rhssaf_soldier_un_digital_base {
        //displayName = "RiflemanÂ (AT)";
		ASR_AI_AMMOCOEF_AT;
    };
    class rhssaf_un_m10_digital_asst_spec_at : rhssaf_un_m10_digital_rifleman_m21 {
        //displayName = "Asst.Â MissileÂ SpecialistÂ (AT)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_asst_spec_aa : rhssaf_un_m10_digital_rifleman_m21 {
        //displayName = "Asst.Â MissileÂ SpecialistÂ (AA)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_medic : rhssaf_soldier_un_digital_base {
        //displayName = "FieldÂ Medic";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_repair : rhssaf_soldier_un_digital_base {
        //displayName = "RepairÂ Specialist";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_exp : rhssaf_soldier_un_digital_base {
        //displayName = "ExplosiveÂ Specialist";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_engineer : rhssaf_soldier_un_digital_base {
        //displayName = "Engineer";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_crew : rhssaf_soldier_un_digital_base {
        //displayName = "CrewmanÂ (Light)";
        ASR_AI_CAMO_BASE;
    };
    class rhssaf_un_m10_digital_officer : rhssaf_soldier_un_digital_base {
        //displayName = "Officer";
        ASR_AI_CAMO_BASE;
    };
};
