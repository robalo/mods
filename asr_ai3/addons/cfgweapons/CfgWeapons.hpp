class Mode_SemiAuto {
	ASR_AI_ROF_RIFLE_SMALL_SEMI;
	ASR_AI_DISPERSION_COEF;
};
class Mode_Burst: Mode_SemiAuto {
	ASR_AI_ROF_RIFLE_SMALL_CLOSE_BURST;
	ASR_AI_DISPERSION_COEF;
};
class Mode_FullAuto: Mode_SemiAuto {
	ASR_AI_ROF_RIFLE_SMALL_FULLAUTO;
	ASR_AI_DISPERSION_COEF;
};

class CfgWeapons {

	class Default {
		ASR_AI_ROF_RIFLE_SMALL_SEMI;
		ASR_AI_DISPERSION_COEF;
	};
	class RifleCore;
	class MGunCore;
	class CannonCore;

	class MGun;

	class LMG_RCWS: MGun {
		ASR_AI_DISPERSION_COEF;
	};
	class M134_minigun: MGunCore {
		class LowROF: Mode_FullAuto {
			ASR_AI_DISPERSION_COEF;
		};
	};
	class autocannon_Base_F: CannonCore {
		class player;
		class close: player {
			ASR_AI_DISPERSION_COEF;
		};
	};
	class gatling_30mm: CannonCore {
		class LowROF: Mode_FullAuto {
			ASR_AI_DISPERSION_COEF;
		};
	};
	class cannon_120mm: CannonCore {
		class player;
		class close: player {
			ASR_AI_DISPERSION_COEF;
		};
	};
	class Gatling_30mm_Plane_CAS_01_F: CannonCore {
		class LowROF: Mode_FullAuto {
			ASR_AI_DISPERSION_COEF;
		};
	};
	class Cannon_30mm_Plane_CAS_02_F: CannonCore {
		class LowROF: Mode_FullAuto {
			ASR_AI_DISPERSION_COEF;
		};
	};
	class cannon_125mm : CannonCore {
		class player;
		class close: player {
			ASR_AI_DISPERSION_COEF;
		};
	};
	class cannon_105mm: CannonCore {
		class player;
		class close: player {
			ASR_AI_DISPERSION_COEF;
		};
	};

	class GrenadeLauncher: Default {
		ASR_AI_ROF_GL_SINGLE;
		ASR_AI_DISPERSION_COEF;
	};
    class UGL_F : GrenadeLauncher {
        class Single : Mode_SemiAuto {
            ASR_AI_ROF_GL_SINGLE;
        };
    };

	class Rifle: RifleCore {
		ASR_AI_DISPERSION_COEF;
	};
	class Rifle_Base_F: Rifle {};
    class Rifle_Short_Base_F : Rifle_Base_F {};
	class Rifle_Long_Base_F: Rifle_Base_F {};

	class HandGunBase: Rifle {
		ASR_AI_ROF_PISTOL_SEMI;
	};
	class Pistol;
	class Pistol_Base_F: Pistol {
		ASR_AI_ROF_PISTOL_SEMI;
	};

	class Throw: GrenadeLauncher {
		class ThrowMuzzle: GrenadeLauncher {
			ASR_AI_DISPERSION_COEF;
		};
		class HandGrenadeMuzzle: ThrowMuzzle {
			minRange = 20;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.9;
		};
		class MiniGrenadeMuzzle: ThrowMuzzle {
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.9;
		};
	};

	class DMR_01_base_F: Rifle_Long_Base_F {
 		modes[] = {"ASR_SemiAuto", "FullAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISPERSION_COEF;
	};

	class EBR_base_F: Rifle_Long_Base_F {
 		modes[] = {"ASR_SemiAuto", "FullAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISPERSION_COEF;
	};

	class GM6_base_F: Rifle_Long_Base_F {
		modes[] = {"Single", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2", "ASR_AI_Single_far_optics2"};
		ASR_AI_BIGSNIPER_MODES(Mode_SemiAuto);
	};

	class LRR_base_F: Rifle_Long_Base_F {
		modes[] = {"Single", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2", "ASR_AI_Single_far_optics2"};
		ASR_AI_BIGSNIPER_MODES(Mode_SemiAuto);
	};

	class LMG_Mk200_F: Rifle_Long_Base_F {
		modes[] = {
            "manual",
            "ASR_AI_Burst_long", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_toofar",
            "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_toofar_optic1",
            "ASR_AI_Burst_far_optic2", "ASR_AI_Burst_toofar_optic2"
        };
		ASR_AI_MG_MODES(manual,Mode_FullAuto,manual);
		ASR_AI_DISPERSION_COEF;
	};

	class LMG_Zafir_F: Rifle_Long_Base_F {
		modes[] = {
            "FullAuto", "Single",
            "ASR_AI_Burst_long", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_toofar",
            "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_toofar_optic1",
            "ASR_AI_Burst_far_optic2", "ASR_AI_Burst_toofar_optic2"
        };
		ASR_AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
		ASR_AI_DISPERSION_COEF;
	};

