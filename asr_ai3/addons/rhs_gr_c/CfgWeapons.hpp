class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {

	#include "items.hpp"

	class Rifle_Base_F;
    class Rifle_Short_Base_F : Rifle_Base_F {};

    class rhs_weap_kar98k_Base_F : Rifle_Base_F {
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISPERSION_COEF;
    };

    class rhs_weap_m38_Base_F : Rifle_Base_F {
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISPERSION_COEF;
    };

    class rhs_weap_m70_base : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", ASR_AI_Burst_close2, "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISPERSION_COEF;
    };

    class rhs_weap_m92 : rhs_weap_m70_base {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", ASR_AI_Burst_close2, "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
    };

    class rhs_weap_m76 : rhs_weap_m70_base {
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
    };

    class rhs_weap_m21_base : rhs_weap_m70_base {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", ASR_AI_Burst_close2, "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };

    class rhs_weap_m21s : rhs_weap_m21_base {
		ASR_AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };
	class rhs_weap_m21a_pr: rhs_weap_m21_base {};

    class rhs_weap_m21s_pr : rhs_weap_m21a_pr {
		ASR_AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };

    class SMG_01_Base : Rifle_Short_Base_F {
        class Single;
        class FullAuto;
    };
    class SMG_01_F : SMG_01_Base {};

    class rhs_weap_savz61 : SMG_01_F {
        class Single : Single {
            ASR_AI_ROF_SMG_SINGLE;
        };
        class FullAuto : FullAuto {
            ASR_AI_ROF_MG_FULLAUTO;
        };
    };

};
