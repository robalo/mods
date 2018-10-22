#define AIAmmoUsageNone 0
#define AIAmmoUsageLight 1
#define AIAmmoUsageMarking 2
#define AIAmmoUsageConcealment 4
#define AIAmmoUsageCountermeasures 8
#define AIAmmoUsageMine 16
#define AIAmmoUsageUnderwater 32
#define AIAmmoUsageOffensiveInf 64
#define AIAmmoUsageOffensiveVeh 128
#define AIAmmoUsageOffensiveAir 256
#define AIAmmoUsageOffensiveArmour 512

class CfgAmmo {
    class BulletBase;

    class B_9x21_Ball;
    class rhs_ammo_9x17 : B_9x21_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_B_762x39_Ball;
    class rhssaf_ammo_762x39_m82_api : rhs_B_762x39_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class B_556x45_Ball;
    class rhssaf_ammo_556x45_EPR : B_556x45_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhssaf_ammo_556x45_EPR_Tracer : rhssaf_ammo_556x45_EPR {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhssaf_ammo_556x45_SOST : B_556x45_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhssaf_ammo_556x45_SPR : B_556x45_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class B_556x45_Ball_Tracer_Red;
    class rhssaf_ammo_556x45_Ball_Tracer_Dim : B_556x45_Ball_Tracer_Red {
        ASR_AI_VISIBLE_SMALL;
    };
    class rhs_ammo_792x57_Ball : BulletBase {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class GrenadeBase;
    class rhssaf_ammo_ttm_m60 : GrenadeBase {
        ASR_AI_AUDIBLE1;
    };
    class rhssaf_ammo_tkm_m60 : GrenadeBase {
        ASR_AI_AUDIBLE1;
    };
};