    class hgun_ACPC2_F : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            ASR_AI_ROF_PISTOL_SEMI;
        };
    };
    class hgun_P07_F : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            ASR_AI_ROF_PISTOL_SEMI;
        };
    };
    class hgun_Pistol_heavy_01_F : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            ASR_AI_ROF_PISTOL_SEMI;
        };
    };
    class hgun_Pistol_heavy_02_F : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            ASR_AI_ROF_PISTOL_SEMI;
        };
    };
    class hgun_Rook40_F : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            ASR_AI_ROF_PISTOL_SEMI;
        };
    };

	class arifle_Katiba_Base_F: Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISPERSION_COEF;
		class EGLM: UGL_F {};
	};
	class arifle_Katiba_C_F: arifle_Katiba_Base_F {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
		ASR_AI_DISPERSION_COEF;
	};

	class mk20_base_F: Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISPERSION_COEF;
	};
	class arifle_Mk20C_F: mk20_base_F {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
	};

	class arifle_MX_Base_F: Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISPERSION_COEF;
	};
	class arifle_MXC_F: arifle_MX_Base_F {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
		ASR_AI_DISPERSION_COEF;
	};
	class arifle_MX_SW_F: arifle_MX_Base_F {
		modes[] = {
            "Single", "manual",
            "ASR_AI_Burst_long", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far",
            "ASR_AI_Burst_far_optic1",
            "ASR_AI_Burst_far_optic2"
        };
		ASR_AI_MG_MODES(manual,FullAuto,Mode_SemiAuto);
		ASR_AI_DISPERSION_COEF;
	};
	class arifle_MXM_F: arifle_MX_Base_F {
		modes[] = {"ASR_SemiAuto", "FullAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Single,FullAuto);
	};

	class SDAR_base_F: Rifle_Base_F {
		modes[] = {"Single", "Burst", "FullAuto"};
		ASR_AI_SMG_MODES;
		ASR_AI_DISPERSION_COEF;
	};

	class Tavor_base_F: Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_CQB_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISPERSION_COEF;
	};
	class arifle_TRG21_F: Tavor_base_F {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Single,FullAuto);
	};

	class pdw2000_base_F: Rifle_Short_Base_F {
		modes[] = {"Single", "Burst", "FullAuto"};
		class Single: Mode_SemiAuto {
			ASR_AI_ROF_SMG_SINGLE;
		};
		class Burst: Mode_Burst {
			showToPlayer = 0;
			burst = 2 + round random 3;
			ASR_AI_ROF_SMG_BURST;
		};
		class FullAuto: Mode_FullAuto {
			ASR_AI_ROF_SMG_FULLAUTO;
		};
	};

	class SMG_01_Base: Rifle_Short_Base_F {
		modes[] = {"Single", "Burst", "FullAuto"};
		class Single: Mode_SemiAuto {
			ASR_AI_ROF_SMG_SINGLE;
		};
		class Burst: Mode_Burst {
			burst = 2;
			ASR_AI_ROF_SMG_BURST;
		};
		class FullAuto: Mode_FullAuto {
			ASR_AI_ROF_SMG_FULLAUTO;
		};
		ASR_AI_DISPERSION_COEF;
	};

	class SMG_02_base_F: Rifle_Short_Base_F {
		modes[] = {"Single", "Burst", "FullAuto"};
		ASR_AI_SMG_MODES;
		ASR_AI_DISPERSION_COEF;
	};


	class ItemCore;

	class InventoryMuzzleItem_Base_F;

	class muzzle_snds_H: ItemCore {
		class ItemInfo: InventoryMuzzleItem_Base_F {
			ASR_SUPP_COEFF;
		};
	};
	class muzzle_snds_L : muzzle_snds_H {
		class ItemInfo: ItemInfo {
			ASR_SUPP_COEFF;
		};
	};
	class muzzle_snds_M: muzzle_snds_H {
		class ItemInfo: ItemInfo {
			ASR_SUPP_COEFF;
		};
	};
	class muzzle_snds_B : muzzle_snds_H {
		class ItemInfo: ItemInfo {
			ASR_SUPP_COEFF;
		};
	};
	class muzzle_snds_H_MG: muzzle_snds_H {
		class ItemInfo: ItemInfo {
			ASR_SUPP_COEFF;
		};
	};
	class muzzle_snds_H_SW : muzzle_snds_H_MG {
		class ItemInfo: ItemInfo {
			ASR_SUPP_COEFF;
		};
	};
	class muzzle_snds_acp: muzzle_snds_H {
		class ItemInfo: ItemInfo {
			ASR_SUPP_COEFF;
		};
	};
	class muzzle_snds_338_black : ItemCore {
		class ItemInfo : InventoryMuzzleItem_Base_F {
			ASR_SUPP_COEFF;
		};
	};
	class muzzle_snds_93mmg : ItemCore {
		class ItemInfo : InventoryMuzzleItem_Base_F {
			ASR_SUPP_COEFF;
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
		modes[] = {"Single", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_338SNIPER_MODES(Mode_SemiAuto);
		ASR_AI_DISPERSION_COEF;
	};

	class DMR_03_base_F : Rifle_Long_Base_F {
 		modes[] = {"ASR_SemiAuto", "FullAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISPERSION_COEF;
	};

	class DMR_04_base_F : Rifle_Long_Base_F {
		ASR_AI_DISPERSION_COEF;
	};

	class DMR_05_base_F : Rifle_Long_Base_F {
		ASR_AI_DISPERSION_COEF;
	};

	class DMR_06_base_F : Rifle_Long_Base_F {
 		modes[] = {"ASR_SemiAuto", "FullAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISPERSION_COEF;
	};

	class MMG_01_base_F : Rifle_Long_Base_F {
		ASR_AI_DISPERSION_COEF;
		modes[] = {
            "manual",
            "ASR_AI_Burst_long", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_toofar",
            "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_toofar_optic1",
            "ASR_AI_Burst_far_optic2", "ASR_AI_Burst_toofar_optic2"
        };
		ASR_AI_MG_MODES(manual,Mode_FullAuto,Mode_SemiAuto);
	};

	class MMG_02_base_F : Rifle_Long_Base_F {
		ASR_AI_DISPERSION_COEF;
		modes[] = {
            "manual",
            "ASR_AI_Burst_long", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_toofar",
            "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_toofar_optic1",
            "ASR_AI_Burst_far_optic2", "ASR_AI_Burst_toofar_optic2"
        };
		ASR_AI_MG_MODES(manual,Mode_FullAuto,Mode_SemiAuto);
	};

    class DMR_07_base_F : Rifle_Long_Base_F {
		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISPERSION_COEF;
    };

    class LMG_03_base_F : Rifle_Long_Base_F {
       // modes[] = {"FullAutoSlow", "FullAutoFast", "close", "short", "medium", "far_optic1", "far_optic2"};
		ASR_AI_DISPERSION_COEF;
    };

    class hgun_Pistol_01_F : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            ASR_AI_ROF_PISTOL_SEMI;
        };
    };

    class arifle_AK12_base_F : Rifle_Base_F {
		modes[] = {"FullAuto", "Burst", "Single", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		class Single: Mode_SemiAuto {
			ASR_AI_ROF_RIFLE_SMALL_SINGLE;
			ASR_AI_DISPERSION_COEF;
		};
        class Burst : Mode_Burst {
			ASR_AI_ROF_RIFLE_SMALL_CLOSE_BURST;
			ASR_AI_DISPERSION_COEF;
		};
		class FullAuto: Mode_FullAuto {
			ASR_AI_ROF_RIFLE_SMALL_FULLAUTO;
			ASR_AI_DISPERSION_COEF;
		};
        ASR_AI_RIFLE_SMALL_XMODES;
    };

    class arifle_AKM_base_F : Rifle_Base_F {
		modes[] = {"FullAuto", "Single", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_AK_MODES(Mode_SemiAuto,Mode_FullAuto);
    };

    class arifle_AKS_base_F : Rifle_Base_F {
		modes[] = {"FullAuto", "Single", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_CQB_MODES(Mode_SemiAuto,Mode_FullAuto);
    };

    class arifle_ARX_base_F : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
        class Secondary : Rifle_Base_F {
            //modes[] = {"Single"};
        };
		ASR_AI_DISPERSION_COEF;
    };

    class arifle_CTAR_base_F : Rifle_Base_F {
		modes[] = {"FullAuto", "Single", "ASR_AI_Burst_close", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class arifle_CTAR_GL_base_F : arifle_CTAR_base_F {
		ASR_AI_DISPERSION_COEF;
    };
    class arifle_CTARS_base_F : Rifle_Base_F {
		modes[] = {
            "FullAuto", "Single",
            "ASR_AI_Burst_long", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far",
            "ASR_AI_Burst_far_optic1",
            "ASR_AI_Burst_far_optic2"
        };
		ASR_AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
    };

    class arifle_SPAR_01_base_F : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class arifle_SPAR_01_GL_base_F : arifle_SPAR_01_base_F {
		ASR_AI_DISPERSION_COEF;
    };
    class arifle_SPAR_02_base_F : Rifle_Base_F {
		modes[] = {
            "Single", "FullAuto",
            "ASR_AI_Burst_long", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far",
            "ASR_AI_Burst_far_optic1",
            "ASR_AI_Burst_far_optic2"
        };
		ASR_AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
    };
    class arifle_SPAR_03_base_F : Rifle_Base_F {
 		modes[] = {"ASR_SemiAuto", "FullAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
    };

    class SMG_05_base_F : Rifle_Short_Base_F {
        //modes[] = {"Single", "FullAuto"};
		ASR_AI_SMG_MODES;
    };

};
