#define __AUDIBLE0 1
#define __AUDIBLE1 40
#define __RANGE_HIT_FAR 800
#define __RANGE_HIT_SMALL 5
#define __RANGE_CRACKS 80

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
    class rhs_ammo_12g_FRAG : B_12Gauge_Slug {
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
    };
    class rhs_ammo_45ACP_MHP : BulletBase {
		audibleFire = __AUDIBLE0; //9;
		dangerRadiusBulletClose = 1; //subsonic
		dangerRadiusHit = __RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
    };
    class rhs_ammo_9x19_FMJ : BulletBase {
		audibleFire = __AUDIBLE1; //3;
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
    };
    class rhs_ammo_9x19_JHP : BulletBase {
		audibleFire = __AUDIBLE1; //3;
		dangerRadiusBulletClose = __RANGE_CRACKS;
		dangerRadiusHit = __RANGE_HIT_SMALL;
    };
    class rhs_ammo_46x30_FMJ : rhs_ammo_556x45_M855A1_Ball {
		audibleFire = __AUDIBLE1; //3;
    };

    class rhs_ammo_M136_rocket : RocketBase {
		audibleFire = __AUDIBLE1; //16;
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };
    class rhs_ammo_M_fgm148_AT : M_Titan_AT {
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
};
