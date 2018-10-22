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

    class SubmunitionBase;
    class rhs_ammo_30x173mm_GAU8_mixed : SubmunitionBase {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };
    class B_20mm;
    class rhs_ammo_20mm_AP : B_20mm {
        ASR_AI_AUDIBLE1;
    };

    class rhs_ammo_127x99_Ball;
    class rhs_ammo_127x99_Ball_Tracer_Red : rhs_ammo_127x99_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_ammo_127x99_Ball_Tracer_Green : rhs_ammo_127x99_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_ammo_127x99_Ball_Tracer_Yellow : rhs_ammo_127x99_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_ammo_127x99_SLAP;
    class rhs_ammo_127x99_SLAP_Tracer_Red : rhs_ammo_127x99_SLAP {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_ammo_127x99_SLAP_Tracer_Green : rhs_ammo_127x99_SLAP {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_ammo_127x99_SLAP_Tracer_Yellow : rhs_ammo_127x99_SLAP {
        ASR_AI_VISIBLE_TRACER;
    };

    class rhs_ammo_LWIRCM : BulletBase {
        ASR_AI_DANGER_RADIUS_TINY;
        ASR_AI_SUPPRESSION_BULLET_DEFAULT;
    };

    class Grenade;
    class rhsusf_ammo_L8A3_shell : Grenade {
        ASR_AI_DANGER_RADIUS_TINY;
        ASR_AI_SUPPRESSION_BULLET_DEFAULT;
    };

    class B_20mm_Tracer_Red;
    class rhsusf_ammo_M61A2 : B_20mm_Tracer_Red {
        ASR_AI_AUDIBLE1;
    };

    class B_556x45_Ball;
    class rhs_ammo_556x45_M855A1_Ball : B_556x45_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_ammo_556x45_M855A1_Ball_Red : rhs_ammo_556x45_M855A1_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_M855A1_Ball_Green : rhs_ammo_556x45_M855A1_Ball_Red {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_M855A1_Ball_Yellow : rhs_ammo_556x45_M855A1_Ball_Red {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_M855A1_Ball_Orange : rhs_ammo_556x45_M855A1_Ball_Red {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_M855_Ball : B_556x45_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_ammo_556x45_M855_Ball_Red : rhs_ammo_556x45_M855_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_M855_Ball_Green : rhs_ammo_556x45_M855_Ball_Red {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_M855_Ball_Yellow : rhs_ammo_556x45_M855_Ball_Red {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_M855_Ball_Orange : rhs_ammo_556x45_M855_Ball_Red {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_ammo_556x45_Mk318_Ball : B_556x45_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_ammo_556x45_Mk262_Ball : B_556x45_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_ammo_556x45_blank : B_556x45_Ball {
        ASR_AI_VISIBLE_NONE;
        ASR_AI_AUDIBLE0;
    };
    class rhs_ammo_762x51_M80_Ball : BulletBase {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class rhs_ammo_762x51_M62_tracer : rhs_ammo_762x51_M80_Ball {
        ASR_AI_VISIBLE_TRACER;
    };

    class rhs_ammo_m576_buckshot;
    class rhs_ammo_doomsday_buckshot : rhs_ammo_m576_buckshot {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };
    class B_12Gauge_Slug;
    class rhs_ammo_12g_FRAG : B_12Gauge_Slug {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };

    class rhs_ammo_45ACP_MHP : BulletBase {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class rhs_ammo_45ACP_MHPT_Orange : rhs_ammo_45ACP_MHP {
        ASR_AI_VISIBLE_TRACER;
    };
    class rhs_ammo_9x19_FMJ : BulletBase {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class rhs_ammo_9x19_JHP : BulletBase {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class rhs_ammo_46x30_FMJ : rhs_ammo_556x45_M855A1_Ball {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };

    class RocketBase;
    class rhs_ammo_M136_rocket : RocketBase {
        ASR_AI_AUDIBLE1;
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
        ASR_AI_AUDIBLE1;
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };
    class rhs_ammo_maaws_HEDP : RocketBase {
        airLock = 1;
        ASR_AI_AUDIBLE1;
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveArmour;
    };
    class rhs_ammo_maaws_HE : RocketBase {
        airLock = 1;
        ASR_AI_AUDIBLE1;
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir;
    };
    class rhs_ammo_maaws_SMOKE : RocketBase {
        ASR_AI_AUDIBLE1;
		aiAmmoUsageFlags = AIAmmoUsageConcealment;
        ASR_AI_DANGER_RADIUS_TINY;
        ASR_AI_SUPPRESSION_BULLET_DEFAULT;
    };
    class rhs_ammo_maaws_ILLUM : RocketBase {
        ASR_AI_AUDIBLE1;
		aiAmmoUsageFlags = AIAmmoUsageLight;
        ASR_AI_DANGER_RADIUS_TINY;
        ASR_AI_SUPPRESSION_BULLET_DEFAULT;
    };
};