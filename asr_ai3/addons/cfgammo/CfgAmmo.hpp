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
    class Default {
/*
        airLock = 0;
        visibleFire = 0;
        audibleFire = 0;
        suppressionRadiusBulletClose = -1;
        suppressionRadiusHit = -1;
        dangerRadiusBulletClose = -1;
        dangerRadiusHit = -1;
*/
    };
    class FlareCore;
    class FlareBase : FlareCore {
        ASR_AI_VISIBLE_TRACER;
        visibleFireTime = 2;
        ASR_AI_DANGER_RADIUS_SMALL;
        aiAmmoUsageFlags = AIAmmoUsageLight;
    };
    class BulletCore;
    class BulletBase : BulletCore {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class ShotgunCore;
    class ShotgunBase : ShotgunCore {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class Grenade : Default {
        cost = 10;
    };
    class GrenadeBase;
    class G_40mm_HE : GrenadeBase {
        ASR_AI_DANGER_RADIUS_MEDIUM;
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh;
    };
    class ShellCore;
    class ShellBase : ShellCore {
        ASR_AI_DANGER_RADIUS_LARGE;
    };
    class B_556x45_Ball : BulletBase {
        ASR_AI_AUDIBLE1;
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class B_556x45_Ball_Tracer_Red : B_556x45_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_556x45_Ball_Tracer_Green : B_556x45_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_556x45_Ball_Tracer_Yellow : B_556x45_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_556x45_dual : B_556x45_Ball {
        ASR_AI_AUDIBLE0;
        ASR_AI_DANGER_RADIUS_TINY;
        ASR_AI_SUPPRESSION_BULLET_QUIET;
    };
    class B_65x39_Caseless : BulletBase {
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class B_65x39_Caseless_green : B_65x39_Caseless {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_65x39_Caseless_yellow : B_65x39_Caseless {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_65x39_Case : B_65x39_Caseless {};
    class B_65x39_Case_green : B_65x39_Case {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_65x39_Case_yellow : B_65x39_Case {
        ASR_AI_VISIBLE_TRACER;
    };
    class SubmunitionBullet;
    class B_65x39_Minigun_Caseless : SubmunitionBullet {
        ASR_AI_VISIBLE_TRACER;
        ASR_AI_AUDIBLE1;
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class B_65x39_Minigun_Caseless_Red_splash : B_65x39_Caseless {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_762x51_Ball : BulletBase {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class B_762x51_Tracer_Red : B_762x51_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_762x51_Tracer_Green : B_762x51_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_762x51_Tracer_Yellow : B_762x51_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_762x54_Ball : B_762x51_Ball {};
    class B_762x54_Tracer_Red : B_762x54_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_762x54_Tracer_Green : B_762x54_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_762x54_Tracer_Yellow : B_762x54_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_762x51_Minigun_Tracer_Red : SubmunitionBullet {
        ASR_AI_VISIBLE_TRACER;
        ASR_AI_AUDIBLE1;
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class B_762x51_Minigun_Tracer_Red_splash : B_762x51_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_9x21_Ball : BulletBase {
        ASR_AI_AUDIBLE1;
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class B_9x21_Ball_Tracer_Green : B_9x21_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_408_Ball : BulletBase {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
    };
    class B_127x99_Ball : BulletBase {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class B_127x99_Ball_Tracer_Red : B_127x99_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_127x99_Ball_Tracer_Green : B_127x99_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_127x99_Ball_Tracer_Yellow : B_127x99_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_127x99_SLAP : B_127x99_Ball {};
    class B_127x99_SLAP_Tracer_Red : B_127x99_SLAP {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_127x99_SLAP_Tracer_Green : B_127x99_SLAP {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_127x99_SLAP_Tracer_Yellow : B_127x99_SLAP {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_127x108_Ball : BulletBase {
        ASR_AI_VISIBLE_SMALL;
        ASR_AI_AUDIBLE1;
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class B_19mm_HE : BulletBase {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };
    class B_30mm_HE : B_19mm_HE {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };
    class B_30mm_MP : B_30mm_HE {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };
    class B_20mm : BulletBase {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };
    class B_25mm : BulletBase {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };
    class B_30mm_AP : BulletBase {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };
    class B_35mm_AA : BulletBase {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };
    class SmokeLauncherAmmo : BulletBase {
        ASR_AI_AUDIBLE0;
        ASR_AI_SUPPRESSION_BULLET_DEFAULT;
    };
    class CMflareAmmo : BulletBase {
        ASR_AI_AUDIBLE0;
        ASR_AI_SUPPRESSION_BULLET_DEFAULT;
    };
    class GrenadeHand : Grenade {
        ASR_AI_DANGER_RADIUS_MEDIUM;
    };
    class mini_Grenade : GrenadeHand {
        ASR_AI_DANGER_RADIUS_MEDIUM;
    };
    class GrenadeHand_stone : GrenadeHand {
        ASR_AI_DANGER_RADIUS_TINY;
    };
    class SmokeShell : GrenadeHand {
        ASR_AI_DANGER_RADIUS_TINY;
    };
    class F_40mm_White : FlareBase {
        ASR_AI_AUDIBLE0;
    };
    class F_20mm_White : FlareBase {
        ASR_AI_AUDIBLE0;
    };

    //try to stop pinpointing mortar pos from 2km away
    class Sh_155mm_AMOS;
    class Sh_82mm_AMOS : Sh_155mm_AMOS {
        ASR_AI_AUDIBLE0;
        visibleFireTime = 1;
    };
    class Flare_82mm_AMOS_White : FlareCore {
        ASR_AI_AUDIBLE0;
        ASR_AI_VISIBLE_TRACER;
        visibleFireTime = 2;
        ASR_AI_DANGER_RADIUS_SMALL;
        aiAmmoUsageFlags = AIAmmoUsageLight;
    };
    class SubmunitionBase;
    class Sh_82mm_AMOS_guided : SubmunitionBase {
        ASR_AI_AUDIBLE0;
    };

    class RocketCore;
    class RocketBase : RocketCore {
        audibleFire = __AI_AMMO_AUDIBLE1;
        ASR_AI_DANGER_RADIUS_LARGE;
    };
    class MissileCore;
    class MissileBase : MissileCore {
        audibleFire = __AI_AMMO_AUDIBLE1;
        ASR_AI_DANGER_RADIUS_LARGE;
    };

    class M_PG_AT : MissileBase {
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };

    // allow AI to use AT against helis; Players do it, why not AI ?
    class R_PG32V_F : RocketBase {
        airlock = 1;
        aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveArmour;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };

    class B_45ACP_Ball : BulletBase {
        ASR_AI_AUDIBLE0;
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_QUIET;
    };
    class B_45ACP_Ball_Green : B_45ACP_Ball {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_45ACP_Ball_Yellow : B_45ACP_Ball {
        ASR_AI_VISIBLE_TRACER;
    };

    class B_338_Ball : BulletBase {
        ASR_AI_AUDIBLE1;
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class B_338_NM_Ball : BulletBase {
        ASR_AI_AUDIBLE1;
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class B_127x54_Ball : BulletBase {
        ASR_AI_VISIBLE_NONE;
        ASR_AI_AUDIBLE0;
        ASR_AI_DANGER_RADIUS_TINY;
        ASR_AI_SUPPRESSION_BULLET_QUIET;
    };
    class B_93x64_Ball : BulletBase {
        ASR_AI_AUDIBLE1;
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class B_580x42_Ball_F : BulletBase {
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class B_50BW_Ball_F : BulletBase {
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class B_762x39_Ball_F : BulletBase {
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class B_762x39_Ball_Green_F : B_762x39_Ball_F {
        ASR_AI_VISIBLE_TRACER;
    };
    class B_545x39_Ball_F : BulletBase {
        ASR_AI_DANGER_RADIUS_SMALL;
        ASR_AI_SUPPRESSION_BULLET_LOUD;
    };
    class B_545x39_Ball_Green_F : B_545x39_Ball_F {
        ASR_AI_VISIBLE_TRACER;
    };

    class R_PG7_F : RocketBase {
        airLock = 1;
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveArmour;
        ASR_AI_AUDIBLE1;
    };

    class ammo_Gun20mmAABase : BulletBase {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };
    class ammo_Gun30mmAABase : BulletBase {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };
    class ammo_Gun35mmAABase : BulletBase {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };

    class M_Vorona_HEAT;
    class M_Vorona_HE : M_Vorona_HEAT {
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh;
    };
    class R_MRAAWS_HEAT_F;
    class R_MRAAWS_HE_F : R_MRAAWS_HEAT_F {
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh;
    };

    class B_20mm_AP : BulletBase {
        ASR_AI_DANGER_RADIUS_EXPSMALL;
    };

};