class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {

	#include "items.hpp"
	#include "uniforms.hpp"
	#include "vests.hpp"

    class rhs_weap_M197;
    class rhs_weap_gi2_base : rhs_weap_M197 {
		__AI_DISPERSION_HALFCOEF;
    };
    class gatling_30mm;
    class RHS_weap_zpl20 : gatling_30mm {
		__AI_DISPERSION_HALFCOEF;
    };

    class Rifle_Base_F;
    class rhs_weap_kar98k_Base_F : Rifle_Base_F {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUMSEMI_MODES(Mode_SemiAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_m38_Base_F : Rifle_Base_F {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUMSEMI_MODES(Mode_SemiAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_m38 : rhs_weap_m38_Base_F {};
    class rhs_weap_m38_rail : rhs_weap_m38 {};
    class rhs_weap_mosin_sbr : rhs_weap_m38_rail {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,Single);
    };
    class rhs_weap_m70_base : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Burst_far", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_AK_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_m92 : rhs_weap_m70_base {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
    };
    class rhs_weap_m76 : rhs_weap_m70_base {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUMSEMI_MODES(Mode_SemiAuto);
    };
    class rhs_weap_m21_base : rhs_weap_m70_base {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
	class rhs_weap_m21a_pr: rhs_weap_m21_base {};
    class rhs_weap_m21s : rhs_weap_m21_base {
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };
    class rhs_weap_m21s_pr : rhs_weap_m21a_pr {
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };

    class Rifle_Short_Base_F;
    class SMG_01_Base : Rifle_Short_Base_F {
        class Single;
        class FullAuto;
    };
    class SMG_01_F : SMG_01_Base {};

    class rhs_weap_savz61 : SMG_01_F {
        modes[] = {"Single", "FullAuto", "AI_Burst_close"};
		class Single: Single {
			__AI_ROF_SMG_SINGLE;
		};
		class FullAuto: FullAuto {
			__AI_ROF_SMG_FULLAUTO;
		};
		class AI_Burst_close: FullAuto {
			showToPlayer = 0;
            aiBurstTerminable = 1;
			burst = 2;
            burstRangeMax = 7;
			__AI_ROF_SMG_BURST;
		};
    };
    class rhs_weap_savz58_base : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Burst_far", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_AK_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_Izh18 : Rifle_Base_F {
        class Single : Mode_SemiAuto {
            __AI_ROF_SHOTGUN_SEMI;
		};
    };

    class rhs_weap_vhs2_base : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };

    class rhs_weap_stgw57_base : Rifle_Base_F {
 		modes[] = {"Single", "FullAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };

    class rhs_weap_m3a1_base : Rifle_Base_F {
        modes[] = {"FullAuto", "AI_Burst_close"};
        class FullAuto : Mode_FullAuto {
            __AI_ROF_SMG_FULLAUTO;
        };
		class AI_Burst_close: FullAuto {
			showToPlayer = 0;
            aiBurstTerminable = 1;
			burst = 2;
            burstRangeMax = 6;
			__AI_ROF_SMG_BURST;
		};
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_MP44_base : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Burst_far", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_AK_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_M1garand_Base_F : Rifle_Base_F {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUMSEMI_MODES(Mode_SemiAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_mg42_base : Rifle_Base_F {
		modes[] = {
            "manual",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar",
            "AI_far_optic1", "AI_toofar_optic1",
            "AI_far_optic2", "AI_toofar_optic2"
        };
		__AI_MG_MODES(manual,Mode_FullAuto,manual);
		__AI_DISPERSION_COEF;
	};
    class rhs_weap_m79 : Rifle_Base_F {
        modes[] = {"Single"};
        class Single : Mode_SemiAuto {
            __AI_ROF_GL_SINGLE;
        };
        __AI_DISPERSION_2XCOEF;
    };
    class rhs_weap_pya;
    class rhs_weap_tt33 : rhs_weap_pya {
        class Single : Mode_SemiAuto {
            __AI_ROF_PISTOL_SEMI;
		};
    };
};
