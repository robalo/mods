#define __AUDIBLE1 16
#define __AUDIBLE2 32

class CfgAmmo {
	class Default;
	class Grenade : Default {
		cost = 5; //give'em as if they were free
	};

	class BulletCore;
	class BulletBase : BulletCore {
		audibleFire = __AUDIBLE1; //12;
	};
	class RocketBase;
	class MissileBase;

	class B_556x45_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //6;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
	};

	class B_65x39_Caseless : BulletBase {
		audibleFire = __AUDIBLE1; //8;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
	};

	class B_762x51_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //9;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
	};

	class SubmunitionBullet;
	class B_65x39_Minigun_Caseless : SubmunitionBullet {
		audibleFire = __AUDIBLE1; //8;
	};
	class B_762x51_Minigun_Tracer_Red : SubmunitionBullet {
		audibleFire = __AUDIBLE1; //9;
	};

	class ShotgunBase;
	class B_12Gauge_Slug : BulletBase {
		audibleFire = __AUDIBLE1; //15;
	};
	class B_12Gauge_Pellets : ShotgunBase {
		audibleFire = __AUDIBLE1; //8;
	};

	class B_9x21_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //5;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
		suppressionRadiusBulletClose = 3;
		suppressionRadiusHit = 3;
	};

	class B_408_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //15;
		dangerRadiusBulletClose = 15;
		dangerRadiusHit = 15;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 8;
	};

	class B_127x33_Ball : BulletBase {
		audibleFire = __AUDIBLE2; //12;
	};

	class B_127x99_Ball : BulletBase {
		audibleFire = __AUDIBLE2; //15;
		dangerRadiusBulletClose = 18;
		dangerRadiusHit = 18;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
	};

	class B_127x108_Ball : BulletBase {
		audibleFire = __AUDIBLE2; //48;
		dangerRadiusBulletClose = 18;
		dangerRadiusHit = 18;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
	};
	class B_127x108_APDS : B_127x108_Ball {
		audibleFire = __AUDIBLE2; //15;
	};

	class B_45ACP_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //9;
		dangerRadiusBulletClose = 0; //subsonic ammo
		dangerRadiusHit = 6;
		suppressionRadiusBulletClose = 0;
		suppressionRadiusHit = 3;
	};

	class B_338_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //12;
		dangerRadiusBulletClose = 15;
		dangerRadiusHit = 15;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 8;
	};
	class B_338_NM_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //12;
		dangerRadiusBulletClose = 15;
		dangerRadiusHit = 15;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 8;
	};
	class B_127x54_Ball : BulletBase {
		//audibleFire = 3;
		dangerRadiusBulletClose = 0; //subsonic
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 0;
		suppressionRadiusHit = 6;
	};
	class B_93x64_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //12;
		dangerRadiusBulletClose = 15;
		dangerRadiusHit = 15;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 8;
	};

	class GrenadeHand;
	class SmokeShell : GrenadeHand {
		dangerRadiusHit = 50;
		suppressionRadiusHit = 0;
	};

	// allow AI to use AT against helis; Players do it, why not AI ?
	class R_PG32V_F: RocketBase {
		airlock = 1;
	};
	class M_NLAW_AT_F: MissileBase {
		//airlock = 1; // not the lock-able ones though
	};
	class M_Titan_AT: MissileBase {
		//airlock = 1;
	};
	class M_Titan_AP: M_Titan_AT {
		//airlock = 1;
	};

};
