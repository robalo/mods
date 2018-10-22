class Mode_SemiAuto {
	__AI_ROF_RIFLE_SMALL_SEMI;
};
class Mode_Burst: Mode_SemiAuto {
	__AI_ROF_RIFLE_SMALL_CLOSE_BURST;
};
class Mode_FullAuto: Mode_SemiAuto {
	__AI_ROF_RIFLE_SMALL_FULLAUTO;
};

class CfgWeapons {

	class Default {
		__AI_ROF_RIFLE_SMALL_SEMI;
	};
    class PistolCore : Default {
		__AI_DISPERSION_COEF;
    };
    class RifleCore : Default {
		__AI_DISPERSION_COEF;
    };
    class MGunCore : Default {
		__AI_DISPERSION_COEF;
    };
    class LauncherCore : Default {
		__AI_DISPERSION_COEF;
    };
    class GrenadeCore : Default {
        __AI_DISPERSION_2XCOEF;
    };
    class CannonCore : Default {
		__AI_DISPERSION_THIRDCOEF;
    };
    class RocketPods : LauncherCore {
		__AI_DISPERSION_THIRDCOEF;
	};
    class MGun : MGunCore {
		__AI_DISPERSION_COEF;
    };
	class LMG_RCWS: MGun {
		__AI_DISPERSION_HALFCOEF;
	};
    class LMG_Minigun : LMG_RCWS {
		__AI_DISPERSION_HALFCOEF;
	};
    class HMG_127 : LMG_RCWS {
		__AI_DISPERSION_HALFCOEF;
	};
    class HMG_01 : HMG_127 {
		__AI_DISPERSION_HALFCOEF;
    };
    class HMG_static : HMG_01 {
		__AI_DISPERSION_COEF;
	};
    class HMG_M2 : HMG_01 {
		__AI_DISPERSION_COEF;
	};
	class M134_minigun: MGunCore {
		__AI_DISPERSION_HALFCOEF;
	};
    class gatling_20mm : CannonCore {
		__AI_DISPERSION_HALFCOEF;
	};
    class gatling_30mm_base : CannonCore {
		__AI_DISPERSION_HALFCOEF;
	};
	class cannon_120mm: CannonCore {
		__AI_DISPERSION_THIRDCOEF;
	};
	class cannon_125mm : CannonCore {
		__AI_DISPERSION_THIRDCOEF;
	};
	class cannon_105mm: CannonCore {
		__AI_DISPERSION_THIRDCOEF;
	};
    class Gatling_30mm_Plane_CAS_01_F : CannonCore {
		__AI_DISPERSION_HALFCOEF;
	};

	class GrenadeLauncher: Default {
        __AI_DISPERSION_2XCOEF;
		__AI_ROF_GL_SINGLE;
	};
    class UGL_F : GrenadeLauncher {
        class Single : Mode_SemiAuto {
            __AI_ROF_GL_SINGLE;
        };
        __AI_DISPERSION_2XCOEF;
    };

	class Rifle: RifleCore {
		__AI_DISPERSION_COEF;
	};
	class Rifle_Base_F: Rifle {};
    class Rifle_Short_Base_F : Rifle_Base_F {};
	class Rifle_Long_Base_F: Rifle_Base_F {};

	class HandGunBase: Rifle {
		__AI_ROF_PISTOL_SEMI;
	};
	class Pistol;
	class Pistol_Base_F: Pistol {
		__AI_ROF_PISTOL_SEMI;
	};

	class Throw: GrenadeLauncher {
        class ThrowMuzzle : GrenadeLauncher {
            __AI_DISPERSION_2XCOEF;
        };
		class HandGrenadeMuzzle: ThrowMuzzle {
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 50;
			midRangeProbab = 0.8;
		};
		class MiniGrenadeMuzzle: ThrowMuzzle {
			minRange = 15;
			minRangeProbab = 0.7;
			midRange = 50;
			midRangeProbab = 0.8;
		};
	};

