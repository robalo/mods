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

    class PKT;
    class LMG_RCWS;
    class KPVT;
    class gatling_30mm;
    class autocannon_30mm_CTWS;
    class rockets_Skyfire;
    class hgun_Rook40_F;

    class rhs_weap_pkt : PKT {
		ASR_AI_DISPERSION_COEF;
    };
    class rhs_weap_DSHKM : LMG_RCWS {
		ASR_AI_DISPERSION_COEF;
    };
    class rhs_weap_nsvt : rhs_weap_DSHKM {
		ASR_AI_DISPERSION_COEF;
    };
    class rhs_weap_kpvt : KPVT {
		ASR_AI_DISPERSION_COEF;
    };
    class rhs_weap_yakB : gatling_30mm {
        class manual : Mode_FullAuto {
            ASR_AI_DISPERSION_COEF;
        };
    };
    class rhs_weap_pkm_tigr : rhs_weap_pkt {
		ASR_AI_DISPERSION_COEF;
    };
    class rhs_weap_2a42_base : autocannon_30mm_CTWS {
        class LowROFBMD2 : Mode_FullAuto {
            ASR_AI_DISPERSION_COEF;
        };
    };
    class rhs_weap_2a42 : rhs_weap_2a42_base {};
    class rhs_weap_2a72_base : rhs_weap_2a42 {
        class LowROFBMD2 : LowROFBMD2 {
            ASR_AI_DISPERSION_COEF;
        };
    };
    class rhs_weap_s5 : rockets_Skyfire {
        ASR_AI_DISPERSION_COEF;
    };


    class rhs_weap_ak74m_Base_F : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", ASR_AI_Burst_close2, "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISPERSION_COEF;
    };
    class rhs_weap_ak74m : rhs_weap_ak74m_Base_F {};
    class rhs_weap_asval : rhs_weap_ak74m {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", ASR_AI_Burst_close2, "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
    };
    class rhs_weap_ak105 : rhs_weap_ak74m {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", ASR_AI_Burst_close2, "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
    };
    class rhs_weap_akm : rhs_weap_ak74m {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", ASR_AI_Burst_close2, "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class rhs_weap_ak103_base : rhs_weap_akm {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", ASR_AI_Burst_close2, "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class rhs_weap_ak104 : rhs_weap_ak103_base {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", ASR_AI_Burst_close2, "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
    };
    class rhs_weap_ak103_1 : rhs_weap_ak103_base {
		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class rhs_weap_ak103_2 : rhs_weap_ak103_base {
		modes[] = {"Single", "ASR_Burst3", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class rhs_weap_ak74 : rhs_weap_ak74m {};
    class rhs_weap_aks74 : rhs_weap_ak74 {};
    class rhs_weap_aks74u : rhs_weap_aks74 {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", ASR_AI_Burst_close2, "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
		ASR_AI_DISPERSION_COEF;
    };
    class rhs_weap_svd : rhs_weap_ak74m {
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);

    };
    class rhs_weap_svdp : rhs_weap_svd {
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
    };

    class pdw2000_base_F : Rifle_Short_Base_F {
        class Single;
        class FullAuto;
    };
    class hgun_PDW2000_F : pdw2000_base_F {};

    class rhs_weap_pp2000 : hgun_PDW2000_F {
        class Single : Single {
            ASR_AI_ROF_SMG_SINGLE;
        };
        class FullAuto : FullAuto {
            ASR_AI_ROF_MG_FULLAUTO;
        };
    };
    class rhs_weap_pya : hgun_Rook40_F {
		ASR_AI_ROF_PISTOL_SEMI;
    };
    class rhs_weap_makarov_pm : rhs_weap_pya {
		ASR_AI_ROF_PISTOL_SEMI;
    };
    class rhs_pkp_base : Rifle_Long_Base_F {
		modes[] = {
            "FullAuto",
            "ASR_AI_Burst_long", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_toofar",
            "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_toofar_optic1",
            "ASR_AI_Burst_far_optic2", "ASR_AI_Burst_toofar_optic2"
        };
		ASR_AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
		ASR_AI_DISPERSION_COEF;
    };
    class rhs_weap_pkp : rhs_pkp_base {};
    class rhs_weap_pkm : rhs_weap_pkp {
		modes[] = {
            "manual",
            "ASR_AI_Burst_long", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_toofar",
            "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_toofar_optic1",
            "ASR_AI_Burst_far_optic2", "ASR_AI_Burst_toofar_optic2"
        };
		ASR_AI_MG_MODES(manual,FullAuto,manual);
    };
    class rhs_weap_rpk74m : rhs_weap_pkp {
		modes[] = {
            "manual", "Single",
            "ASR_AI_Burst_long", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far",
            "ASR_AI_Burst_far_optic1",
            "ASR_AI_Burst_far_optic2"
        };
		ASR_AI_MG_MODES(manual,Mode_FullAuto,Mode_SemiAuto);
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
