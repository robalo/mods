#define __AUDIBLE1 16
#define __AUDIBLE2 32

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
	class rhs_ammo_762x51_M80_Ball : BulletBase {
		audibleFire = __AUDIBLE1; //18
	};
	class rhs_ammo_M136_rocket : RocketBase {
		audibleFire = __AUDIBLE2; //16;
		//allowAgainstInfantry = 0;
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
	};
	class rhs_rpg7v2_pg7vr : rhs_rpg7v2_pg7vl {
		airLock = 0;
	};
	class B_9x21_Ball;
	class rhs_B_9x19_7N21 : B_9x21_Ball {
		audibleFire = __AUDIBLE1; //5.65;
	};
	class rhs_B_9x18_57N181S : B_9x21_Ball {
		audibleFire = __AUDIBLE1; //5.65;
	};
};
