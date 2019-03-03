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

#define __DANGER_RADIUS_LARGE dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS; dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR
#define __DANGER_RADIUS_MEDIUM dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS; dangerRadiusHit = __AI_AMMO_RANGE_HIT_MEDIUM
#define __DANGER_RADIUS_SMALL dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS; dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL
#define __DANGER_RADIUS_TINY dangerRadiusBulletClose = 1; dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL
#define __AUDIBLE0 audibleFire = __AI_AMMO_AUDIBLE0
#define __AUDIBLE1 audibleFire = __AI_AMMO_AUDIBLE1
#define __VISIBLE_NONE visibleFire = 1
#define __VISIBLE_SMALL visibleFire = 4
#define __VISIBLE_TRACER visibleFire = 8
#define __SUPPRESSION_BULLET_LOUD suppressionRadiusBulletClose = 8; suppressionRadiusHit = 12
#define __SUPPRESSION_BULLET_QUIET suppressionRadiusBulletClose = 0; suppressionRadiusHit = 12
#define __SUPPRESSION_BULLET_DEFAULT suppressionRadiusBulletClose = -1; suppressionRadiusHit = -1

class CfgAmmo {
    class BulletBase;
    class SubmunitionBase;
    class RocketBase;

    class rhs_laserbeam_fcs : BulletBase {
        visibleFire = 0;
        audibleFire = 0;
        dangerRadiusBulletClose = -1;
        dangerRadiusHit = -1;
        __SUPPRESSION_BULLET_DEFAULT;
    };
    class rhs_ammo_30x173mm_GAU8_mixed : SubmunitionBase {
       __DANGER_RADIUS_MEDIUM;
    };

    class rhs_ammo_127x99_Ball;
    class rhs_ammo_127x99_Ball_Tracer_Red : rhs_ammo_127x99_Ball {
        __VISIBLE_TRACER;
    };
    class rhs_ammo_127x99_Ball_Tracer_Green : rhs_ammo_127x99_Ball {
        __VISIBLE_TRACER;
    };
    class rhs_ammo_127x99_Ball_Tracer_Yellow : rhs_ammo_127x99_Ball {
        __VISIBLE_TRACER;
    };
    class rhs_ammo_127x99_SLAP;
    class rhs_ammo_127x99_SLAP_Tracer_Red : rhs_ammo_127x99_SLAP {
        __VISIBLE_TRACER;
    };
    class rhs_ammo_127x99_SLAP_Tracer_Green : rhs_ammo_127x99_SLAP {
        __VISIBLE_TRACER;
    };
    class rhs_ammo_127x99_SLAP_Tracer_Yellow : rhs_ammo_127x99_SLAP {
        __VISIBLE_TRACER;
    };

    class Grenade;
    class rhsusf_ammo_L8A3_shell : Grenade {
        __DANGER_RADIUS_TINY;
        __SUPPRESSION_BULLET_DEFAULT;
    };

