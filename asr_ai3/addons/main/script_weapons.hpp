#define ASR_WEAPON_TYPE_RIFLE 1
#define ASR_WEAPON_TYPE_PISTOL 2
#define ASR_WEAPON_TYPE_SNIPER 3
#define ASR_WEAPON_TYPE_LAUNCHER 4
#define ASR_WEAPON_TYPE_MG 5
#define ASR_WEAPON_TYPE_AR 6

/*
Define how much AI dispersion degrades with lower skill on 3 levels:
 - hi-mag scopes (> 8X) 			- requiredOpticType = 2;
 - magnifying sights (usually 3-6X) 		- requiredOpticType = 1;
 - iron sights or low magnifying sights (1-2X)	- default
*/
#define ASR_AI_DISP_SNIPER aiDispersionCoefX = 5; aiDispersionCoefY = 10
#define ASR_AI_DISP_MARKSMAN aiDispersionCoefX = 10; aiDispersionCoefY = 15
#define ASR_AI_DISP_REGULAR aiDispersionCoefX = 15; aiDispersionCoefY = 20

/*
Fire modes
*/

// handguns
#define ASR_AI_ROF_PISTOL_SEMI \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 2;\
		minRange = 0;\
		minRangeProbab = 0.2;\
		midRange = 40;\
		midRangeProbab = 0.1;\
		maxRange = 90;\
		maxRangeProbab = 0.01

//gls
#define ASR_AI_ROF_GL_SINGLE \
		aiRateOfFire = 6;\
		aiRateOfFireDistance = 50;\
		aiRateOfFireDispersion = 2;\
		minRange = 60;\
		minRangeProbab = 0.6;\
		midRange = 150;\
		midRangeProbab = 0.7;\
		maxRange = 400;\
		maxRangeProbab = 0.1


//shotguns
#define ASR_AI_ROF_SHOTGUN_SEMI \
		minRange = 0;\
		minRangeProbab = 0.7;\
		midRange = 60;\
		midRangeProbab = 0.2;\
		maxRange = 140;\
		maxRangeProbab = 0.02;
#define ASR_AI_ROF_SHOTGUN_AUTO \
		minRange = 0;\
		minRangeProbab = 0.8;\
		midRange = 20;\
		midRangeProbab = 0.5;\
		maxRange = 40;\
		maxRangeProbab = 0.1;

// assault rifles, carbines
#define ASR_AI_ROF_RIFLE_SMALL_SINGLE \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 250;\
		aiRateOfFireDispersion = 2;\
		minRange = 20;\
		minRangeProbab = 0.7;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 550;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_RIFLE_SMALL_SEMI \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 200;\
		aiRateOfFireDispersion = 2;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 550;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE \
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 450;\
		aiRateOfFireDispersion = 3;\
		minRange = 20;\
		minRangeProbab = 0.8;\
		midRange = 300;\
		midRangeProbab = 0.6;\
		maxRange = 750;\
		maxRangeProbab = 0.2
#define ASR_AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE \
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 500;\
		aiRateOfFireDispersion = 4;\
		minRange = 20;\
		minRangeProbab = 0.8;\
		midRange = 300;\
		midRangeProbab = 0.6;\
		maxRange = 950;\
		maxRangeProbab = 0.2
#define ASR_AI_ROF_RIFLE_SMALL_CLOSE_BURST \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 2;\
		minRange = 6;\
		minRangeProbab = 0.8;\
		midRange = 12;\
		midRangeProbab = 0.7;\
		maxRange = 24;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_RIFLE_SMALL_FULLAUTO \
		aiRateOfFire = 0.2;\
		aiRateOfFireDistance = 50;\
		aiRateOfFireDispersion = 1;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 3;\
		midRangeProbab = 0.8;\
		maxRange = 6;\
		maxRangeProbab = 0.3
#define ASR_AI_ROF_RIFLE_SMALL_FAR_BURST \
		aiRateOfFire = 5;\
		aiRateOfFireDistance = 600;\
		aiRateOfFireDispersion = 5;\
		minRange = 400;\
		minRangeProbab = 0.05;\
		midRange = 500;\
		midRangeProbab = 0.3;\
		maxRange = 700;\
		maxRangeProbab = 0.1