    class Binocular : Default {
        minRangeProbab = 0;
        midRangeProbab = 0;
        maxRangeProbab = 0.001;
        reloadtime = 1;
	};

	class DMR_01_base_F: Rifle_Long_Base_F {
 		modes[] = {"SemiAuto", "FullAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
	};

	class EBR_base_F: Rifle_Long_Base_F {
 		modes[] = {"SemiAuto", "FullAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
	};

	class GM6_base_F: Rifle_Long_Base_F {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2", "AI_Single_far_optics2"};
		__AI_BIGSNIPER_MODES(Mode_SemiAuto);
	};

	class LRR_base_F: Rifle_Long_Base_F {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2", "AI_Single_far_optics2"};
		__AI_BIGSNIPER_MODES(Mode_SemiAuto);
	};

	class LMG_Mk200_F: Rifle_Long_Base_F {
		modes[] = {
            "manual",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar",
            "AI_far_optic1", "AI_toofar_optic1",
            "AI_far_optic2", "AI_toofar_optic2"
        };
		__AI_MG_MODES(manual,Mode_FullAuto,manual);
		__AI_DISPERSION_COEF;
	};

	class LMG_Zafir_F: Rifle_Long_Base_F {
		modes[] = {
            "FullAuto", "Single",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar",
            "AI_far_optic1", "AI_toofar_optic1",
            "AI_far_optic2", "AI_toofar_optic2"
        };
		__AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
		__AI_DISPERSION_COEF;
	};

