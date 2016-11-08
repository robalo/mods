class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {

	#include "items.hpp"

	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class Pistol_Base_F;

    class BWA3_G36 : Rifle_Base_F {
        //displayName = "G36 IdZ-ES";
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_close2", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISP_REGULAR;
    };
    class BWA3_G36K : BWA3_G36 {
        //displayName = "G36K IdZ-ES";
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", ASR_AI_Burst_close2, "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };
    class BWA3_G36_LMG : BWA3_G36 {
        //displayName = "G36 IdZ-ES (Bipod)";
		modes[] = {"Single","manual", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_far_optic2"};
		ASR_AI_MG_MODES(manual,FullAuto,Mode_SemiAuto);
		ASR_AI_DISP_REGULAR;
    };
    class BWA3_G38 : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", ASR_AI_Burst_close2, "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISP_REGULAR;
    };
    class BWA3_G38K : BWA3_G38 {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", ASR_AI_Burst_close2, "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };
    class BWA3_G38C : BWA3_G38 {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", ASR_AI_Burst_close2, "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
    };
    class BWA3_G28_Standard : Rifle_Long_Base_F {
        //displayName = "G28 E2 (Standard)";
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Single);
		ASR_AI_DISP_REGULAR;
    };
    class BWA3_G28_Assault : BWA3_G28_Standard {
        //displayName = "G28 E3 (Patrol)";
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Single,Single);
    };
    class BWA3_G27 : BWA3_G28_Standard {
        //displayName = "G27";
 		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", ASR_AI_Burst_close2, "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Single,Mode_FullAuto);
		ASR_AI_DISP_REGULAR;
    };

    class BWA3_P8 : Pistol_Base_F {
        //displayName = "P8";
        class Single : Mode_SemiAuto {
            ASR_AI_ROF_PISTOL_SEMI;
        };
    };

    class BWA3_MP7 : Pistol_Base_F {
        //displayName = "MP7";
        class Single : Mode_SemiAuto {
			ASR_AI_ROF_SMG_SINGLE;
        };
        class FullAuto : Mode_FullAuto {
			ASR_AI_ROF_MG_FULLAUTO;
        };
    };

    class BWA3_MG4 : Rifle_Long_Base_F {
        //displayName = "MG4";
		modes[] = {"manual", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_far_optic2"};
		ASR_AI_MG_MODES(manual,Mode_FullAuto,manual);
		ASR_AI_DISP_REGULAR;
    };
    class BWA3_MG5 : Rifle_Long_Base_F {
        //displayName = "MG5";
		modes[] = {"manual", "manual_fast", "manual_faster", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_far_optic2"};
		ASR_AI_MG_MODES(manual,Mode_FullAuto,manual);
		ASR_AI_DISP_REGULAR;
    };

    class BWA3_G82 : Rifle_Long_Base_F {
        //displayName = "G82";
		modes[] = {"Single", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2", "ASR_AI_Single_far_optics2"};
		ASR_AI_BIGSNIPER_MODES(Mode_SemiAuto);
    };

    class CannonCore;

    class BWA3_RMK30 : CannonCore {
        class manual : Mode_FullAuto {
            ASR_AI_DISP_SNIPER;
        };
    };

};
