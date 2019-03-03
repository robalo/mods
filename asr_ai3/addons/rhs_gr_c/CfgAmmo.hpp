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
    class rhs_ammo_20mm_AP;
    class rhs_ammo_20x139mm_AP : rhs_ammo_20mm_AP {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };
    class rhs_ammo_20x139mm_HE : rhs_ammo_20x139mm_AP {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };
    class B_9x21_Ball;
    class rhs_ammo_9x17 : B_9x21_Ball {
        ASR_AI_AUDIBLE1;
        ASR_AI_VISIBLE_SMALL;
    };
    class rhs_ammo_762x25_Ball : BulletBase {
        ASR_AI_AUDIBLE1;
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class rhs_ammo_8mm_mhp : BulletBase {
        ASR_AI_AUDIBLE0;
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_QUIET;
    };
    class rhs_ammo_792x57_Ball : BulletBase {
        ASR_AI_AUDIBLE1;
        ASR_AI_VISIBLE_SMALL;
    };
    class rhs_ammo_75x55_Ball : BulletBase {
        ASR_AI_AUDIBLE1;
        ASR_AI_VISIBLE_SMALL;
    };
    class rhs_ammo_762x63_M2B_ball : BulletBase {
        ASR_AI_AUDIBLE1;
        ASR_AI_VISIBLE_SMALL;
    };
    class rhs_ammo_762x63_M1T_tracer : BulletBase {
        ASR_AI_AUDIBLE1;
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_ammo_792x33_SmE_ball : BulletBase {
        ASR_AI_AUDIBLE1;
        ASR_AI_VISIBLE_SMALL;
    };
    class R_PG32V_F;
    class rhs_ammo_rpg75_rocket : R_PG32V_F {
        ASR_AI_AUDIBLE1;
    };
    class rhs_ammo_panzerfaust60_rocket : R_PG32V_F {
        ASR_AI_AUDIBLE1;
        aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };
};