    class hgun_ACPC2_F : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            __AI_ROF_PISTOL_SEMI;
        };
    };
    class hgun_P07_F : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            __AI_ROF_PISTOL_SEMI;
        };
    };
    class hgun_Pistol_heavy_01_F : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            __AI_ROF_PISTOL_SEMI;
        };
    };
    class hgun_Pistol_heavy_02_F : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            __AI_ROF_PISTOL_SEMI;
        };
    };
    class hgun_Rook40_F : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            __AI_ROF_PISTOL_SEMI;
        };
    };

	class arifle_Katiba_Base_F: Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
	};
	class arifle_Katiba_C_F: arifle_Katiba_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
		__AI_DISPERSION_COEF;
	};

	class mk20_base_F: Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
	};
	class arifle_Mk20C_F: mk20_base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
	};
    class arifle_Mk20_GL_F : mk20_base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
	};

	class arifle_MX_Base_F: Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
	};
	class arifle_MXC_F: arifle_MX_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
		__AI_DISPERSION_COEF;
	};
	class arifle_MX_SW_F: arifle_MX_Base_F {
		modes[] = {
            "Single", "manual",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far",
            "AI_far_optic1",
            "AI_far_optic2"
        };
		__AI_MG_MODES(manual,FullAuto,Mode_SemiAuto);
		__AI_DISPERSION_COEF;
	};
	class arifle_MXM_F: arifle_MX_Base_F {
		modes[] = {"SemiAuto", "FullAuto", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
	};

	class SDAR_base_F: Rifle_Base_F {
		modes[] = {"Single", "Burst", "FullAuto"};
		__AI_SMG_MODES;
		__AI_DISPERSION_COEF;
	};

	class Tavor_base_F: Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
	};
	class arifle_TRG21_F: Tavor_base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
	};

	class pdw2000_base_F: Rifle_Short_Base_F {
		modes[] = {"Single", "Burst", "FullAuto"};
		class Single: Mode_SemiAuto {
			__AI_ROF_SMG_SINGLE;
		};
		class Burst: Mode_Burst {
			showToPlayer = 0;
			burst = 2;
            burstRangeMax = 8;
			__AI_ROF_SMG_BURST;
		};
		class FullAuto: Mode_FullAuto {
			__AI_ROF_SMG_FULLAUTO;
		};
	};

	class SMG_01_Base: Rifle_Short_Base_F {
		modes[] = {"Single", "Burst", "FullAuto"};
		class Single: Mode_SemiAuto {
			__AI_ROF_SMG_SINGLE;
		};
		class Burst: Mode_Burst {
			burst = 2;
			__AI_ROF_SMG_BURST;
		};
		class FullAuto: Mode_FullAuto {
			__AI_ROF_SMG_FULLAUTO;
		};
		__AI_DISPERSION_COEF;
	};

	class SMG_02_base_F: Rifle_Short_Base_F {
		modes[] = {"Single", "Burst", "FullAuto"};
		__AI_SMG_MODES;
		__AI_DISPERSION_COEF;
	};


	class ItemCore;

	class InventoryMuzzleItem_Base_F;

	class muzzle_snds_H: ItemCore {
		class ItemInfo: InventoryMuzzleItem_Base_F {
			__AI_SUPP_COEFF;
		};
	};
	class muzzle_snds_L : muzzle_snds_H {
		class ItemInfo: ItemInfo {
			__AI_SUPP_COEFF;
		};
	};
	class muzzle_snds_M: muzzle_snds_H {
		class ItemInfo: ItemInfo {
			__AI_SUPP_COEFF;
		};
	};
	class muzzle_snds_B : muzzle_snds_H {
		class ItemInfo: ItemInfo {
			__AI_SUPP_COEFF;
		};
	};
	class muzzle_snds_H_MG: muzzle_snds_H {
		class ItemInfo: ItemInfo {
			__AI_SUPP_COEFF;
		};
	};
	class muzzle_snds_H_SW : muzzle_snds_H_MG {
		class ItemInfo: ItemInfo {
			__AI_SUPP_COEFF;
		};
	};
	class muzzle_snds_acp: muzzle_snds_H {
		class ItemInfo: ItemInfo {
			__AI_SUPP_COEFF;
		};
	};
	class muzzle_snds_338_black : ItemCore {
		class ItemInfo : InventoryMuzzleItem_Base_F {
			__AI_SUPP_COEFF;
		};
	};
	class muzzle_snds_93mmg : ItemCore {
		class ItemInfo : InventoryMuzzleItem_Base_F {
			__AI_SUPP_COEFF;
		};
	};

	class InventoryOpticsItem_Base_F;

	class optic_NVS : ItemCore {
		class ItemInfo : InventoryOpticsItem_Base_F {
			opticType = 1;
		};
	};
	class optic_tws : ItemCore {
		class ItemInfo : InventoryOpticsItem_Base_F {
			opticType = 1;
		};
	};
	class optic_tws_mg : ItemCore {
		class ItemInfo : InventoryOpticsItem_Base_F {
			opticType = 1;
		};
	};


	class DMR_02_base_F : Rifle_Long_Base_F {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_338SNIPER_MODES(Mode_SemiAuto);
		__AI_DISPERSION_COEF;
	};

	class DMR_03_base_F : Rifle_Long_Base_F {
 		modes[] = {"SemiAuto", "FullAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
	};

	class DMR_04_base_F : Rifle_Long_Base_F {
		__AI_DISPERSION_COEF;
	};

	class DMR_05_base_F : Rifle_Long_Base_F {
		__AI_DISPERSION_COEF;
	};

	class DMR_06_base_F : Rifle_Long_Base_F {
 		modes[] = {"SemiAuto", "FullAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
	};

	class MMG_01_base_F : Rifle_Long_Base_F {
		__AI_DISPERSION_COEF;
		modes[] = {
            "manual",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar",
            "AI_far_optic1", "AI_toofar_optic1",
            "AI_far_optic2", "AI_toofar_optic2"
        };
		__AI_MG_MODES(manual,Mode_FullAuto,Mode_SemiAuto);
	};

	class MMG_02_base_F : Rifle_Long_Base_F {
		__AI_DISPERSION_COEF;
		modes[] = {
            "manual",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar",
            "AI_far_optic1", "AI_toofar_optic1",
            "AI_far_optic2", "AI_toofar_optic2"
        };
		__AI_MG_MODES(manual,Mode_FullAuto,Mode_SemiAuto);
	};

    class DMR_07_base_F : Rifle_Long_Base_F {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_MEDIUMSEMI_MODES(Mode_SemiAuto);
		__AI_DISPERSION_COEF;
    };

    class LMG_03_base_F : Rifle_Long_Base_F {
		modes[] = {
            "FullAutoFast", "FullAutoSlow",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar",
            "AI_far_optic1", "AI_toofar_optic1",
            "AI_far_optic2", "AI_toofar_optic2"
        };
        class FullAutoSlow;
		__AI_MG_MODES(FullAutoFast,FullAutoSlow,Mode_SemiAuto);
		__AI_DISPERSION_COEF;
    };

    class hgun_Pistol_01_F : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            __AI_ROF_PISTOL_SEMI;
        };
    };

    class arifle_AK12_base_F : Rifle_Base_F {
		modes[] = {"Single", "Burst", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_Burst_far"};
		class Single: Mode_SemiAuto {
			__AI_ROF_AK_SINGLE;
		};
        class Burst : Mode_Burst {
			__AI_ROF_AK_SHORT_BURST;
		};
		class FullAuto: Mode_FullAuto {
			__AI_ROF_AK_FULLAUTO;
		};
		class AI_Burst_close: FullAuto {
			showToPlayer = 0;
            aiBurstTerminable = 1;
			burst = 3;
            burstRangeMax = 10;
			__AI_ROF_AK_CLOSE_BURST;
		};
		class AI_Burst_far: AI_Burst_close {
            burstRangeMax = 5;
			__AI_ROF_AK_FAR_BURST;
		};
		class AI_Single_optics1: Single {
			showToPlayer = 0;
			requiredOpticType = 1;
			__AI_ROF_AK_MSCOPE_SINGLE;
		};
		class AI_Single_optics2: AI_Single_optics1 {
			requiredOpticType = 2;
			__AI_ROF_AK_HSCOPE_SINGLE;
		};
    };

    class arifle_AKM_base_F : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Burst_far", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_AK_MODES(Mode_SemiAuto,Mode_FullAuto);
    };

    class arifle_AKS_base_F : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Mode_SemiAuto,Mode_FullAuto);
    };

    class arifle_ARX_base_F : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
        class Secondary : Rifle_Base_F {
            //modes[] = {"Single"};
        };
		__AI_DISPERSION_COEF;
    };

    class arifle_CTAR_base_F : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class arifle_CTAR_GL_base_F : arifle_CTAR_base_F {
		__AI_DISPERSION_COEF;
    };
    class arifle_CTARS_base_F : Rifle_Base_F {
		modes[] = {
            "Single", "FullAuto", 
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far",
            "AI_far_optic1",
            "AI_far_optic2"
        };
		__AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
    };

    class arifle_SPAR_01_base_F : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class arifle_SPAR_01_GL_base_F : arifle_SPAR_01_base_F {
		__AI_DISPERSION_COEF;
    };
    class arifle_SPAR_02_base_F : Rifle_Base_F {
		modes[] = {
            "Single", "FullAuto",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far",
            "AI_far_optic1",
            "AI_far_optic2"
        };
		__AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
    };
    class arifle_SPAR_03_base_F : Rifle_Base_F {
 		modes[] = {"SemiAuto", "FullAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
    };

    class SMG_05_base_F : Rifle_Short_Base_F {
        modes[] = {"Single", "FullAuto", "AI_Burst_close"};
		class Single: Mode_SemiAuto {
			__AI_ROF_SMG_SINGLE;
		};
		class FullAuto: Mode_FullAuto {
			__AI_ROF_SMG_FULLAUTO;
		};
		class AI_Burst_close: FullAuto {
			showToPlayer = 0;
            aiBurstTerminable = 1;
			burst = 2;
            burstRangeMax = 8;
			__AI_ROF_SMG_BURST;
		};
    };

};
