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

    class BWA3_B_556x45_Ball;
    class BWA3_B_556x45_Ball_SD : BWA3_B_556x45_Ball {
		audibleFire = ASR_AI_AMMO_AUDIBLE0; //0.6;
		dangerRadiusBulletClose = 1; //subsonic
		dangerRadiusHit = ASR_AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
    };
    class BWA3_B_762x51_Ball;
    class BWA3_B_762x51_Ball_SD : BWA3_B_762x51_Ball {
		audibleFire = ASR_AI_AMMO_AUDIBLE0; //0.9;
		dangerRadiusBulletClose = 1; //subsonic
		dangerRadiusHit = ASR_AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
    };
    class BWA3_B_127x99_Ball;
    class BWA3_B_127x99_Ball_SD : BWA3_B_127x99_Ball {
		audibleFire = ASR_AI_AMMO_AUDIBLE0; //1.5;
		dangerRadiusBulletClose = 1; //subsonic
		dangerRadiusHit = ASR_AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
    };
    class BWA3_B_46x30_Ball : BulletBase {
		audibleFire = ASR_AI_AMMO_AUDIBLE1; //7;
		dangerRadiusBulletClose = ASR_AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = ASR_AI_AMMO_RANGE_HIT_SMALL;
    };
    class BWA3_B_46x30_Ball_SD : BWA3_B_46x30_Ball {
		audibleFire = ASR_AI_AMMO_AUDIBLE0; //0.7;
		dangerRadiusBulletClose = 1; //subsonic
		dangerRadiusHit = ASR_AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
    };

    class RocketBase;
    class BWA3_R_RGW90_HH : RocketBase {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };
    class BWA3_R_Pzf3_IT : RocketBase {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };
	class BWA3_R_CarlGustaf_HEAT: RocketBase {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
	};
	class BWA3_R_CarlGustaf_HE: BWA3_R_CarlGustaf_HEAT {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir;
	};
	class BWA3_R_CarlGustaf_HEDP: BWA3_R_CarlGustaf_HEAT {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir;
	};
	class BWA3_R_CarlGustaf_Smoke: BWA3_R_CarlGustaf_HEAT {
		aiAmmoUsageFlags = AIAmmoUsageConcealment + AIAmmoUsageMarking;
	};
	class BWA3_R_CarlGustaf_Illum: BWA3_R_CarlGustaf_Smoke {
		aiAmmoUsageFlags = AIAmmoUsageLight;
	};

};
