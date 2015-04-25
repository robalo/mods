#define __AUDIBLE1 12
#define __AUDIBLE2 18
#define __RANGE_HIT_FAR 1000
#define __RANGE_HIT_CLOSE 500
#define __RANGE_HIT_SMALL 5
#define __RANGE_CRACKS 100

class CfgAmmo {
	class Default;
	class MissileCore : Default {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class BombCore : Default {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class RocketCore : Default {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class BulletCore : Default {
		dangerRadiusBulletClose = __RANGE_CRACKS;
	};
	class ShotgunCore : Default {
		dangerRadiusBulletClose = __RANGE_CRACKS;
	};
	class ShellCore : Default {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class SubmunitionCore : Default {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class ShotDeployCore : Default {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class GrenadeCore : Default {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class TimeBombCore : Default {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class FlareCore : GrenadeCore {
		dangerRadiusHit = 2;
	};
	class SmokeShellCore : GrenadeCore {
		dangerRadiusHit = 2;
	};
	class FakeAmmo : BulletCore {
		dangerRadiusBulletClose = -1;
	};
	class BulletBase : BulletCore {
		audibleFire = __AUDIBLE1; //12;
	};
	class ShellBase : ShellCore {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class MissileBase;

	class Grenade : Default {
		cost = 5; //give'em as if they were free
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class RocketBase : RocketCore {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class ShotgunBase : ShotgunCore {
		dangerRadiusBulletClose = __RANGE_CRACKS;
	};
	class FuelExplosion : Default {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class Laserbeam : Default {
		dangerRadiusHit = 0;
	};

	class B_556x45_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //6;
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
	};

	class B_556x45_dual : B_556x45_Ball {
		dangerRadiusBulletClose = 0;
	};

	class B_65x39_Caseless : BulletBase {
		audibleFire = __AUDIBLE1; //8;
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
	};

	class SubmunitionBullet;

	class B_65x39_Minigun_Caseless : SubmunitionBullet {
		audibleFire = __AUDIBLE1; //8;
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
	};

	class B_762x51_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //9;
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
	};

	class B_762x51_Minigun_Tracer_Red : SubmunitionBullet {
		audibleFire = __AUDIBLE1; //9;
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
	};

	class B_12Gauge_Slug : BulletBase {
		audibleFire = __AUDIBLE1; //15;
	};
	class B_12Gauge_Pellets : ShotgunBase {
		audibleFire = __AUDIBLE1; //8;
	};

	class B_9x21_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //5;
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
	};

	class B_408_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //15;
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
	};

	class B_127x33_Ball : BulletBase {
		audibleFire = __AUDIBLE2; //12;
	};

	class B_127x99_Ball : BulletBase {
		audibleFire = __AUDIBLE2; //15;
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
	};

	class B_127x108_Ball : BulletBase {
		audibleFire = __AUDIBLE2; //48;
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
	};
	class B_127x108_APDS : B_127x108_Ball {
		audibleFire = __AUDIBLE2; //15;
	};

	class B_19mm_HE : BulletBase {
		dangerRadiusHit = __RANGE_HIT_CLOSE;
	};
	class B_30mm_HE : B_19mm_HE {
		dangerRadiusHit = __RANGE_HIT_CLOSE;
	};
	class B_30mm_MP : B_30mm_HE {
		dangerRadiusHit = __RANGE_HIT_CLOSE;
	};
	class B_20mm : BulletBase {
		dangerRadiusHit = __RANGE_HIT_CLOSE;
	};
	class B_25mm : BulletBase {
		dangerRadiusHit = __RANGE_HIT_CLOSE;
	};
	class B_30mm_AP : BulletBase {
		dangerRadiusHit = __RANGE_HIT_CLOSE;
	};
	class B_35mm_AA : BulletBase {
		dangerRadiusHit = __RANGE_HIT_CLOSE;
	};
	class GrenadeHand : Grenade {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class mini_Grenade : GrenadeHand {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class GrenadeHand_stone : GrenadeHand {
		dangerRadiusHit = 2;
	};
	class SmokeShell : GrenadeHand {
		dangerRadiusHit = 2;
	};
	class Sh_120mm_HE : ShellBase {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class Sh_120mm_APFSDS : ShellBase {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class Sh_155mm_AMOS : ShellBase {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class GrenadeBase;
	class G_40mm_HE : GrenadeBase {
		dangerRadiusHit = __RANGE_HIT_FAR;
	};
	class G_20mm_HE : G_40mm_HE {
		dangerRadiusHit = __RANGE_HIT_CLOSE;
	};

	class B_45ACP_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //9;
		dangerRadiusBulletClose = 1; //subsonic ammo, no crack (usually)
		dangerRadiusHit = __RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
	};
	class IRStrobeBase : GrenadeCore {
		dangerRadiusHit = 2;
	};
	class Gatling_30mm_HE_Plane_CAS_01_F : BulletBase {
		dangerRadiusHit = __RANGE_HIT_CLOSE;
	};

	class B_338_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //12;
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
	};
	class B_338_NM_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //12;
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
	};
	class B_127x54_Ball : BulletBase {
		//audibleFire = 3;
		dangerRadiusBulletClose = 1; //subsonic, no crack
		dangerRadiusHit = __RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
	};
	class B_93x64_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //12;
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
	};

	// allow AI to use AT against helis; Players do it, why not AI ?
	class R_PG32V_F: RocketBase {
		airlock = 1;
	};

};
