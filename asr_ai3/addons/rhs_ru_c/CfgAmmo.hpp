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
    class rhs_laserbeam_fcs : BulletBase {
        visibleFire = 0;
        audibleFire = 0;
        dangerRadiusBulletClose = -1;
        dangerRadiusHit = -1;
        ASR_AI_SUPPRESSION_BULLET_DEFAULT;
    };

    class Grenade;
    class rhs_ammo_3d17_shell : Grenade {
        ASR_AI_SUPPRESSION_BULLET_DEFAULT;
    };
    class G_40mm_HE;
    class rhs_ammo_VOG30 : G_40mm_HE {
        ASR_AI_DANGER_RADIUS_MEDIUM;
    };

    class B_556x45_Ball;
    class rhs_B_545x39_Ball : B_556x45_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_B_545x39_7N6_Ball : rhs_B_545x39_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_B_545x39_7N10_Ball : rhs_B_545x39_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_B_545x39_7N22_Ball : rhs_B_545x39_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_B_545x39_7N24_Ball : rhs_B_545x39_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_B_545x39_7U1_Ball : rhs_B_545x39_Ball {
        ASR_AI_VISIBLE_NONE;
        ASR_AI_AUDIBLE0;
        ASR_AI_DANGER_RADIUS_TINY;
        ASR_AI_SUPPRESSION_BULLET_QUIET;
    };
    class rhs_B_545x39_Ball_Tracer_Green : rhs_B_545x39_Ball {
        ASR_AI_VISIBLE_TRACER;
    };

    class B_762x51_Ball;
    class rhs_B_762x54_Ball : B_762x51_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_B_762x54_Ball_Tracer_Green : rhs_B_762x54_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_B_762x39_Ball : B_762x51_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_B_762x39_Tracer : rhs_B_762x39_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_B_762x39_U_Ball : rhs_B_762x39_Ball {
        ASR_AI_VISIBLE_NONE;
        ASR_AI_AUDIBLE0;
        ASR_AI_DANGER_RADIUS_TINY;
        ASR_AI_SUPPRESSION_BULLET_QUIET;
    };
    class rhs_B_9x39_SP5 : rhs_B_762x39_Ball {
        ASR_AI_VISIBLE_NONE;
        ASR_AI_AUDIBLE0;
        ASR_AI_DANGER_RADIUS_TINY;
        ASR_AI_SUPPRESSION_BULLET_QUIET;
    };

    class rhs_g_vog25;
    class rhs_g_gdm40 : rhs_g_vog25 {
        ASR_AI_SUPPRESSION_BULLET_DEFAULT;
    };
    class rhs_g_vg40md_white : rhs_g_vog25 {
        ASR_AI_SUPPRESSION_BULLET_DEFAULT;
    };

    class R_PG32V_F;
    class rhs_rpg26_rocket : R_PG32V_F {
        ASR_AI_AUDIBLE1;
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveArmour;
    };
    class rhs_rpg7v2_pg7vl : rhs_rpg26_rocket {
        ASR_AI_AUDIBLE1;
    };
    class rhs_rpg7v2_tbg7v : rhs_rpg7v2_pg7vl {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh;
    };

    class B_9x21_Ball;
    class rhs_B_9x19_7N21 : B_9x21_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_B_9x18_57N181S : B_9x21_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_B_9x21_7N28 : B_9x21_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_B_9x21_7N29 : B_9x21_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_B_9x21_7BT3 : B_9x21_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
};
