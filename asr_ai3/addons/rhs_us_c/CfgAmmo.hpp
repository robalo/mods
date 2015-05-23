#define __AUDIBLE0 1
#define __AUDIBLE1 8
#define __AUDIBLE2 16
#define __RANGE_HIT_FAR 1000
#define __RANGE_HIT_SMALL 5
#define __RANGE_CRACKS 100

class CfgAmmo {
	class BulletBase;

	class rhsusf_B_300winmag : BulletBase {
		audibleFire = __AUDIBLE1;
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
	};
	class B_556x45_Ball;
	class rhs_ammo_556x45_M855A1_Ball : B_556x45_Ball {
		audibleFire = __AUDIBLE1; //7;
	};
	class rhs_ammo_556x45_Mk318_Ball : B_556x45_Ball {
		audibleFire = __AUDIBLE1; //5.5;
	};
	class rhs_ammo_556x45_Mk262_Ball : B_556x45_Ball {
		audibleFire = __AUDIBLE1; //5;
	};
	class rhs_ammo_762x51_M80_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //18
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
	};
	class rhs_ammo_45ACP_MHP : BulletBase {
		audibleFire = __AUDIBLE0; //9;
		dangerRadiusBulletClose = 1; //subsonic
		dangerRadiusHit = __RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
	};

	class RocketBase;
	class rhs_ammo_M136_rocket : RocketBase {
		audibleFire = __AUDIBLE2; //16;
		allowAgainstInfantry = 0;
		airLock = 1; //yes on air
	};
};
