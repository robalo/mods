class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {

	#include "items.hpp"

	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class Pistol_Base_F;

	class rhs_weap_M320_Base_F : Pistol_Base_F {
		modes[] = {"Single"};
		class Single : Mode_SemiAuto {
			ASR_AI_ROF_GL_SINGLE;
		};
		ASR_AI_DISP_REGULAR;
	};

	class rhs_weap_XM2010_Base_F: Rifle_Base_F {
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISP_REGULAR;
		asr_ai_wtype = ASR_WEAPON_TYPE_SNIPER;
	};

	class arifle_MX_Base_F;

	class rhs_weap_m4_Base : arifle_MX_Base_F {
		modes[] = {"ASR_Single", "ASR_Burst3", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISP_REGULAR;
	};

	class rhs_weap_m4a1 : rhs_weap_m4_Base {
		modes[] = {"ASR_Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
	};

	class rhs_weap_m4a1_carryhandle : rhs_weap_m4_Base {
		modes[] = {"ASR_Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
	};

	class rhs_weap_m4a1_carryhandle_pmag : rhs_weap_m4_Base {
		modes[] = {"ASR_Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
	};

	class rhs_weap_m4a1_blockII : rhs_weap_m4a1 {
		modes[] = {"ASR_Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
	};

	class rhs_weap_mk18 : rhs_weap_m4a1 {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
	};

	class rhs_weap_m4a1_m320 : rhs_weap_m4_Base {
		modes[] = {"ASR_Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
	};

	class rhs_weap_mk18_m320 : rhs_weap_m4_Base {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
	};

	class rhs_weap_m4_m203;
	class rhs_weap_m4a1_m203 : rhs_weap_m4_m203 {
		modes[] = {"ASR_Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
	};

	class rhs_weap_m4a1_m203s : rhs_weap_m4_m203 {
		modes[] = {"ASR_Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
	};

	class rhs_weap_m4a1_carryhandle_m203 : rhs_weap_m4_m203 {
		modes[] = {"ASR_Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
	};

	class rhs_weap_m4a1_carryhandle_m203S : rhs_weap_m4_m203 {
		modes[] = {"ASR_Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
	};

	class rhs_weap_m4a1_blockII_M203 : rhs_weap_m4_m203 {
		modes[] = {"ASR_Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
	};

	class rhs_weap_m16a4 : rhs_weap_m4_Base {
		modes[] = {"ASR_Single", "ASR_Burst3", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
	};

	class LMG_Mk200_F;
	
	class rhs_M249_base : LMG_Mk200_F {
		modes[] = {"FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_far_optic2"};
		ASR_AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
	};

	class weap_m240_base : rhs_M249_base {
		modes[] = {"manual", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_far_optic2"};
		ASR_AI_MG_MODES(manual,Mode_FullAuto,manual);
		ASR_AI_DISP_REGULAR;
		asr_ai_wtype = ASR_WEAPON_TYPE_MG;
	};

	class srifle_EBR_F;

	class rhs_weap_m14ebrri : srifle_EBR_F {
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
	};

	class rhs_weap_sr25 : rhs_weap_m14ebrri {
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
	};

	class rhs_weap_M590_5RD : Rifle_Base_F {
		class Single : Mode_SemiAuto {
			ASR_AI_ROF_SHOTGUN_SEMI;
		};
	};

	class Launcher_Base_F;
	class rhs_weap_M136 : Launcher_Base_F {
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 200;
		midRangeProbab = 0.8;
		maxRange = 400;
		maxRangeProbab = 0.1;
	};

	class hgun_ACPC2_F;
	class rhsusf_weap_m1911a1 : hgun_ACPC2_F {
		ASR_AI_ROF_PISTOL_SEMI;
	};

};
