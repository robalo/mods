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
    class BulletBase;
    class B_556x45_Ball;

    class rhssaf_ammo_556x45_EPR : B_556x45_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class rhssaf_ammo_556x45_SOST : B_556x45_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class rhssaf_ammo_556x45_SPR : B_556x45_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class rhs_ammo_792x57_Ball : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1;
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
    };
};
