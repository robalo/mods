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
	class BulletBase;
    class RocketBase;

    class B_556x45_Ball;
    class B_12Gauge_Slug;
    class M_Titan_AT;

    class rhsusf_ammo_L8A3_shell : Grenade {
        aiAmmoUsageFlags = AIAmmoUsageConcealment;
		dangerRadiusHit = 2;
        suppressionRadiusHit = -1;
    };

    class rhs_ammo_556x45_M855A1_Ball : B_556x45_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1; //7;
    };
    class rhs_ammo_556x45_M855_Ball : B_556x45_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1; //7;
    };
    class rhs_ammo_556x45_Mk318_Ball : B_556x45_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1; //5.5;
    };
    class rhs_ammo_556x45_Mk262_Ball : B_556x45_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1; //5;
    };
    class rhs_ammo_762x51_M80_Ball : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //18
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
    };
    class rhs_ammo_12g_FRAG : B_12Gauge_Slug {
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
    };
    class rhs_ammo_45ACP_MHP : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE0; //9;
		dangerRadiusBulletClose = 1; //subsonic
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
    };
    class rhs_ammo_9x19_FMJ : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //3;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
    };
    class rhs_ammo_9x19_JHP : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //3;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
    };
    class rhs_ammo_46x30_FMJ : rhs_ammo_556x45_M855A1_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1; //3;
    };

    class rhs_ammo_M136_rocket : RocketBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //16;
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };
    class rhs_ammo_smaw_HEAA : RocketBase {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };
    class rhs_ammo_smaw_HEDP : RocketBase {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveInf;
    };
    class rhs_ammo_smaw_SR : RocketBase {
		aiAmmoUsageFlags = AIAmmoUsageMarking;
    };
    class rhs_ammo_maaws_HEAT : RocketBase {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
		audibleFire = __AI_AMMO_AUDIBLE1; //20
    };
    class rhs_ammo_maaws_HEDP : RocketBase {
        airLock = 1;
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveArmour;
		audibleFire = __AI_AMMO_AUDIBLE1; //20
    };
    class rhs_ammo_maaws_HE : RocketBase {
        airLock = 1;
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir;
		audibleFire = __AI_AMMO_AUDIBLE1; //20
    };
    class rhs_ammo_maaws_SMOKE : RocketBase {
		aiAmmoUsageFlags = AIAmmoUsageConcealment;
		audibleFire = __AI_AMMO_AUDIBLE1; //20
        dangerRadiusHit = -1;
        suppressionRadiusHit = -1;
    };
    class rhs_ammo_maaws_ILLUM : RocketBase {
		aiAmmoUsageFlags = AIAmmoUsageLight;
		audibleFire = __AI_AMMO_AUDIBLE1; //20
        dangerRadiusHit = -1;
        suppressionRadiusHit = -1;
    };
};
