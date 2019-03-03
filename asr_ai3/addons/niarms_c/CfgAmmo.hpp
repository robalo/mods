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
    class BoundingMineBase;
    class SubmunitionBase;
    class B_556x45_Ball;
    class B_762x51_Ball;
    class B_12Gauge_Pellets;

    class VOG25P_Range_Ammo : BoundingMineBase {
        dangerRadiusHit = __AI_AMMO_RANGE_HIT_MEDIUM;
        suppressionRadiusHit = 24;
    };
    class VOG25P_SubMunition : SubmunitionBase {
        cost = 5;
        visibleFire = 1;
        audibleFire = 30;
    };

    class HLC_556NATO_EPR : B_556x45_Ball {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class HLC_556NATO_EPR_Tracer : HLC_556NATO_EPR {
        visibleFire = 4;
    };
    class HLC_556NATO_SOST : B_556x45_Ball {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class HLC_556NATO_SPR : B_556x45_Ball {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class B_556x45_Ball_Tracer_Red;
    class HLC_B_556x45_Ball_Tracer_Dim : B_556x45_Ball_Tracer_Red {
        visibleFire = 2;
    };
    class HLC_300Blackout_Ball : B_556x45_Ball {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class HLC_300Blackout_SMK : HLC_300Blackout_Ball {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE0;
        dangerRadiusBulletClose = 1;
		suppressionRadiusBulletClose = 1;
    };
    class HLC_300Blackout_RNBT : HLC_300Blackout_Ball {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE0;
        dangerRadiusBulletClose = 1;
		suppressionRadiusBulletClose = 1;
    };
    class HLC_762x39_Ball;
    class HLC_762x39_SUB : HLC_300Blackout_Ball {
        audibleFire = __AI_AMMO_AUDIBLE0;
        dangerRadiusBulletClose = 1;
		suppressionRadiusBulletClose = 1;
    };
    class HLC_762x39_Tracer : HLC_762x39_Ball {
        visibleFire = 4;
    };

    class B_762x51_Tracer_Yellow;
    class HLC_B_762x51_Tracer_Dim : B_762x51_Tracer_Yellow {
        visibleFire = 2;
    };
    class HLC_762x51_ball;
    class HLC_762x51_BTSub : HLC_762x51_ball {
        audibleFire = __AI_AMMO_AUDIBLE0;
        dangerRadiusBulletClose = 1;
		suppressionRadiusBulletClose = 1;
    };
    class HLC_762x51_tracer : HLC_762x51_ball {
        visibleFire = 4;
    };

    class HLC_303Brit_B;
    class HLC_303Brit_T : HLC_303Brit_B {
        visibleFire = 4;
    };

    class HLC_792x57_Ball : HLC_303Brit_B {
        audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class HLC_792x57_Tracer : HLC_792x57_Ball {
        audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class HLC_792x57_AP : HLC_792x57_Ball {
        audibleFire = __AI_AMMO_AUDIBLE1;
    };

    class HLC_300WM_FMJ : B_556x45_Ball {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE1;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
    };
    class HLC_300WM_Tracer : B_556x45_Ball {
        visibleFire = 4;
        audibleFire = __AI_AMMO_AUDIBLE1;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
    };
    class HLC_300WM_BTSP : B_556x45_Ball {
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
    };
    class HLC_300WM_AP : HLC_300WM_BTSP {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class HLC_300WM_BTHP : HLC_300WM_BTSP {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class HLC_300WM_S_BT : HLC_300WM_BTSP {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE0;
        dangerRadiusBulletClose = 1;
		suppressionRadiusBulletClose = 1;
    };

    class HLC_68x43_FMJ : B_556x45_Ball {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class hlc_68x43_OTM : HLC_68x43_FMJ {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class hlc_68x43_Sub :HLC_68x43_FMJ {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE0;
        dangerRadiusBulletClose = 1;
		suppressionRadiusBulletClose = 1;
    };

    class HLC_GP11_FMJ;
    class HLC_GP11_tracer : HLC_GP11_FMJ {
        visibleFire = 4;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };

    class HLC_3006_FMJ : B_556x45_Ball {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };

    class HLC_542x42_Tracer : HLC_303Brit_B {
        visibleFire = 4;
    };

    class FH_545x39_Ball : B_556x45_Ball {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class FH_545x39_Tracer : FH_545x39_Ball {
        visibleFire = 4;
    };
    class FH_545x39_7u1 : FH_545x39_Ball {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE0;
        dangerRadiusBulletClose = 1;
		suppressionRadiusBulletClose = 1;
    };
    class FH_545x39_EP : FH_545x39_Ball {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };

    class HLC_9x19_Ball : B_556x45_Ball {
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
    };
    class HLC_9x19_Subsonic : HLC_9x19_Ball {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE0;
        dangerRadiusBulletClose = 1;
		suppressionRadiusBulletClose = 1;
    };
    
    class HLC_357SIG_FMJ : B_556x45_Ball {
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
    };

    class HLC_40SW_FMJ : B_556x45_Ball {
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
    };

    class HLC_10mm_FMJ;
    class HLC_763x25_FMJ : HLC_10mm_FMJ {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };

    class HLC_45ACP_Ball : B_556x45_Ball {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE0;
        dangerRadiusBulletClose = 1;
		suppressionRadiusBulletClose = 1;
        suppressionRadiusHit = 4;
    };
    class HLC_45ACP_JHP : B_556x45_Ball {
        visibleFire = 2;
        audibleFire = __AI_AMMO_AUDIBLE0;
        dangerRadiusBulletClose = 1;
		suppressionRadiusBulletClose = 1;
        suppressionRadiusHit = 4;
    };
    class FH_45ACP_Tracer : HLC_45ACP_Ball {
        visibleFire = 4;
    };

    class HLC_12G_Distraction : B_556x45_Ball {
        visibleFire = 4;
        audibleFire = __AI_AMMO_AUDIBLE1;
    };

    class FH_44Mag : HLC_45ACP_Ball {
        audibleFire = __AI_AMMO_AUDIBLE1;
    };
    class FH_44Mag_FUNTRACER : FH_44Mag {
        visibleFire = 4;
    };
};
