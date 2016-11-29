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
    class B_556x45_Ball;
    class B_556x45_Ball_Tracer_Red;
    class B_762x51_Ball;

    class HLC_556NATO_EPR : B_556x45_Ball {
        audibleFire = ASR_AI_AMMO_AUDIBLE1;
    };
    class HLC_556NATO_SOST : B_556x45_Ball {
        audibleFire = ASR_AI_AMMO_AUDIBLE1;
    };
    class HLC_556NATO_SPR : B_556x45_Ball {
        audibleFire = ASR_AI_AMMO_AUDIBLE1;
    };
    class HLC_300Blackout_Ball : B_556x45_Ball {};
    class HLC_300Blackout_SMK : HLC_300Blackout_Ball {
        audibleFire = ASR_AI_AMMO_AUDIBLE0;
    };
    class HLC_762x51_ball : B_762x51_Ball {};
    class HLC_762x51_BTSub : HLC_762x51_ball {
        audibleFire = ASR_AI_AMMO_AUDIBLE0;
    };
    class HLC_303Brit_B : B_556x45_Ball {};
    class HLC_792x57_Ball : HLC_303Brit_B {
        audibleFire = ASR_AI_AMMO_AUDIBLE1;
    };
    class HLC_792x57_Tracer : HLC_792x57_Ball {
        audibleFire = ASR_AI_AMMO_AUDIBLE1;
    };
    class HLC_792x57_AP : HLC_792x57_Ball {
        audibleFire = ASR_AI_AMMO_AUDIBLE1;
    };
    class HLC_300WM_FMJ : B_556x45_Ball {
        audibleFire = ASR_AI_AMMO_AUDIBLE1;
    };
    class HLC_300WM_Tracer : B_556x45_Ball {
        audibleFire = ASR_AI_AMMO_AUDIBLE1;
    };
    class HLC_300WM_BTSP : B_556x45_Ball {};
    class HLC_300WM_AP : HLC_300WM_BTSP {
        audibleFire = ASR_AI_AMMO_AUDIBLE1;
    };
    class HLC_300WM_BTHP : HLC_300WM_BTSP {
        audibleFire = ASR_AI_AMMO_AUDIBLE1;
    };
    class HLC_300WM_S_BT : HLC_300WM_BTSP {
        audibleFire = ASR_AI_AMMO_AUDIBLE0;
    };
    class HLC_GP11_FMJ : B_762x51_Ball {};
    class HLC_GP11_tracer : HLC_GP11_FMJ {
        audibleFire = ASR_AI_AMMO_AUDIBLE1;
    };
    class HLC_3006_FMJ : B_556x45_Ball {
        audibleFire = ASR_AI_AMMO_AUDIBLE1;
    };
    class HLC_9x19_Ball : B_556x45_Ball {};
    class HLC_9x19_Subsonic : HLC_9x19_Ball {
        audibleFire = ASR_AI_AMMO_AUDIBLE0;
    };
    class hlc_792x57_SS : B_556x45_Ball {
        audibleFire = ASR_AI_AMMO_AUDIBLE1;
    };
    class hlc_792x57_SmKLspr : B_556x45_Ball_Tracer_Red {
        audibleFire = ASR_AI_AMMO_AUDIBLE1;
    };
    class hlc_792x57_SmkH : B_556x45_Ball {
        audibleFire = ASR_AI_AMMO_AUDIBLE1;
    };
};