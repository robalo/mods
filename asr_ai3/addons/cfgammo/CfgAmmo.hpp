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
        cost = 0;
        airLock = 0;
        visibleFire = 0;
        audibleFire = 0;
        suppressionRadiusBulletClose = -1;
        suppressionRadiusHit = -1;
        dangerRadiusBulletClose = -1;
        dangerRadiusHit = -1;
*/
    };
    class MissileCore : Default {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
    };
    class BombCore : Default {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
    };
    class RocketCore : Default {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
    };
    class BulletCore : Default {
        audibleFire = __AI_AMMO_AUDIBLE1;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
    };
    class ShotgunCore : Default {
        audibleFire = __AI_AMMO_AUDIBLE1;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
    };
    class ShellCore : Default {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
    };
    class SubmunitionCore : Default {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
    };
    class ShotDeployCore : Default {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
    };
    class GrenadeCore : Default {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_MEDIUM;
    };
    class TimeBombCore : Default {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
    };
    class FlareCore : GrenadeCore {
        dangerRadiusHit = 2;
        aiAmmoUsageFlags = AIAmmoUsageLight;
    };
    class SmokeShellCore : GrenadeCore {
        dangerRadiusHit = 2;
    };
    class FakeAmmo : BulletCore {
        audibleFire = __AI_AMMO_AUDIBLE1;
        dangerRadiusBulletClose = -1;
    };
    class BulletBase : BulletCore {
        visibleFire = 2; //3
        audibleFire = __AI_AMMO_AUDIBLE1; //40;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
    };
    class ShellBase : ShellCore {
        audibleFire = __AI_AMMO_AUDIBLE1;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
    };
    class MissileBase : MissileCore {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
    };
    class GrenadeBase : GrenadeCore {};
    class Grenade : Default {
        cost = 5; //give'em as if they were free
        visibleFire = 0.5; // 1
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_MEDIUM;
    };
    class RocketBase : RocketCore {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
    };
    class ShotgunBase : ShotgunCore {
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
    };
    class FuelExplosion : Default {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
    };
    class Laserbeam : Default {
        dangerRadiusHit = 0;
    };

    class B_556x45_Ball : BulletBase {
        audibleFire = __AI_AMMO_AUDIBLE1; //6;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
    };
    class B_556x45_Ball_Tracer_Red : B_556x45_Ball {
        visibleFire = 4;
    };
    class B_556x45_Ball_Tracer_Green : B_556x45_Ball {
        visibleFire = 4;
    };
    class B_556x45_Ball_Tracer_Yellow : B_556x45_Ball {
        visibleFire = 4;
    };

    class B_556x45_dual : B_556x45_Ball {
        audibleFire = __AI_AMMO_AUDIBLE0; //4;
        dangerRadiusBulletClose = 0;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
    };
    class B_56x15_dual : BulletBase {
        audibleFire = __AI_AMMO_AUDIBLE0; //4;
    };
    class SubmunitionBullet;

    class B_65x39_Caseless : BulletBase {
        audibleFire = __AI_AMMO_AUDIBLE1; //8;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
    };
    class B_65x39_Caseless_green : B_65x39_Caseless {
        visibleFire = 4;
    };
    class B_65x39_Caseless_yellow : B_65x39_Caseless {
        visibleFire = 4;
    };
    class B_65x39_Case : B_65x39_Caseless {};
    class B_65x39_Case_green : B_65x39_Case {
        visibleFire = 4;
    };
    class B_65x39_Case_yellow : B_65x39_Case {
        visibleFire = 4;
    };
    class B_65x39_Minigun_Caseless : SubmunitionBullet {
        audibleFire = __AI_AMMO_AUDIBLE1; //8;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
    };
    class B_65x39_Minigun_Caseless_Red_splash : B_65x39_Caseless {
        visibleFire = 4;
    };
    class B_65x39_Minigun_Caseless_Yellow_splash : B_65x39_Minigun_Caseless_Red_splash {
        visibleFire = 4;
    };
    class B_65x39_Minigun_Caseless_Green_splash : B_65x39_Minigun_Caseless_Red_splash {
        visibleFire = 4;
    };

    class B_762x51_Ball : BulletBase {
        visibleFire = 2; //3
        audibleFire = __AI_AMMO_AUDIBLE1; //9;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
    };
    class B_762x51_Tracer_Red : B_762x51_Ball {
        visibleFire = 4;
    };
    class B_762x51_Tracer_Green : B_762x51_Ball {
        visibleFire = 4;
    };
    class B_762x51_Tracer_Yellow : B_762x51_Ball {
        visibleFire = 4;
    };
    class B_762x51_Minigun_Tracer_Red : SubmunitionBullet {
        audibleFire = __AI_AMMO_AUDIBLE1; //9;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
    };

    class B_762x54_Ball : B_762x51_Ball {};
    class B_762x54_Tracer_Red : B_762x54_Ball {
        visibleFire = 4;
    };
    class B_762x54_Tracer_Green : B_762x54_Ball {
        visibleFire = 4;
    };
    class B_762x54_Tracer_Yellow : B_762x54_Ball {
        visibleFire = 4;
    };

    class B_9x21_Ball : BulletBase {
        audibleFire = __AI_AMMO_AUDIBLE1; //5;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
    };
    class B_9x21_Ball_Tracer_Green : B_9x21_Ball {
        visibleFire = 4;
    };
    class B_9x21_Ball_Tracer_Red : B_9x21_Ball_Tracer_Green {
        visibleFire = 4;
    };
    class B_9x21_Ball_Tracer_Yellow : B_9x21_Ball_Tracer_Green {
        visibleFire = 4;
    };

    class B_408_Ball : BulletBase {
        visibleFire = 4; //5
        audibleFire = __AI_AMMO_AUDIBLE1; //120;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
        suppressionRadiusBulletClose = 8;
        suppressionRadiusHit = 12;
    };

    class B_127x99_Ball : BulletBase {
        visibleFire = 6; //8
        audibleFire = __AI_AMMO_AUDIBLE1; //15;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
    };
    class B_127x99_Ball_Tracer_Red : B_127x99_Ball {
        visibleFire = 12;
    };
    class B_127x99_Ball_Tracer_Green : B_127x99_Ball {
        visibleFire = 12;
    };
    class B_127x99_Ball_Tracer_Yellow : B_127x99_Ball {
        visibleFire = 12;
    };

    class B_127x108_Ball : BulletBase {
        visibleFire = 6; //5
        audibleFire = __AI_AMMO_AUDIBLE1; //15;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
    };

    class B_19mm_HE : BulletBase {
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_MEDIUM;
    };
    class B_30mm_HE : B_19mm_HE {
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_MEDIUM;
    };
    class B_30mm_MP : B_30mm_HE {
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_MEDIUM;
    };
    class B_20mm : BulletBase {
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_MEDIUM;
    };
    class B_25mm : BulletBase {
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_MEDIUM;
    };
    class B_30mm_AP : BulletBase {
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_MEDIUM;
    };
    class B_35mm_AA : BulletBase {
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_MEDIUM;
    };
    class SmokeLauncherAmmo : BulletBase {
        audibleFire = __AI_AMMO_AUDIBLE0;
        suppressionRadiusBulletClose = -1;
        suppressionRadiusHit = -1;
        dangerRadiusBulletClose = -1;
        dangerRadiusHit = -1;
    };
    class CMflareAmmo : BulletBase {
        audibleFire = __AI_AMMO_AUDIBLE0;
        suppressionRadiusBulletClose = -1;
        suppressionRadiusHit = -1;
        dangerRadiusBulletClose = -1;
        dangerRadiusHit = -1;
    };
    class GrenadeHand : Grenade {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_MEDIUM;
    };
    class mini_Grenade : GrenadeHand {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_MEDIUM;
    };
    class GrenadeHand_stone : GrenadeHand {
        dangerRadiusHit = 2;
    };
    class SmokeShell : GrenadeHand {
        dangerRadiusHit = 2;
    };

    class Sh_120mm_HE : ShellBase {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
    };
    class Sh_120mm_APFSDS : ShellBase {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
    };
    class Sh_155mm_AMOS : ShellBase {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
    };

    //stop pinpointing mortar pos from 2km away
    class Sh_82mm_AMOS : Sh_155mm_AMOS {
        audibleFire = __AI_AMMO_AUDIBLE0;
    };
    class SubmunitionBase;
    class Sh_82mm_AMOS_guided : SubmunitionBase {
        audibleFire = __AI_AMMO_AUDIBLE0;
    };
    class M_Mo_82mm_AT : MissileBase {
        audibleFire = __AI_AMMO_AUDIBLE0;
    };

    class M_PG_AT : MissileBase {
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };
    // allow AI to use AT against helis; Players do it, why not AI ?
    class R_PG32V_F: RocketBase {
        airlock = 1;
        aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveArmour;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };

    class G_40mm_HE : GrenadeBase {
        cost = 5;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_MEDIUM;
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh;
    };

    class B_45ACP_Ball : BulletBase {
        audibleFire = __AI_AMMO_AUDIBLE0; //9;
        dangerRadiusBulletClose = 1; //subsonic ammo, no crack (usually)
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
    };
    class B_45ACP_Ball_Green : B_45ACP_Ball {
        visibleFire = 4;
    };
    class B_45ACP_Ball_Yellow : B_45ACP_Ball {
        visibleFire = 4;
    };

    class IRStrobeBase : GrenadeCore {
        dangerRadiusHit = 2;
    };
    class Gatling_30mm_HE_Plane_CAS_01_F : BulletBase {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_MEDIUM;
    };

    class B_338_Ball : BulletBase {
        audibleFire = __AI_AMMO_AUDIBLE1; //12;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
        visibleFire = 4;
    };
    class B_338_NM_Ball : BulletBase {
        audibleFire = __AI_AMMO_AUDIBLE1; //12;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
        visibleFire = 8;
    };

    class B_127x54_Ball : BulletBase {
        audibleFire = __AI_AMMO_AUDIBLE0; //3;
        dangerRadiusBulletClose = 1; //subsonic, no crack
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
        airLock = 0;
    };

    class B_93x64_Ball : BulletBase {
        audibleFire = __AI_AMMO_AUDIBLE1; //12;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
        visibleFire = 4;
    };

    class B_580x42_Ball_F : BulletBase {
        audibleFire = __AI_AMMO_AUDIBLE1;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
    };
    class B_50BW_Ball_F : BulletBase {
        audibleFire = __AI_AMMO_AUDIBLE1; //15;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
    };

    class B_762x39_Ball_F : BulletBase {
        audibleFire = __AI_AMMO_AUDIBLE1;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
    };
    class B_762x39_Ball_Green_F : B_762x39_Ball_F {
        visibleFire = 4;
    };

    class B_545x39_Ball_F : BulletBase {
        audibleFire = __AI_AMMO_AUDIBLE1;
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
    };
    class B_545x39_Ball_Green_F : B_545x39_Ball_F {
        visibleFire = 4;
    };

    class R_PG7_F : RocketBase {
        airLock = 1;
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveArmour;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };

    class ammo_Gun20mmAABase : BulletBase {
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
    };
    class ammo_Gun30mmAABase : BulletBase {
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
    };
    class ammo_Gun35mmAABase : BulletBase {
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
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
        dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
    };

};