// CQB rifles (short barrels, small calibre)
#define ASR_AI_ROF_CQB_SINGLE \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 250;\
		aiRateOfFireDispersion = 2;\
		minRange = 20;\
		minRangeProbab = 0.7;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 450;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_CQB_SEMI \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 200;\
		aiRateOfFireDispersion = 2;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 450;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_CQB_MSCOPE_SINGLE \
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 450;\
		aiRateOfFireDispersion = 3;\
		minRange = 20;\
		minRangeProbab = 0.8;\
		midRange = 200;\
		midRangeProbab = 0.6;\
		maxRange = 550;\
		maxRangeProbab = 0.2
#define ASR_AI_ROF_CQB_FAR_BURST \
		aiRateOfFire = 6;\
		aiRateOfFireDistance = 600;\
		aiRateOfFireDispersion = 5;\
		minRange = 300;\
		minRangeProbab = 0.05;\
		midRange = 400;\
		midRangeProbab = 0.3;\
		maxRange = 600;\
		maxRangeProbab = 0.1


// battle rifles, 7.62 assault rifles
#define ASR_AI_ROF_RIFLE_MEDIUM_SINGLE \
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 300;\
		aiRateOfFireDispersion = 2;\
		minRange = 15;\
		minRangeProbab = 0.8;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 550;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_RIFLE_MEDIUM_SEMI \
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 250;\
		aiRateOfFireDispersion = 2;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 550;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE \
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 500;\
		aiRateOfFireDispersion = 3;\
		minRange = 15;\
		minRangeProbab = 0.9;\
		midRange = 300;\
		midRangeProbab = 0.8;\
		maxRange = 750;\
		maxRangeProbab = 0.2
#define ASR_AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE \
		aiRateOfFire = 8;\
		aiRateOfFireDistance = 1200;\
		aiRateOfFireDispersion = 4;\
		minRange = 15;\
		minRangeProbab = 0.7;\
		midRange = 500;\
		midRangeProbab = 0.8;\
		maxRange = 1400;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_RIFLE_MEDIUM_CLOSE_BURST \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 2;\
		minRange = 4;\
		minRangeProbab = 0.8;\
		midRange = 8;\
		midRangeProbab = 0.7;\
		maxRange = 16;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_RIFLE_MEDIUM_FULLAUTO \
		aiRateOfFire = 0.2;\
		aiRateOfFireDistance = 50;\
		aiRateOfFireDispersion = 1;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 2;\
		midRangeProbab = 0.8;\
		maxRange = 4;\
		maxRangeProbab = 0.1
		
// light-medium machineguns
#define ASR_AI_ROF_MG_FULLAUTO \
		aiRateOfFire = 0.2;\
		aiRateOfFireDistance = 50;\
		aiRateOfFireDispersion = 1;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 20;\
		midRangeProbab = 0.7;\
		maxRange = 40;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_MG_CLOSE_BURST \
		burst = 5;\
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 250;\
		aiRateOfFireDispersion = 2;\
		minRange = 30;\
		minRangeProbab = 0.8;\
		midRange = 100;\
		midRangeProbab = 0.7;\
		maxRange = 150;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_MG_MEDIUM_BURST \
		burst = 7;\
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 450;\
		aiRateOfFireDispersion = 2;\
		minRange = 80;\
		minRangeProbab = 0.8;\
		midRange = 150;\
		midRangeProbab = 0.7;\
		maxRange = 350;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_MG_FAR_BURST \
		burst = 6;\
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 600;\
		aiRateOfFireDispersion = 3;\
		minRange = 200;\
		minRangeProbab = 0.8;\
		midRange = 300;\
		midRangeProbab = 0.7;\
		maxRange = 650;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_MG_SCOPE_BURST \
		burst = 4;\
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 800;\
		aiRateOfFireDispersion = 4;\
		minRange = 400;\
		minRangeProbab = 0.8;\
		midRange = 600;\
		midRangeProbab = 0.7;\
		maxRange = 1200;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_MMG_SCOPE_BURST \
		burst = 5;\
		aiRateOfFire = 6;\
		aiRateOfFireDistance = 1200;\
		aiRateOfFireDispersion = 5;\
		minRange = 800;\
		minRangeProbab = 0.8;\
		midRange = 1000;\
		midRangeProbab = 0.7;\
		maxRange = 1800;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_MG_VERYFAR_BURST \
		burst = 6;\
		aiRateOfFire = 4;\
		aiRateOfFireDistance = 1000;\
		aiRateOfFireDispersion = 5;\
		minRange = 400;\
		minRangeProbab = 0.7;\
		midRange = 500;\
		midRangeProbab = 0.2;\
		maxRange = 800;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_MG_SINGLE \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 300;\
		aiRateOfFireDispersion = 1;\
		minRange = 200;\
		minRangeProbab = 0.2;\
		midRange = 300;\
		midRangeProbab = 0.3;\
		maxRange = 550;\
		maxRangeProbab = 0.1

