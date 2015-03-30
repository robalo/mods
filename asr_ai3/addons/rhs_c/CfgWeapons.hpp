class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class asdg_SlotInfo { // Base class
	access = ReadAndWrite;
	scope = private;
	linkProxy = "defaultProxy";
	iconPosition[] = {0.0, 0.0};
	iconScale = 0.0;
	iconPicture = "";
	iconPinpoint = "Center";
};
class asdg_OpticRail: asdg_SlotInfo { // Base optic rail class
	linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
	displayName = "$STR_A3_CowsSlot0";
	iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
	iconPinpoint = "Bottom";
};
class asdg_OpticRail1913: asdg_OpticRail {
	class compatibleItems {
		ASRAIN_rhsusf_acc_ELCAN = 1;
		ASRAIN_rhsusf_acc_ACOG = 1;
		ASRAIN_rhsusf_acc_ACOG2 = 1;
		ASRAIN_rhsusf_acc_ACOG3 = 1;
		ASRAIN_rhsusf_acc_ACOG_USMC = 1;
		ASRAIN_rhsusf_acc_ACOG2_USMC = 1;
		ASRAIN_rhsusf_acc_ACOG3_USMC = 1;
		ASRAIN_rhsusf_acc_LEUPOLDMK4 = 1;
		ASRAIN_rhsusf_acc_LEUPOLDMK4_2 = 1;
	};
};
class asdg_OpticRail1913_short: asdg_OpticRail1913 {
	class compatibleItems: compatibleItems {
		ASRAIN_rhsusf_acc_LEUPOLDMK4 = 0;
		ASRAIN_rhsusf_acc_LEUPOLDMK4_2 = 0;
	};
};
class asdg_OpticSideMount: asdg_OpticRail {
	class compatibleItems {
		ASRAIN_rhs_acc_pso1m2 = 1;
		ASRAIN_rhs_acc_1p29 = 1;
	};
};

class CfgWeapons {

	#include "items.hpp"

	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class hgun_Rook40_F;

	class rhs_weap_pya : hgun_Rook40_F {
		ASR_AI_ROF_PISTOL_SEMI;
	};
	class rhs_weap_makarov_pmm : rhs_weap_pya {
		ASR_AI_ROF_PISTOL_SEMI;
	};

	class rhs_weap_ak74m_Base_F: Rifle_Base_F {
		modes[] = {"FullAuto", "Single", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISP_REGULAR;
	};

	class rhs_weap_ak74m : rhs_weap_ak74m_Base_F {};
	class rhs_weap_ak74 : rhs_weap_ak74m {};
	class rhs_weap_aks74 : rhs_weap_ak74 {};

	class rhs_weap_aks74u : rhs_weap_aks74 {
		modes[] = {"FullAuto", "Single", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
	};

	class rhs_weap_akm : rhs_weap_ak74m {
		modes[] = {"FullAuto", "Single", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
	};

	class rhs_weap_ak103_base : rhs_weap_akm {
		modes[] = {"FullAuto", "Single", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
	};

	class rhs_weap_ak103_1 : rhs_weap_ak103_base {
		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
	};

	class rhs_weap_ak103_2 : rhs_weap_ak103_base {
		modes[] = {"ASR_Burst3", "Single", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
	};

	class rhs_weap_svd : rhs_weap_ak74m {
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
	};
	class rhs_weap_svdp : rhs_weap_svd {
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
	};

	class rhs_pkp_base: Rifle_Long_Base_F {
		modes[] = {"FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_far_optic2"};
		ASR_AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
		ASR_AI_DISP_REGULAR;
		asr_ai_wtype = ASR_WEAPON_TYPE_MG;
	};

	class rhs_weap_pkp : rhs_pkp_base {};

	class rhs_weap_pkm: rhs_weap_pkp {
		modes[] = {"manual", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_far_optic2"};
		ASR_AI_MG_MODES(manual,FullAuto,manual);
	};

	class rhs_weap_rpk74m: rhs_weap_pkp {
		modes[] = {"Manual", "Single", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_far_optic2"};
		ASR_AI_MG_MODES(Manual,Mode_FullAuto,Mode_SemiAuto);
		ASR_AI_DISP_REGULAR;
		asr_ai_wtype = ASR_WEAPON_TYPE_AR;
	};


	class rhs_weap_M320_Base_F : Rifle_Base_F {
		modes[] = {"Single"};
		class Single : Mode_SemiAuto {
			ASR_AI_ROF_GL_SINGLE;
		};
		ASR_AI_DISP_REGULAR;
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

	class rhs_weap_m16a4 : rhs_weap_m4_Base {
		modes[] = {"ASR_Single", "ASR_Burst3", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
	};

	class rhs_weap_m4a1_m320 : rhs_weap_m4_Base {
		modes[] = {"ASR_Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
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

	class rhs_weap_XM2010_Base_F: Rifle_Base_F {
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISP_REGULAR;
		asr_ai_wtype = ASR_WEAPON_TYPE_SNIPER;
	};

};
