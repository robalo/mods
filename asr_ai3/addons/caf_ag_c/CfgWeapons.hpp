#define __MOA(__X) dispersion = __EVAL(__X * 0.0002909)

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {

	class AK_BASE;

	class caf_AK47 : AK_BASE {
		modes[] = {"FullAuto", "Single", "ASR_AI_Burst_close", "ASR_AI_Burst_far"};
		class FullAuto : Mode_FullAuto {
			__MOA(6);
			ASR_AI_ROF_RIFLE_SMALL_FULLAUTO;
		};
		class Single : Mode_SemiAuto {
			__MOA(6);
			ASR_AI_ROF_RIFLE_SMALL_SINGLE;
		};
		class ASR_AI_Burst_close: FullAuto {
			showToPlayer = 0;
			burst = 4;
			ASR_AI_ROF_RIFLE_SMALL_CLOSE_BURST;
		};
		class ASR_AI_Burst_far: FullAuto {
			showToPlayer = 0;
			burst = 5;
			ASR_AI_ROF_RIFLE_SMALL_FAR_BURST;
		};
	};

	class caf_AK74 : AK_BASE {
		modes[] = {"FullAuto", "Single", "ASR_AI_Burst_close", "ASR_AI_Burst_far"};
		class FullAuto : Mode_FullAuto {
			__MOA(4);
			ASR_AI_ROF_RIFLE_SMALL_FULLAUTO;
		};
		class Single : Mode_SemiAuto {
			__MOA(4);
			ASR_AI_ROF_RIFLE_SMALL_SINGLE;
		};
		class ASR_AI_Burst_close: FullAuto {
			showToPlayer = 0;
			burst = 4;
			ASR_AI_ROF_RIFLE_SMALL_CLOSE_BURST;
		};
		class ASR_AI_Burst_far: FullAuto {
			showToPlayer = 0;
			burst = 5;
			ASR_AI_ROF_RIFLE_SMALL_FAR_BURST;
		};
	};

	class caf_ak74gl : caf_AK74 {
		modes[] = {"FullAuto", "Single", "ASR_AI_Burst_close", "ASR_AI_Burst_far"};
		class FullAuto : Mode_FullAuto {
			__MOA(4);
			ASR_AI_ROF_RIFLE_SMALL_FULLAUTO;
		};
		class Single : Mode_SemiAuto {
			__MOA(4);
			ASR_AI_ROF_RIFLE_SMALL_SINGLE;
		};
		class ASR_AI_Burst_close: FullAuto {
			showToPlayer = 0;
			burst = 4;
			ASR_AI_ROF_RIFLE_SMALL_CLOSE_BURST;
		};
		class ASR_AI_Burst_far: FullAuto {
			showToPlayer = 0;
			burst = 5;
			ASR_AI_ROF_RIFLE_SMALL_FAR_BURST;
		};
	};

	class caf_pkm : AK_BASE {
		modes[] = {"manual", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far"};
		class manual : Mode_FullAuto {
			__MOA(3);
			ASR_AI_ROF_MG_FULLAUTO;
			ASR_AI_DISP_REGULAR;
		};
		class ASR_AI_Burst_close: manual {
			showToPlayer = 0;
			ASR_AI_ROF_MG_CLOSE_BURST;
		};
		class ASR_AI_Burst_short: ASR_AI_Burst_close {
			ASR_AI_ROF_MG_MEDIUM_BURST;
		};
		class ASR_AI_Burst_medium: ASR_AI_Burst_close {
			ASR_AI_ROF_MG_FAR_BURST;
		};
		class ASR_AI_Burst_far: ASR_AI_Burst_close {
			ASR_AI_ROF_MG_VERYFAR_BURST;
		};
		ASR_AI_DISP_REGULAR;
	};

	class caf_rpk74 : AK_BASE {
		modes[] = {"manual", "Single", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far"};
		class manual : Mode_FullAuto {
			__MOA(3);
			ASR_AI_ROF_MG_FULLAUTO;
			ASR_AI_DISP_REGULAR;
		};
		class ASR_AI_Burst_close: manual {
			showToPlayer = 0;
			ASR_AI_ROF_MG_CLOSE_BURST;
		};
		class ASR_AI_Burst_short: ASR_AI_Burst_close {
			ASR_AI_ROF_MG_MEDIUM_BURST;
		};
		class ASR_AI_Burst_medium: ASR_AI_Burst_close {
			ASR_AI_ROF_MG_FAR_BURST;
		};
		class ASR_AI_Burst_far: ASR_AI_Burst_close {
			ASR_AI_ROF_MG_VERYFAR_BURST;
		};
		class Single : Mode_SemiAuto {
			__MOA(3);
			ASR_AI_ROF_MG_SINGLE;
		};
		ASR_AI_DISP_REGULAR;
	};

	class caf_svd : AK_BASE {
		class Single : Mode_SemiAuto {
			__MOA(2);
			ASR_AI_ROF_RIFLE_SNIPER762_SEMI;
		};
		ASR_AI_DISP_MARKSMAN;
	};
};