// submachineguns
#define ASR_AI_ROF_SMG_SINGLE \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 200;\
		aiRateOfFireDispersion = 2;\
		minRange = 40;\
		minRangeProbab = 0.9;\
		midRange = 80;\
		midRangeProbab = 0.5;\
		maxRange = 250;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_SMG_BURST \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 50;\
		aiRateOfFireDispersion = 2;\
		minRange = 30;\
		minRangeProbab = 0.8;\
		midRange = 40;\
		midRangeProbab = 0.5;\
		maxRange = 50;\
		maxRangeProbab = 0.2
#define ASR_AI_ROF_SMG_FULLAUTO \
		aiRateOfFire = 0.2;\
		aiRateOfFireDistance = 50;\
		aiRateOfFireDispersion = 1;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 20;\
		midRangeProbab = 0.8;\
		maxRange = 30;\
		maxRangeProbab = 0.2

//modes

//pistol ammo
#define ASR_AI_SMG_MODES \
		class Single: Mode_SemiAuto { \
			ASR_AI_ROF_SMG_SINGLE; \
		}; \
		class Burst: Mode_Burst { \
			ASR_AI_ROF_SMG_BURST; \
		}; \
		class FullAuto: Mode_FullAuto { \
			ASR_AI_ROF_SMG_FULLAUTO; \
		}


//7.62
#define ASR_AI_RIFLE_MEDIUM_MODES(semibase,fullbase) \
		class Single: ##semibase { \
			ASR_AI_ROF_RIFLE_MEDIUM_SINGLE; \
			ASR_AI_DISP_REGULAR; \
		}; \
		class FullAuto: ##fullbase { \
			ASR_AI_ROF_RIFLE_MEDIUM_FULLAUTO; \
			ASR_AI_DISP_REGULAR; \
		}; \
		class ASR_AI_Burst_close: FullAuto { \
			showToPlayer = 0; \
			burst = 4; \
			ASR_AI_ROF_RIFLE_MEDIUM_CLOSE_BURST; \
		}; \
		class ASR_AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			ASR_AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE; \
			ASR_AI_DISP_MARKSMAN; \
		}; \
		class ASR_AI_Single_optics2: Single { \
			showToPlayer = 0; \
			requiredOpticType = 2; \
			ASR_AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE; \
			ASR_AI_DISP_SNIPER; \
		}; \
		class ASR_SemiAuto: Single { \
			ASR_AI_ROF_RIFLE_MEDIUM_SEMI; \
		}

//6.5

#define ASR_AI_RIFLE_SMALL_XMODES \
		class ASR_AI_Burst_close: FullAuto { \
			showToPlayer = 0; \
			burst = 5; \
			ASR_AI_ROF_RIFLE_SMALL_CLOSE_BURST; \
		}; \
		class ASR_AI_Burst_close2: ASR_AI_Burst_close { \
			burst = 4; \
		}; \
		class ASR_AI_Burst_close3: ASR_AI_Burst_close { \
			burst = 2 + floor random 4; \
		}; \
		class ASR_AI_Burst_close4: ASR_AI_Burst_close { \
			burst = 2 + floor random 4; \
		}; \
		class ASR_AI_Burst_far: FullAuto { \
			showToPlayer = 0; \
			burst = 5; \
			ASR_AI_ROF_RIFLE_SMALL_FAR_BURST; \
		}; \
		class ASR_AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			ASR_AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE; \
			ASR_AI_DISP_MARKSMAN; \
		}; \
		class ASR_AI_Single_optics2: Single { \
			showToPlayer = 0; \
			requiredOpticType = 2; \
			ASR_AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE; \
			ASR_AI_DISP_SNIPER; \
		}; \
		class ASR_Single: Single {}; \
		class ASR_SemiAuto: Single { \
			ASR_AI_ROF_RIFLE_SMALL_SEMI; \
		}; \
		class ASR_Burst3: Single { \
			ASR_AI_ROF_RIFLE_SMALL_CLOSE_BURST; \
			ASR_AI_DISP_REGULAR; \
			showToPlayer = 1; \
			burst = 3; \
			displayName = $STR_DN_MODE_BURST; \
			textureType = "burst"; \
			soundBurst = 0; \
		}; \
		class ASR_Burst2: ASR_Burst3 { \
			burst = 2; \
		}

