class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {

	#include "items.hpp"

	class Rifle_Base_F;
    class Rifle_Short_Base_F : Rifle_Base_F {};
	class Rifle_Long_Base_F;
	class Pistol_Base_F;
    class Launcher_Base_F;
    class MGun;
    class PKT;
    class LMG_RCWS;
    class gatling_30mm;
    class GMG_20mm;
    class cannon_120mm;
    class autocannon_30mm_CTWS;
    class rockets_Skyfire;
    class hgun_Rook40_F;

    class rhs_weap_pkt : PKT {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_DSHKM : LMG_RCWS {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_nsvt : rhs_weap_DSHKM {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_kpvt : MGun {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_yakB : gatling_30mm {
		__AI_DISPERSION_COEF;
    };
    class RHS_weap_Ags30 : GMG_20mm {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_d81 : cannon_120mm {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_2a26 : rhs_weap_d81 {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_2a46_2 : rhs_weap_d81 {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_2a46m_2 : rhs_weap_d81 {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_2a46m : rhs_weap_2a46m_2 {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_2a46m_4 : rhs_weap_2a46m_2 {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_2a46m_5 : rhs_weap_2a46m_2 {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_2a42_base : autocannon_30mm_CTWS {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_2a70 : rhs_weap_d81 {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_2a75 : rhs_weap_d81 {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_2a28_base : cannon_120mm {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_pkm_tigr : rhs_weap_pkt {
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_s5 : rockets_Skyfire {
        __AI_DISPERSION_COEF;
    };

    class UGL_F;
	class GP25_Base: UGL_F {
		class Single: Mode_SemiAuto {
            __AI_ROF_GL_SINGLE;
        };
    };

    class rhs_weap_ak74m_Base_F : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Burst_far", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_AK_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_ak74m : rhs_weap_ak74m_Base_F {};
    class rhs_weap_asval : rhs_weap_ak74m {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
        __AI_DISPERSION_COEF;
    };
    class rhs_weap_ak105 : rhs_weap_ak74m {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
    };
    class rhs_weap_akm : rhs_weap_ak74m {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Burst_far", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_AK_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class rhs_weap_ak103_base : rhs_weap_akm {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Burst_far", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_AK_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class rhs_weap_ak104 : rhs_weap_ak103_base {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
    };
    class rhs_weap_ak103_1 : rhs_weap_ak103_base {
		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class rhs_weap_ak103_2 : rhs_weap_ak103_base {
		modes[] = {"Single", "Burst3", "FullAuto", "AI_Burst_close", "AI_Burst_far", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_AK_MODES(Mode_SemiAuto,FullAuto);
    };
    class rhs_weap_ak74 : rhs_weap_ak74m {};
    class rhs_weap_aks74 : rhs_weap_ak74 {};
    class rhs_weap_aks74u : rhs_weap_aks74 {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_svd : rhs_weap_ak74m {
 		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);

    };
    class rhs_weap_svdp : rhs_weap_svd {
 		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
    };

    class pdw2000_base_F : Rifle_Short_Base_F {
        class Single;
        class FullAuto;
    };
    class hgun_PDW2000_F : pdw2000_base_F {};

    class rhs_weap_pp2000 : hgun_PDW2000_F {
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
			burst = 4;
			__AI_ROF_SMG_BURST;
		};
    };
    class rhs_weap_pya : hgun_Rook40_F {
		__AI_ROF_PISTOL_SEMI;
    };
    class rhs_weap_makarov_pm : rhs_weap_pya {
		__AI_ROF_PISTOL_SEMI;
    };
    class rhs_pkp_base : Rifle_Long_Base_F {
		modes[] = {
            "FullAuto",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar",
            "AI_far_optic1", "AI_toofar_optic1",
            "AI_far_optic2", "AI_toofar_optic2"
        };
		__AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_pkp : rhs_pkp_base {};
    class rhs_weap_pkm : rhs_weap_pkp {
		modes[] = {
            "manual",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar"
        };
		__AI_MG_MODES(manual,FullAuto,manual);
    };
    class rhs_weap_rpk74m : rhs_weap_pkp {
		modes[] = {
            "manual", "Single",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far",
            "AI_far_optic1",
            "AI_far_optic2"
        };
		__AI_MG_MODES(manual,Mode_FullAuto,Mode_SemiAuto);
    };

    class rhs_weap_orsis_Base_F : Rifle_Base_F {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2", "AI_Single_far_optics2"};
		__AI_BIGSNIPER_MODES(Mode_SemiAuto);
		__AI_DISPERSION_COEF;
    };

    class rhs_weap_rpg26 : Launcher_Base_F {
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 200;
		midRangeProbab = 0.8;
		maxRange = 400;
		maxRangeProbab = 0.1;
    };
    class rhs_weap_rpg7 : Launcher_Base_F {
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 200;
		midRangeProbab = 0.8;
		maxRange = 400;
		maxRangeProbab = 0.1;
    };

};
