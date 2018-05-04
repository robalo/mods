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
    class RocketBase;

    class SubmunitionBase;
    class rhs_ammo_30x173mm_GAU8_mixed : SubmunitionBase {
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
    };

    class rhs_ammo_127x99_Ball;
    class rhs_ammo_127x99_Ball_Tracer_Red : rhs_ammo_127x99_Ball {
        visibleFire = 12;
    };
    class rhs_ammo_127x99_Ball_Tracer_Green : rhs_ammo_127x99_Ball {
        visibleFire = 12;
    };
    class rhs_ammo_127x99_Ball_Tracer_Yellow : rhs_ammo_127x99_Ball {
        visibleFire = 12;
    };
    class rhs_ammo_127x99_SLAP;
    class rhs_ammo_127x99_SLAP_Tracer_Red : rhs_ammo_127x99_SLAP {
        visibleFire = 12;
    };
    class rhs_ammo_127x99_SLAP_Tracer_Green : rhs_ammo_127x99_SLAP {
        visibleFire = 12;
    };
    class rhs_ammo_127x99_SLAP_Tracer_Yellow : rhs_ammo_127x99_SLAP {
        visibleFire = 12;
    };

    class Grenade;
    class rhsusf_ammo_L8A3_shell : Grenade {
		dangerRadiusHit = 2;
        suppressionRadiusHit = -1;
    };

    class rhs_ammo_20mm_AP;
    class rhs_ammo_20x139mm_AP : rhs_ammo_20mm_AP {
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
    };
    class rhs_ammo_20x139mm_HE : rhs_ammo_20x139mm_AP {
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
    };

    class rhs_ammo_3d17_shell : Grenade {
        suppressionRadiusHit = -1;
    };

    class B_556x45_Ball;
    class rhs_B_545x39_Ball : B_556x45_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //7;
    };
    class rhs_B_545x39_7N6_Ball : rhs_B_545x39_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //6;
    };
    class rhs_B_545x39_7N10_Ball : rhs_B_545x39_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //6;
    };
    class rhs_B_545x39_7N22_Ball : rhs_B_545x39_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //7;
    };
    class rhs_B_545x39_7N24_Ball : rhs_B_545x39_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //7;
    };
    class rhs_B_545x39_7U1_Ball : rhs_B_545x39_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE0; //3;
		dangerRadiusBulletClose = 1; //subsonic
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
    };
    class rhs_B_545x39_Ball_Tracer_Green : rhs_B_545x39_Ball {
        visibleFire = 4;
    };
    class B_762x51_Ball;
    class rhs_B_762x54_Ball : B_762x51_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //7
    };
    class rhs_B_762x54_Ball_Tracer_Green : rhs_B_762x54_Ball {
        visibleFire = 4;
    };
    class rhs_B_762x39_Ball : B_762x51_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //6
    };
    class rhs_B_762x39_Tracer : rhs_B_762x39_Ball {
        visibleFire = 4;
    };
    class rhs_B_762x39_U_Ball : rhs_B_762x39_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE0; //3;
		dangerRadiusBulletClose = 1; //subsonic
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
    };
    class rhs_B_9x39_SP5 : rhs_B_762x39_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE0; //2.5;
		dangerRadiusBulletClose = 1; //subsonic
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
    };

    class rhs_g_vog25;
    class rhs_g_gdm40 : rhs_g_vog25 {
        suppressionRadiusHit = -1;
    };

    class R_PG32V_F;
    class rhs_rpg26_rocket : R_PG32V_F {
		audibleFire = __AI_AMMO_AUDIBLE1; //16
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveArmour;
    };
    class rhs_rpg7v2_pg7vl : rhs_rpg26_rocket {
		audibleFire = __AI_AMMO_AUDIBLE1; //16
    };
    class rhs_rpg7v2_tbg7v : rhs_rpg7v2_pg7vl {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh;
    };

    class B_9x21_Ball;
    class rhs_B_9x19_7N21 : B_9x21_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //5.65;
    };
    class rhs_B_9x18_57N181S : B_9x21_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //5.65;
    };
    class rhs_ammo_9x17 : B_9x21_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //5.65;
    };
    class rhs_ammo_762x25_Ball : BulletBase {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //3
    };
    class rhs_ammo_792x57_Ball : BulletBase {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //18;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
    };
	class rhs_ammo_75x55_Ball: BulletBase {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //18;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
    };

    class rhs_ammo_556x45_M855A1_Ball : B_556x45_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //7;
    };
    class rhs_ammo_556x45_M855A1_Ball_Red : rhs_ammo_556x45_M855A1_Ball {
        visibleFire = 4;
    };
    class rhs_ammo_556x45_M855A1_Ball_Green : rhs_ammo_556x45_M855A1_Ball_Red {
        visibleFire = 4;
    };
    class rhs_ammo_556x45_M855A1_Ball_Yellow : rhs_ammo_556x45_M855A1_Ball_Red {
        visibleFire = 4;
    };
    class rhs_ammo_556x45_M855A1_Ball_Orange : rhs_ammo_556x45_M855A1_Ball_Red {
        visibleFire = 4;
    };
    class rhs_ammo_556x45_M855_Ball : B_556x45_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //7;
    };
    class rhs_ammo_556x45_M855_Ball_Red : rhs_ammo_556x45_M855_Ball {
        visibleFire = 4;
    };
    class rhs_ammo_556x45_M855_Ball_Green : rhs_ammo_556x45_M855_Ball_Red {
        visibleFire = 4;
    };
    class rhs_ammo_556x45_M855_Ball_Yellow : rhs_ammo_556x45_M855_Ball_Red {
        visibleFire = 4;
    };
    class rhs_ammo_556x45_M855_Ball_Orange : rhs_ammo_556x45_M855_Ball_Red {
        visibleFire = 4;
    };
    class rhs_ammo_556x45_Mk318_Ball : B_556x45_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //5.5;
    };
    class rhs_ammo_556x45_Mk262_Ball : B_556x45_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //5;
    };
    class rhs_ammo_762x51_M80_Ball : BulletBase {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //18
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
    };
    class rhs_ammo_762x51_M62_tracer : rhs_ammo_762x51_M80_Ball {
        visibleFire = 4;
    };
    class B_12Gauge_Slug;
    class rhs_ammo_12g_FRAG : B_12Gauge_Slug {
		dangerRadiusBulletClose = __AI_AMMO_RANGE_CRACKS;
    };
    class rhs_ammo_45ACP_MHP : BulletBase {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE0; //9;
		dangerRadiusBulletClose = 1; //subsonic
		dangerRadiusHit = __AI_AMMO_RANGE_HIT_SMALL;
		suppressionRadiusBulletClose = 1;
    };
    class rhs_ammo_9x19_FMJ : BulletBase {
        visibleFire = 2;
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
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1; //3;
    };

    class rhs_ammo_M136_rocket : RocketBase {
		audibleFire = __AI_AMMO_AUDIBLE1; //16;
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };
    class rhs_ammo_M_fgm172a_AT;
    class rhs_ammo_M_fgm172b_MPV : rhs_ammo_M_fgm172a_AT {
        aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir;
    };
    class rhs_ammo_smaw_HEAA : RocketBase {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
    };
    class rhs_ammo_smaw_HEDP : RocketBase {
		aiAmmoUsageFlags = AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveAir;
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

    class rhssaf_ammo_556x45_EPR : B_556x45_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class rhssaf_ammo_556x45_EPR_Tracer : rhssaf_ammo_556x45_EPR {
        visibleFire = 4;
    };
    class rhssaf_ammo_556x45_SOST : B_556x45_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class rhssaf_ammo_556x45_SPR : B_556x45_Ball {
        visibleFire = 2;
		audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class B_556x45_Ball_Tracer_Red;
    class rhssaf_ammo_556x45_Ball_Tracer_Dim : B_556x45_Ball_Tracer_Red {
        visibleFire = 2;
    };

};