#define ASR_AI_RIFLE_SMALL_MODES(semibase,fullbase) \
		class Single: ##semibase { \
			ASR_AI_ROF_RIFLE_SMALL_SINGLE; \
			ASR_AI_DISP_REGULAR; \
		}; \
		class FullAuto: ##fullbase { \
			ASR_AI_ROF_RIFLE_SMALL_FULLAUTO; \
			ASR_AI_DISP_REGULAR; \
		}; \
		ASR_AI_RIFLE_SMALL_XMODES

#define ASR_AI_RIFLE_SMALL_CQB_MODES(semibase,fullbase) \
		class Single: ##semibase { \
			ASR_AI_ROF_CQB_SINGLE; \
			ASR_AI_DISP_REGULAR; \
		}; \
		class FullAuto: ##fullbase { \
			ASR_AI_ROF_RIFLE_SMALL_FULLAUTO; \
			ASR_AI_DISP_REGULAR; \
		}; \
		class ASR_AI_Burst_close: FullAuto { \
			showToPlayer = 0; \
			burst = 5; \
			ASR_AI_ROF_RIFLE_SMALL_CLOSE_BURST; \
		}; \
		class ASR_AI_Burst_close2: ASR_AI_Burst_close { \
			burst = 4; \
		}; \
		class ASR_AI_Burst_far: FullAuto { \
			showToPlayer = 0; \
			burst = 4; \
			ASR_AI_ROF_CQB_FAR_BURST; \
		}; \
		class ASR_AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			ASR_AI_ROF_CQB_MSCOPE_SINGLE; \
			ASR_AI_DISP_MARKSMAN; \
		}; \
		class ASR_AI_Single_optics2: Single { \
			showToPlayer = 0; \
			requiredOpticType = 2; \
			ASR_AI_ROF_CQB_MSCOPE_SINGLE; \
			ASR_AI_DISP_SNIPER; \
		}; \
		class ASR_Single: Single {}; \
		class ASR_SemiAuto: Single { \
			ASR_AI_ROF_CQB_SEMI; \
		}; \
		class ASR_Burst3: Single { \
			ASR_AI_ROF_RIFLE_SMALL_CLOSE_BURST; \
			ASR_AI_DISP_REGULAR; \
			showToPlayer = 1; \
			burst = 3; \
			displayName = $STR_DN_MODE_BURST; \
			textureType = "burst"; \
			soundBurst = 0; \
		}; \
		class ASR_Burst2: ASR_Burst3 { \
			burst = 2; \
		}

#define ASR_AI_MG_MODES(m,fullbase,semibase) \
		class ##m: ##fullbase { \
			ASR_AI_ROF_MG_FULLAUTO; \
			ASR_AI_DISP_REGULAR; \
		}; \
		class ASR_AI_Burst_close: ##m { \
			showToPlayer = 0; \
			ASR_AI_ROF_MG_CLOSE_BURST; \
		}; \
		class ASR_AI_Burst_short: ASR_AI_Burst_close { \
			ASR_AI_ROF_MG_MEDIUM_BURST; \
		}; \
		class ASR_AI_Burst_medium: ASR_AI_Burst_close { \
			ASR_AI_ROF_MG_FAR_BURST; \
		}; \
		class ASR_AI_Burst_far: ASR_AI_Burst_close { \
			ASR_AI_ROF_MG_VERYFAR_BURST; \
		}; \
		class ASR_AI_Burst_far_optic1: ASR_AI_Burst_close { \
			requiredOpticType = 1; \
			ASR_AI_ROF_MG_SCOPE_BURST; \
			ASR_AI_DISP_MARKSMAN; \
		}; \
		class ASR_AI_Burst_far_optic2: ASR_AI_Burst_close { \
			requiredOpticType = 2; \
			ASR_AI_ROF_MG_SCOPE_BURST; \
			ASR_AI_DISP_SNIPER; \
		}; \
		class ASR_AI_Burst_far_optic2_MMG: ASR_AI_Burst_far_optic2 { \
			ASR_AI_ROF_MMG_SCOPE_BURST; \
		}; \
		class Single: ##semibase { \
			ASR_AI_ROF_MG_SINGLE; \
			ASR_AI_DISP_REGULAR; \
		}


