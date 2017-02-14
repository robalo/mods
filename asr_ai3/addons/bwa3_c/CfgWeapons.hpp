class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {

	#include "items.hpp"

	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class Pistol_Base_F;

    class BWA3_G36 : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };
    class BWA3_G36K : BWA3_G36 {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };
    class BWA3_G36_LMG : BWA3_G36 {
		modes[] = {
            "Single", "manual",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far",
            "AI_far_optic1",
            "AI_far_optic2"
        };
		__AI_MG_MODES(manual,FullAuto,Mode_SemiAuto);
		__AI_DISPERSION_COEF;
    };
    class BWA3_G38 : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };
    class BWA3_G38K : BWA3_G38 {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };
    class BWA3_G38C : BWA3_G38 {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
    };
    class BWA3_G28_Standard : Rifle_Long_Base_F {
		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Single);
		__AI_DISPERSION_COEF;
    };
    class BWA3_G28_Assault : BWA3_G28_Standard {
		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Single,Single);
    };
    class BWA3_G27 : BWA3_G28_Standard {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Single,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };

    class BWA3_P8 : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            __AI_ROF_PISTOL_SEMI;
        };
    };

    class BWA3_MP7 : Pistol_Base_F {
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
			burst = 4;
			__AI_ROF_SMG_BURST;
		};
    };

    class BWA3_MG4 : Rifle_Long_Base_F {
		modes[] = {
            "manual",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar",
            "AI_far_optic1", "AI_toofar_optic1",
            "AI_far_optic2", "AI_toofar_optic2"
        };
		__AI_MG_MODES(manual,Mode_FullAuto,manual);
		__AI_DISPERSION_COEF;
    };
    class BWA3_MG5 : Rifle_Long_Base_F {
		modes[] = {
            "manual", "manual_fast", "manual_faster",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar",
            "AI_far_optic1", "AI_toofar_optic1",
            "AI_far_optic2", "AI_toofar_optic2"
        };
		__AI_MG_MODES(manual,Mode_FullAuto,manual);
		__AI_DISPERSION_COEF;
    };

    class BWA3_G82 : Rifle_Long_Base_F {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2", "AI_Single_far_optics2"};
		__AI_BIGSNIPER_MODES(Mode_SemiAuto);
    };

    class CannonCore;

    class BWA3_RMK30 : CannonCore {
        class manual : Mode_FullAuto {
            __AI_DISPERSION_COEF;
        };
    };

};
