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
    class B_9x21_Ball;

    class rhs_ammo_9x17 : B_9x21_Ball {
		audibleFire = __AI_AMMO_AUDIBLE1; //5.65;
    };
    class rhs_ammo_792x57_Ball : BulletBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //18;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
    };
};
