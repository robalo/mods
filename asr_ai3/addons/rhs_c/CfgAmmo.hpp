#define __AUDIBLE1 32
#define __AUDIBLE2 48

class CfgAmmo {
	class BulletBase;
	class RocketBase;

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
	class rhsammo_762x51_Ball: BulletBase {
		audibleFire = __AUDIBLE1; //18;
	};
	class rhs_ammo_M136_rocket : RocketBase {
		audibleFire = __AUDIBLE2; //16;
		allowAgainstInfantry = 0;
		irLock = 1; //not on inf
		airLock = 1; //yes on air
	};
	class rhs_B_545x39_Ball: B_556x45_Ball {
		audibleFire = __AUDIBLE1; //7;
	};
	class rhs_B_545x39_7N10_Ball: rhs_B_545x39_Ball {
		audibleFire = __AUDIBLE1; //6;
	};
	class rhs_B_545x39_7N22_Ball: rhs_B_545x39_Ball {
		audibleFire = __AUDIBLE1; //7;
	};
	class rhs_B_545x39_7N24_Ball: rhs_B_545x39_Ball {
		audibleFire = __AUDIBLE1; //7;
	};
	class B_762x51_Ball;
	class rhs_B_762x54_Ball: B_762x51_Ball {
		audibleFire = __AUDIBLE1; //7;
	};
	class rhs_B_762x39_Ball: B_762x51_Ball {
		audibleFire = __AUDIBLE1; //6;
	};
	class R_PG32V_F;
	class rhs_rpg26_rocket : R_PG32V_F {
		audibleFire = __AUDIBLE2; //16;
	};
	class rhs_rpg7v2_pg7vl : rhs_rpg26_rocket {
		audibleFire = __AUDIBLE2; //16;
		allowAgainstInfantry = 1;
		irLock = 0; //not on inf?
	};
	class B_9x21_Ball;
	class rhs_B_9x19_7N21 : B_9x21_Ball {
		audibleFire = __AUDIBLE1; //5.65;
	};
};
