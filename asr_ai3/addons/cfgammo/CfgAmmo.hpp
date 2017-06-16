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
	class MissileCore : Default {
//        audibleFire = 32;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};
	class BombCore : Default {
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};
	class RocketCore : Default {
//        audibleFire = 32;
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
        audibleFire = __AI_AMMO_AUDIBLE1;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};
	class SubmunitionCore : Default {
        audibleFire = __AI_AMMO_AUDIBLE1;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};
	class ShotDeployCore : Default {
        audibleFire = __AI_AMMO_AUDIBLE1;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};
	class GrenadeCore : Default {
//        visibleFire = 2;
//        audibleFire = 0.25;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};
	class TimeBombCore : Default {
//        visibleFire = 0;
//        audibleFire = 0;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};
	class FlareCore : GrenadeCore {
		dangerRadiusHit = 2;
	};
	class SmokeShellCore : GrenadeCore {
//        visibleFire = 2;
//        audibleFire = 0.25;
		dangerRadiusHit = 2;
	};
	class FakeAmmo : BulletCore {
        audibleFire = __AI_AMMO_AUDIBLE1;
		dangerRadiusBulletClose = -1;
	};
	class BulletBase : BulletCore {
		audibleFire = __AI_AMMO_AUDIBLE1; //12;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
//        dangerRadiusHit = -1;
//        suppressionRadiusBulletClose = 2;
//        suppressionRadiusHit = 4;
//        aiAmmoUsageFlags = "AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir";
	};
	class ShellBase : ShellCore {
        audibleFire = __AI_AMMO_AUDIBLE1;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
//        suppressionRadiusHit = 30;
//        aiAmmoUsageFlags = "AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir";
	};
    class MissileBase : MissileCore {
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
//        suppressionRadiusHit = 30;
    };
	class Grenade : Default {
//        visibleFire = 2;
//        audibleFire = 0.25;
		cost = 5; //give'em as if they were free
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};
	class RocketBase : RocketCore {
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
//        suppressionRadiusHit = 30;
	};
    class GrenadeBase : GrenadeCore {};
	class ShotgunBase : ShotgunCore {
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
//        dangerRadiusHit = 8;
//        suppressionRadiusBulletClose = 2;
//        suppressionRadiusHit = 4;
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
//        suppressionRadiusBulletClose = 6;
//        suppressionRadiusHit = 8;
	};

	class B_556x45_dual : B_556x45_Ball {
		audibleFire = __AI_AMMO_AUDIBLE0; //4;
		dangerRadiusBulletClose = 0;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
//        suppressionRadiusHit = 4;
//        aiAmmoUsageFlags = "AIAmmoUsageOffensiveInf + AIAmmoUsageUnderwater";
	};
    class B_56x15_dual : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE0; //4;
    };

	class B_65x39_Caseless : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //8;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
//        suppressionRadiusBulletClose = 6;
//        suppressionRadiusHit = 8;
//        airLock = 1;
	};

	class SubmunitionBullet;

	class B_65x39_Minigun_Caseless : SubmunitionBullet {
		audibleFire = __AI_AMMO_AUDIBLE1; //8;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
//        airLock = 1;
	};

	class B_762x51_Ball : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //9;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
//        suppressionRadiusBulletClose = 6;
//        suppressionRadiusHit = 8;
//        airLock = 1;
	};

	class B_762x51_Minigun_Tracer_Red : SubmunitionBullet {
		audibleFire = __AI_AMMO_AUDIBLE1; //9;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
//        airLock = 1;
	};

	class B_12Gauge_Slug : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //15;
	};
	class B_12Gauge_Pellets : ShotgunBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //8;
	};

	class B_9x21_Ball : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //5;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
//        suppressionRadiusBulletClose = 2;
//        suppressionRadiusHit = 4;
	};

	class B_408_Ball : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //15;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
//        airLock = 1;
	};

	class B_127x33_Ball : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //12;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
//        suppressionRadiusBulletClose = 2;
//        suppressionRadiusHit = 4;
//        airLock = 1;
	};

	class B_127x99_Ball : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //15;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
//        suppressionRadiusBulletClose = 8;
//        suppressionRadiusHit = 12;
//        airLock = 1;
	};

	class B_127x108_Ball : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //15;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
//        suppressionRadiusBulletClose = 8;
//        suppressionRadiusHit = 12;
//        airLock = 1;
	};

	class B_19mm_HE : BulletBase {
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};
	class B_30mm_HE : B_19mm_HE {
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};
	class B_30mm_MP : B_30mm_HE {
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};
	class B_20mm : BulletBase {
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};
	class B_25mm : BulletBase {
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};
	class B_30mm_AP : BulletBase {
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};
	class B_35mm_AA : BulletBase {
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};
	class GrenadeHand : Grenade {
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
//        visibleFire = 0.5;
//        audibleFire = 0.05;
	};
	class mini_Grenade : GrenadeHand {
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
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

	class G_40mm_HE : GrenadeBase {
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh;
	};

	class B_45ACP_Ball : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE0; //9;
		dangerRadiusBulletClose = 1; //subsonic ammo, no crack (usually)
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
//        suppressionRadiusHit = 4;
	};
	class IRStrobeBase : GrenadeCore {
		dangerRadiusHit = 2;
	};
	class Gatling_30mm_HE_Plane_CAS_01_F : BulletBase {
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_FAR;
	};

	class B_338_Ball : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //12;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
//        suppressionRadiusBulletClose = 8;
//        suppressionRadiusHit = 10;
//        airLock = 1;
	};
	class B_338_NM_Ball : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //12;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
//        suppressionRadiusBulletClose = 8;
//        suppressionRadiusHit = 10;
//        airLock = 1;
	};
	class B_127x54_Ball : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE0; //3;
		dangerRadiusBulletClose = 1; //subsonic, no crack
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
//        suppressionRadiusHit = 10;
        airLock = 0;
	};
	class B_93x64_Ball : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //12;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
//        suppressionRadiusBulletClose = 8;
//        suppressionRadiusHit = 10;
//        airLock = 1;
	};

    class B_580x42_Ball_F : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
    };
    class B_50BW_Ball_F : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //15;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
        airLock = 1;
    };
    class B_762x39_Ball_F : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
        airLock = 1;
    };
    class B_545x39_Ball_F : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
    };


	// allow AI to use AT against helis; Players do it, why not AI ?

	class M_PG_AT : MissileBase {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
	};
/*
	class M_NLAW_AT_F : MissileBase {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
	};
*/
    class M_Scalpel_AT : MissileBase {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };

	class R_PG32V_F: RocketBase {
		airlock = 1;
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveArmour;
	};
	class R_TBG32V_F : R_PG32V_F {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir;
	};
/*
    class M_Titan_AT;
	class M_Titan_AP : M_Titan_AT {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh;
	};
*/
    class R_PG7_F : RocketBase {
        airLock = 1;
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveArmour;
    };

    class FlareBase;
	class F_40mm_White : FlareBase {
		aiAmmoUsageFlags = AIAmmoUsageLight;
	};

};