    class B_556x45_Ball;
    class rhs_ammo_556x45_M855A1_Ball : B_556x45_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_ammo_556x45_M855A1_Ball_Red : rhs_ammo_556x45_M855A1_Ball {
        __VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_M855A1_Ball_Green : rhs_ammo_556x45_M855A1_Ball_Red {
        __VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_M855A1_Ball_Yellow : rhs_ammo_556x45_M855A1_Ball_Red {
        __VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_M855A1_Ball_Orange : rhs_ammo_556x45_M855A1_Ball_Red {
        __VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_M855_Ball : B_556x45_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_ammo_556x45_M855_Ball_Red : rhs_ammo_556x45_M855_Ball {
        __VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_M855_Ball_Green : rhs_ammo_556x45_M855_Ball_Red {
        __VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_M855_Ball_Yellow : rhs_ammo_556x45_M855_Ball_Red {
        __VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_M855_Ball_Orange : rhs_ammo_556x45_M855_Ball_Red {
        __VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_Mk318_Ball : B_556x45_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_ammo_556x45_Mk262_Ball : B_556x45_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_ammo_556x45_blank : B_556x45_Ball {
        __VISIBLE_NONE;
        __AUDIBLE0;
    };
    class rhs_ammo_762x51_M80_Ball : BulletBase {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_ammo_762x51_M62_tracer : rhs_ammo_762x51_M80_Ball {
        __VISIBLE_TRACER;
    };

    class rhs_ammo_45ACP_MHP : BulletBase {
        __VISIBLE_SMALL;
        __AUDIBLE1;
        __SUPPRESSION_BULLET_LOUD;
    };
    class rhs_ammo_45ACP_MHPT_Orange : rhs_ammo_45ACP_MHP {
        __VISIBLE_TRACER;
    };
    class rhs_ammo_9x19_FMJ : BulletBase {
        __VISIBLE_SMALL;
        __AUDIBLE1;
        __SUPPRESSION_BULLET_LOUD;
    };
    class rhs_ammo_9x19_JHP : BulletBase {
        __VISIBLE_SMALL;
        __AUDIBLE1;
        __SUPPRESSION_BULLET_LOUD;
    };
    class rhs_ammo_46x30_FMJ : rhs_ammo_556x45_M855A1_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
        __SUPPRESSION_BULLET_LOUD;
    };

    class rhs_ammo_M136_rocket : RocketBase {
        __AUDIBLE1;
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };
    class rhs_ammo_M_fgm172a_AT;
    class rhs_ammo_M_fgm172b_MPV : rhs_ammo_M_fgm172a_AT {
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir;
    };
    class rhs_ammo_smaw_HEAA : RocketBase {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };
    class rhs_ammo_smaw_HEDP : RocketBase {
        airLock = 1;
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveAir;
    };
    class rhs_ammo_smaw_SR : RocketBase {
		aiAmmoUsageFlags = AIAmmoUsageMarking;
    };
    class rhs_ammo_maaws_HEAT : RocketBase {
        __AUDIBLE1;
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };
    class rhs_ammo_maaws_HEDP : RocketBase {
        airLock = 1;
        __AUDIBLE1;
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveArmour;
    };
    class rhs_ammo_maaws_HE : RocketBase {
        airLock = 1;
        __AUDIBLE1;
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir;
    };
    class rhs_ammo_maaws_SMOKE : RocketBase {
        __AUDIBLE1;
		aiAmmoUsageFlags = AIAmmoUsageConcealment;
        __DANGER_RADIUS_TINY;
        __SUPPRESSION_BULLET_DEFAULT;
    };
    class rhs_ammo_maaws_ILLUM : RocketBase {
        __AUDIBLE1;
		aiAmmoUsageFlags = AIAmmoUsageLight;
        __DANGER_RADIUS_TINY;
        __SUPPRESSION_BULLET_DEFAULT;
    };

    class rhs_ammo_3d17_shell : Grenade {
        __SUPPRESSION_BULLET_DEFAULT;
    };
    class rhs_ammo_VOG30 : G_40mm_HE {
        __DANGER_RADIUS_MEDIUM;
    };

    class rhs_B_545x39_Ball : B_556x45_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_B_545x39_7N6_Ball : rhs_B_545x39_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_B_545x39_7N10_Ball : rhs_B_545x39_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_B_545x39_7N22_Ball : rhs_B_545x39_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_B_545x39_7N24_Ball : rhs_B_545x39_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_B_545x39_7U1_Ball : rhs_B_545x39_Ball {
        __VISIBLE_NONE;
        __AUDIBLE0;
        __DANGER_RADIUS_TINY;
        __SUPPRESSION_BULLET_QUIET;
    };
    class rhs_B_545x39_Ball_Tracer_Green : rhs_B_545x39_Ball {
        __VISIBLE_TRACER;
    };
    class rhs_B_762x54_Ball : B_762x51_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_B_762x54_Ball_Tracer_Green : rhs_B_762x54_Ball {
        __VISIBLE_TRACER;
    };
    class rhs_B_762x39_Ball : B_762x51_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_B_762x39_Tracer : rhs_B_762x39_Ball {
        __VISIBLE_TRACER;
    };
    class rhs_B_762x39_U_Ball : rhs_B_762x39_Ball {
        __VISIBLE_NONE;
        __AUDIBLE0;
        __DANGER_RADIUS_TINY;
        __SUPPRESSION_BULLET_QUIET;
    };
    class rhs_B_9x39_SP5 : rhs_B_762x39_Ball {
        __VISIBLE_NONE;
        __AUDIBLE0;
        __DANGER_RADIUS_TINY;
        __SUPPRESSION_BULLET_QUIET;
    };

    class rhs_g_vog25;
    class rhs_g_gdm40 : rhs_g_vog25 {
        __SUPPRESSION_BULLET_DEFAULT;
    };
    class rhs_g_vg40md_white : rhs_g_vog25 {
        __SUPPRESSION_BULLET_DEFAULT;
    };

    class R_PG32V_F;
    class rhs_rpg26_rocket : R_PG32V_F {
        __AUDIBLE1;
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveArmour;
    };
    class rhs_rpg7v2_pg7vl : rhs_rpg26_rocket {
        __AUDIBLE1;
    };
    class rhs_rpg7v2_tbg7v : rhs_rpg7v2_pg7vl {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh;
    };

    class B_9x21_Ball;
    class rhs_B_9x19_7N21 : B_9x21_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_B_9x18_57N181S : B_9x21_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_B_9x21_7N28 : B_9x21_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_B_9x21_7N29 : B_9x21_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_B_9x21_7BT3 : B_9x21_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };

    class rhs_ammo_20mm_AP;
    class rhs_ammo_20x139mm_AP : rhs_ammo_20mm_AP {
        __DANGER_RADIUS_MEDIUM;
    };
    class rhs_ammo_20x139mm_HE : rhs_ammo_20x139mm_AP {
        __DANGER_RADIUS_MEDIUM;
    };

    class rhs_ammo_9x17 : B_9x21_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_ammo_762x25_Ball : BulletBase {
        __VISIBLE_SMALL;
        __AUDIBLE1;
        __SUPPRESSION_BULLET_LOUD;
    };
    class rhs_ammo_8mm_mhp : BulletBase {
        __VISIBLE_SMALL;
        __AUDIBLE1;
        __SUPPRESSION_BULLET_LOUD;
    };
    class rhs_ammo_792x57_Ball : BulletBase {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_ammo_75x55_Ball : BulletBase {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_ammo_762x63_M2B_ball : BulletBase {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhs_ammo_762x63_M1T_tracer : BulletBase {
        __VISIBLE_TRACER;
        __AUDIBLE1;
    };
    class rhs_ammo_792x33_SmE_ball : BulletBase {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };

    class rhs_ammo_rpg75_rocket : R_PG32V_F {
        __AUDIBLE1;
    };
    class rhs_ammo_panzerfaust60_rocket : R_PG32V_F {
        __AUDIBLE1;
        aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };

    class rhssaf_ammo_762x39_m82_api : rhs_B_762x39_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhssaf_ammo_556x45_EPR : B_556x45_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhssaf_ammo_556x45_EPR_Tracer : rhssaf_ammo_556x45_EPR {
        __VISIBLE_TRACER;
    };
    class rhssaf_ammo_556x45_SOST : B_556x45_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhssaf_ammo_556x45_SPR : B_556x45_Ball {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhssaf_ammo_556x45_Ball_Tracer_Dim : B_556x45_Ball_Tracer_Red {
        __VISIBLE_SMALL;
    };
    class rhssaf_ammo_ttm_m60 : GrenadeBase {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
    class rhssaf_ammo_tkm_m60 : GrenadeBase {
        __VISIBLE_SMALL;
        __AUDIBLE1;
    };
};
