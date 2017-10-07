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
    class Grenade;
    class B_556x45_Ball;
    class B_762x51_Ball;
    class B_9x21_Ball;
    class R_PG32V_F;

    class rhs_B_545x39_Ball : B_556x45_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1; //7;
    };
    class rhs_B_545x39_7N6_Ball : rhs_B_545x39_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1; //6;
    };
    class rhs_B_545x39_7N10_Ball : rhs_B_545x39_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1; //6;
    };
    class rhs_B_545x39_7N22_Ball : rhs_B_545x39_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1; //7;
    };
    class rhs_B_545x39_7N24_Ball : rhs_B_545x39_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1; //7;
    };
    class rhs_B_545x39_7U1_Ball : rhs_B_545x39_Ball {
		audibleFire = __AI_AMMO_AUDIBLE0; //3;
		dangerRadiusBulletClose = 1; //subsonic
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
    };
    class rhs_B_762x54_Ball : B_762x51_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1; //7
    };
    class rhs_B_762x39_Ball : B_762x51_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1; //6
    };
    class rhs_B_762x39_U_Ball : rhs_B_762x39_Ball {
		audibleFire = __AI_AMMO_AUDIBLE0; //3;
		dangerRadiusBulletClose = 1; //subsonic
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
    };
    class rhs_B_9x39_SP5 : rhs_B_762x39_Ball {
		audibleFire = __AI_AMMO_AUDIBLE0; //2.5;
		dangerRadiusBulletClose = 1; //subsonic
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
    };
    class rhs_rpg26_rocket : R_PG32V_F {
		audibleFire = __AI_AMMO_AUDIBLE1; //16
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveArmour;
    };
    class rhs_rpg7v2_pg7vl : rhs_rpg26_rocket {
		audibleFire = __AI_AMMO_AUDIBLE1; //16
    };
    class rhs_rpg7v2_pg7vr : rhs_rpg7v2_pg7vl {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };
    class rhs_rpg7v2_tbg7v : rhs_rpg7v2_pg7vl {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh;
    };
    class rhs_rpg7v2_og7v : rhs_rpg7v2_pg7vl {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveVeh;
    };
    class rhs_B_9x19_7N21 : B_9x21_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1; //5.65;
    };
    class rhs_B_9x18_57N181S : B_9x21_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1; //5.65;
    };
};