// sniper rifles (hi mag. scopes, medium-high calibre)
#define ASR_AI_ROF_RIFLE_SNIPER762_SEMI \
		aiRateOfFire = 7;\
		aiRateOfFireDistance = 1000;\
		minRange = 0;\
		minRangeProbab = 0.4;\
		midRange = 500;\
		midRangeProbab = 0.8;\
		maxRange = 1400;\
		maxRangeProbab = 0.1

#define ASR_AI_ROF_BIGSNIPER_SEMI \
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 300;\
		minRange = 1;\
		minRangeProbab = 0.4;\
		midRange = 150;\
		midRangeProbab = 0.7;\
		maxRange = 550;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_BIGSNIPER_MSCOPE_SEMI \
		aiRateOfFire = 4;\
		aiRateOfFireDistance = 500;\
		minRange = 150;\
		minRangeProbab = 0.2;\
		midRange = 500;\
		midRangeProbab = 0.7;\
		maxRange = 1500;\
		maxRangeProbab = 0.4
#define ASR_AI_ROF_BIGSNIPER_HSCOPE_SEMI \
		aiRateOfFire = 8;\
		aiRateOfFireDistance = 1000;\
		minRange = 250;\
		minRangeProbab = 0.2;\
		midRange = 750;\
		midRangeProbab = 0.7;\
		maxRange = 1000;\
		maxRangeProbab = 0.4
#define ASR_AI_ROF_BIGSNIPER_HSCOPE_FAR_SEMI \
		aiRateOfFire = 10;\
		aiRateOfFireDistance = 1200;\
		minRange = 500;\
		minRangeProbab = 0.3;\
		midRange = 1200;\
		midRangeProbab = 0.7;\
		maxRange = 2500;\
		maxRangeProbab = 0.1

#define ASR_AI_BIGSNIPER_MODES(semibase) \
		class Single: ##semibase { \
			ASR_AI_ROF_BIGSNIPER_SEMI; \
			ASR_AI_DISP_REGULAR; \
		}; \
		class ASR_AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			ASR_AI_ROF_BIGSNIPER_MSCOPE_SEMI; \
			ASR_AI_DISP_MARKSMAN; \
		}; \
		class ASR_AI_Single_optics2: Single { \
			showToPlayer = 0; \
			requiredOpticType = 2; \
			ASR_AI_ROF_BIGSNIPER_HSCOPE_SEMI; \
			ASR_AI_DISP_SNIPER; \
		}; \
		class ASR_AI_Single_far_optics2: Single { \
			showToPlayer = 0; \
			requiredOpticType = 2; \
			ASR_AI_ROF_BIGSNIPER_HSCOPE_FAR_SEMI; \
			ASR_AI_DISP_SNIPER; \
		}

#define ASR_AI_ROF_338SNIPER_SEMI \
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 300;\
		minRange = 1;\
		minRangeProbab = 0.4;\
		midRange = 150;\
		midRangeProbab = 0.7;\
		maxRange = 550;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_338SNIPER_MSCOPE_SEMI \
		aiRateOfFire = 4;\
		aiRateOfFireDistance = 500;\
		minRange = 150;\
		minRangeProbab = 0.2;\
		midRange = 500;\
		midRangeProbab = 0.7;\
		maxRange = 1000;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_338SNIPER_HSCOPE_SEMI \
		aiRateOfFire = 8;\
		aiRateOfFireDistance = 1000;\
		minRange = 250;\
		minRangeProbab = 0.2;\
		midRange = 750;\
		midRangeProbab = 0.7;\
		maxRange = 1500;\
		maxRangeProbab = 0.1

#define ASR_AI_338SNIPER_MODES(semibase) \
		class Single: ##semibase { \
			ASR_AI_ROF_338SNIPER_SEMI; \
			ASR_AI_DISP_REGULAR; \
		}; \
		class ASR_AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			ASR_AI_ROF_338SNIPER_MSCOPE_SEMI; \
			ASR_AI_DISP_MARKSMAN; \
		}; \
		class ASR_AI_Single_optics2: Single { \
			showToPlayer = 0; \
			requiredOpticType = 2; \
			ASR_AI_ROF_338SNIPER_HSCOPE_SEMI; \
			ASR_AI_DISP_SNIPER; \
		}
