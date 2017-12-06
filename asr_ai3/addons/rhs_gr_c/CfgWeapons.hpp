class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {

	#include "items.hpp"

	class Rifle_Base_F;
    class Rifle_Short_Base_F : Rifle_Base_F {};

    class rhs_weap_kar98k_Base_F : Rifle_Base_F {
		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };

    class rhs_weap_m38_Base_F : Rifle_Base_F {
		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_m38 : rhs_weap_m38_Base_F {};
    class rhs_weap_m38_rail : rhs_weap_m38 {};
    class rhs_weap_mosin_sbr : rhs_weap_m38_rail {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
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
		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
    };

    class rhs_weap_m21_base : rhs_weap_m70_base {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };

    class rhs_weap_m21s : rhs_weap_m21_base {
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };
	class rhs_weap_m21a_pr: rhs_weap_m21_base {};

    class rhs_weap_m21s_pr : rhs_weap_m21a_pr {
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };

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
			burst = 4;
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

    class rhs_weap_pya;
    class rhs_weap_tt33 : rhs_weap_pya {
        class Single : Mode_SemiAuto {
            __AI_ROF_PISTOL_SEMI;
		};
    };

    class rhs_weap_stgw57_base : Rifle_Base_F {
 		modes[] = {"Single", "FullAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };

    class gatling_30mm;
    class RHS_weap_zpl20 : gatling_30mm {
		__AI_DISPERSION_COEF;
    };
};
