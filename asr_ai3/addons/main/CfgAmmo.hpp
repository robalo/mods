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
	};

	class B_65x39_Caseless : BulletBase {
		audibleFire = __AUDIBLE1; //8;
	};

	class B_762x51_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //9;
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
	};

	class B_408_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //15;
	};

	class B_127x33_Ball : BulletBase {
		audibleFire = __AUDIBLE2; //12;
	};

	class B_127x99_Ball : BulletBase {
		audibleFire = __AUDIBLE2; //15;
	};

	class B_127x108_Ball : BulletBase {
		audibleFire = __AUDIBLE2; //48;
	};
	class B_127x108_APDS : B_127x108_Ball {
		audibleFire = __AUDIBLE2; //15;
	};

	class B_45ACP_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //9;
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
