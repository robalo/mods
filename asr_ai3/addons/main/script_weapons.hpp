#define ASR_SUPP_COEFF \
			class AmmoCoef { \
				visibleFire = 0.2; \
				audibleFire = 0.2; \
			}

#define ASR_SUPP_INH_COEFF \
			class AmmoCoef : AmmoCoef { \
				visibleFire = 0.2; \
				audibleFire = 0.2; \
			}


#define ASR_AI_DISPERSION_COEF aiDispersionCoefX = 5; aiDispersionCoefY = 10

/*
Fire modes
*/

// handguns
#define ASR_AI_ROF_PISTOL_SEMI \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 1;\
		minRange = 0;\
		minRangeProbab = 0.1;\
		midRange = 30;\
		midRangeProbab = 0.05;\
		maxRange = 90;\
		maxRangeProbab = 0.01

//gls
#define ASR_AI_ROF_GL_SINGLE \
		aiRateOfFire = 6;\
		aiRateOfFireDistance = 50;\
		aiRateOfFireDispersion = 3;\
		minRange = 60;\
		minRangeProbab = 0.6;\
		midRange = 150;\
		midRangeProbab = 0.7;\
		maxRange = 400;\
		maxRangeProbab = 0.01


//shotguns
#define ASR_AI_ROF_SHOTGUN_SEMI \
		minRange = 0;\
		minRangeProbab = 0.7;\
		midRange = 60;\
		midRangeProbab = 0.2;\
		maxRange = 140;\
		maxRangeProbab = 0.02
#define ASR_AI_ROF_SHOTGUN_AUTO \
		minRange = 0;\
		minRangeProbab = 0.8;\
		midRange = 20;\
		midRangeProbab = 0.5;\
		maxRange = 40;\
		maxRangeProbab = 0.1

// assault rifles, carbines
#define ASR_AI_ROF_RIFLE_SMALL_SINGLE \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 350;\
		aiRateOfFireDispersion = 2;\
		minRange = 20;\
		minRangeProbab = 0.7;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 700;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_RIFLE_SMALL_SEMI \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 300;\
		aiRateOfFireDispersion = 2;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 700;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE \
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 500;\
		aiRateOfFireDispersion = 3;\
		minRange = 200;\
		minRangeProbab = 0.8;\
		midRange = 300;\
		midRangeProbab = 0.6;\
		maxRange = 900;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE \
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 500;\
		aiRateOfFireDispersion = 4;\
		minRange = 200;\
		minRangeProbab = 0.8;\
		midRange = 300;\
		midRangeProbab = 0.6;\
		maxRange = 1100;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_RIFLE_SMALL_CLOSE_BURST \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 2;\
		minRange = 5;\
		minRangeProbab = 0.8;\
		midRange = 10;\
		midRangeProbab = 0.7;\
		maxRange = 20;\
		maxRangeProbab = 0.2
#define ASR_AI_ROF_RIFLE_SMALL_FULLAUTO \
		aiRateOfFire = 0.2;\
		aiRateOfFireDistance = 50;\
		aiRateOfFireDispersion = 1;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 1;\
		midRangeProbab = 0.8;\
		maxRange = 5;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_RIFLE_SMALL_FAR_BURST \
		aiRateOfFire = 5;\
		aiRateOfFireDistance = 600;\
		aiRateOfFireDispersion = 5;\
		minRange = 400;\
		minRangeProbab = 0.05;\
		midRange = 500;\
		midRangeProbab = 0.3;\
		maxRange = 800;\
		maxRangeProbab = 0.1


// CQB rifles (short barrels, small calibre)
#define ASR_AI_ROF_CQB_SINGLE \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 300;\
		aiRateOfFireDispersion = 2;\
		minRange = 20;\
		minRangeProbab = 0.7;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 600;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_CQB_SEMI \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 250;\
		aiRateOfFireDispersion = 2;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 600;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_CQB_MSCOPE_SINGLE \
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 500;\
		aiRateOfFireDispersion = 3;\
		minRange = 120;\
		minRangeProbab = 0.8;\
		midRange = 200;\
		midRangeProbab = 0.6;\
		maxRange = 700;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_CQB_FAR_BURST \
		aiRateOfFire = 6;\
		aiRateOfFireDistance = 600;\
		aiRateOfFireDispersion = 5;\
		minRange = 300;\
		minRangeProbab = 0.05;\
		midRange = 400;\
		midRangeProbab = 0.3;\
		maxRange = 600;\
		maxRangeProbab = 0.01


// battle rifles, 7.62 assault rifles
#define ASR_AI_ROF_RIFLE_MEDIUM_SINGLE \
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 350;\
		aiRateOfFireDispersion = 2;\
		minRange = 15;\
		minRangeProbab = 0.8;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 700;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_RIFLE_MEDIUM_SEMI \
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 300;\
		aiRateOfFireDispersion = 2;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 700;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE \
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 550;\
		aiRateOfFireDispersion = 3;\
		minRange = 150;\
		minRangeProbab = 0.9;\
		midRange = 300;\
		midRangeProbab = 0.8;\
		maxRange = 1000;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE \
		aiRateOfFire = 8;\
		aiRateOfFireDistance = 1200;\
		aiRateOfFireDispersion = 4;\
		minRange = 150;\
		minRangeProbab = 0.7;\
		midRange = 500;\
		midRangeProbab = 0.8;\
		maxRange = 1600;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_RIFLE_MEDIUM_CLOSE_BURST \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 2;\
		minRange = 5;\
		minRangeProbab = 0.8;\
		midRange = 10;\
		midRangeProbab = 0.7;\
		maxRange = 15;\
		maxRangeProbab = 0.2
#define ASR_AI_ROF_RIFLE_MEDIUM_FULLAUTO \
		aiRateOfFire = 0.2;\
		aiRateOfFireDistance = 50;\
		aiRateOfFireDispersion = 1;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 1;\
		midRangeProbab = 0.8;\
		maxRange = 5;\
		maxRangeProbab = 0.1


// AK special
#define ASR_AI_ROF_AK_SINGLE \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 350;\
		aiRateOfFireDispersion = 2;\
		minRange = 100;\
		minRangeProbab = 0.7;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 500;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_AK_MSCOPE_SINGLE \
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 500;\
		aiRateOfFireDispersion = 3;\
		minRange = 300;\
		minRangeProbab = 0.8;\
		midRange = 400;\
		midRangeProbab = 0.5;\
		maxRange = 700;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_AK_HSCOPE_SINGLE \
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 500;\
		aiRateOfFireDispersion = 4;\
		minRange = 300;\
		minRangeProbab = 0.8;\
		midRange = 400;\
		midRangeProbab = 0.5;\
		maxRange = 900;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_AK_CLOSE_BURST \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 1;\
		minRange = 5;\
		minRangeProbab = 0.8;\
		midRange = 50;\
		midRangeProbab = 0.7;\
		maxRange = 100;\
		maxRangeProbab = 0.2
#define ASR_AI_ROF_AK_FULLAUTO \
		aiRateOfFire = 0.1;\
		aiRateOfFireDistance = 50;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 1;\
		midRangeProbab = 0.8;\
		maxRange = 5;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_AK_FAR_BURST \
		aiRateOfFire = 5;\
		aiRateOfFireDistance = 600;\
		aiRateOfFireDispersion = 5;\
		minRange = 400;\
		minRangeProbab = 0.05;\
		midRange = 500;\
		midRangeProbab = 0.3;\
		maxRange = 800;\
		maxRangeProbab = 0.1

#define ASR_AI_AK_MODES(semibase,fullbase) \
		class Single: ##semibase { \
			ASR_AI_ROF_AK_SINGLE; \
		}; \
		class FullAuto: ##fullbase { \
			ASR_AI_ROF_AK_FULLAUTO; \
		}; \
		class ASR_AI_Burst_close: FullAuto { \
			showToPlayer = 0; \
            aiBurstTerminable = 1; \
			burst = 7; \
			ASR_AI_ROF_AK_CLOSE_BURST; \
		}; \
		class ASR_AI_Burst_far: FullAuto { \
			showToPlayer = 0; \
            aiBurstTerminable = 1; \
			burst = 5; \
			ASR_AI_ROF_AK_FAR_BURST; \
		}; \
		class ASR_AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			ASR_AI_ROF_AK_MSCOPE_SINGLE; \
		}; \
		class ASR_AI_Single_optics2: Single { \
			showToPlayer = 0; \
			requiredOpticType = 2; \
			ASR_AI_ROF_AK_HSCOPE_SINGLE; \
		}; \
		class ASR_Burst3: Single { \
			ASR_AI_ROF_AK_CLOSE_BURST; \
			showToPlayer = 1; \
			burst = 3; \
			displayName = $STR_DN_MODE_BURST; \
			textureType = "burst"; \
			soundBurst = 0; \
		}; \
		class ASR_Burst2: ASR_Burst3 { \
			burst = 2; \
            textureType = "dual"; \
		}

		
// light-medium machineguns
#define ASR_AI_ROF_MG_FULLAUTO \
		aiRateOfFire = 0.1;\
		aiRateOfFireDistance = 50;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 10;\
		midRangeProbab = 0.7;\
		maxRange = 20;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_MG_LONG_BURST \
		burst = 10;\
		aiRateOfFire = 0.5;\
		aiRateOfFireDistance = 50;\
		aiRateOfFireDispersion = 0.5;\
		minRange = 10;\
		minRangeProbab = 0.1;\
		midRange = 25;\
		midRangeProbab = 0.8;\
		maxRange = 50;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_MG_CLOSE_BURST \
		burst = 8;\
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 0.5;\
		minRange = 25;\
		minRangeProbab = 0.1;\
		midRange = 50;\
		midRangeProbab = 0.8;\
		maxRange = 100;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_MG_SHORT_BURST \
		burst = 5;\
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 200;\
		aiRateOfFireDispersion = 1;\
		minRange = 50;\
		minRangeProbab = 0.1;\
		midRange = 100;\
		midRangeProbab = 0.8;\
		maxRange = 200;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_MG_MEDIUM_BURST \
		burst = 4;\
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 400;\
		aiRateOfFireDispersion = 1;\
		minRange = 100;\
		minRangeProbab = 0.1;\
		midRange = 200;\
		midRangeProbab = 0.8;\
		maxRange = 400;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_MG_FAR_BURST \
		burst = 4;\
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 400;\
		aiRateOfFireDispersion = 1;\
		minRange = 200;\
		minRangeProbab = 0.1;\
		midRange = 400;\
		midRangeProbab = 0.8;\
		maxRange = 800;\
		maxRangeProbab = 0.1
#define ASR_AI_ROF_MG_VERYFAR_BURST \
		burst = 5;\
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 800;\
		aiRateOfFireDispersion = 2;\
		minRange = 400;\
		minRangeProbab = 0.1;\
		midRange = 800;\
		midRangeProbab = 0.2;\
		maxRange = 1000;\
		maxRangeProbab = 0.01

#define ASR_AI_ROF_MG_FAR_SCOPE_BURST \
		burst = 3;\
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 800;\
		aiRateOfFireDispersion = 1;\
		minRange = 400;\
		minRangeProbab = 0.2;\
		midRange = 800;\
		midRangeProbab = 0.8;\
		maxRange = 1200;\
		maxRangeProbab = 0.2
#define ASR_AI_ROF_MG_VERYFAR_SCOPE_BURST \
		burst = 2;\
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 1200;\
		aiRateOfFireDispersion = 2;\
		minRange = 800;\
		minRangeProbab = 0.4;\
		midRange = 1200;\
		midRangeProbab = 0.6;\
		maxRange = 1600;\
		maxRangeProbab = 0.1

#define ASR_AI_ROF_MG_SINGLE \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 300;\
		aiRateOfFireDispersion = 1;\
		minRange = 300;\
		minRangeProbab = 0.1;\
		midRange = 400;\
		midRangeProbab = 0.1;\
		maxRange = 500;\
		maxRangeProbab = 0.1

#define ASR_AI_MG_MODES(m,fullbase,semibase) \
		class ##m: ##fullbase { \
			ASR_AI_ROF_MG_FULLAUTO; \
		}; \
		class ASR_AI_Burst_long: ##m { \
			showToPlayer = 0; \
            aiBurstTerminable = 1; \
			ASR_AI_ROF_MG_LONG_BURST; \
		}; \
		class ASR_AI_Burst_close: ##m { \
			showToPlayer = 0; \
            aiBurstTerminable = 1; \
			ASR_AI_ROF_MG_CLOSE_BURST; \
		}; \
		class ASR_AI_Burst_short: ASR_AI_Burst_close { \
			ASR_AI_ROF_MG_SHORT_BURST; \
		}; \
		class ASR_AI_Burst_medium: ASR_AI_Burst_close { \
			ASR_AI_ROF_MG_MEDIUM_BURST; \
		}; \
		class ASR_AI_Burst_far: ASR_AI_Burst_close { \
			ASR_AI_ROF_MG_FAR_BURST; \
		}; \
		class ASR_AI_Burst_toofar: ASR_AI_Burst_close { \
			ASR_AI_ROF_MG_VERYFAR_BURST; \
		}; \
		class ASR_AI_Burst_far_optic1: ASR_AI_Burst_close { \
			requiredOpticType = 1; \
			ASR_AI_ROF_MG_FAR_SCOPE_BURST; \
		}; \
		class ASR_AI_Burst_toofar_optic1: ASR_AI_Burst_far_optic1 { \
			ASR_AI_ROF_MG_VERYFAR_SCOPE_BURST; \
		}; \
		class ASR_AI_Burst_far_optic2: ASR_AI_Burst_far_optic1 { \
			requiredOpticType = 2; \
		}; \
		class ASR_AI_Burst_toofar_optic2: ASR_AI_Burst_toofar_optic1 { \
			requiredOpticType = 2; \
		}; \
		class Single: ##semibase { \
			ASR_AI_ROF_MG_SINGLE; \
		}

// submachineguns
#define ASR_AI_ROF_SMG_SINGLE \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 300;\
		aiRateOfFireDispersion = 2;\
		minRange = 50;\
		minRangeProbab = 0.9;\
		midRange = 80;\
		midRangeProbab = 0.5;\
		maxRange = 300;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_SMG_BURST \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 0.5;\
		minRange = 20;\
		minRangeProbab = 0.8;\
		midRange = 30;\
		midRangeProbab = 0.5;\
		maxRange = 60;\
		maxRangeProbab = 0.2
#define ASR_AI_ROF_SMG_FULLAUTO \
		aiRateOfFire = 0.1;\
		aiRateOfFireDistance = 50;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 10;\
		midRangeProbab = 0.8;\
		maxRange = 20;\
		maxRangeProbab = 0.2

// sniper rifles (hi mag. scopes, medium-high calibre)
#define ASR_AI_ROF_RIFLE_SNIPER762_SEMI \
		aiRateOfFire = 7;\
		aiRateOfFireDistance = 1000;\
		aiRateOfFireDispersion = 3;\
		minRange = 0;\
		minRangeProbab = 0.4;\
		midRange = 500;\
		midRangeProbab = 0.8;\
		maxRange = 1600;\
		maxRangeProbab = 0.01

#define ASR_AI_ROF_BIGSNIPER_SEMI \
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 400;\
		aiRateOfFireDispersion = 2;\
		minRange = 1;\
		minRangeProbab = 0.4;\
		midRange = 150;\
		midRangeProbab = 0.7;\
		maxRange = 700;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_BIGSNIPER_MSCOPE_SEMI \
		aiRateOfFire = 4;\
		aiRateOfFireDistance = 600;\
		aiRateOfFireDispersion = 3;\
		minRange = 150;\
		minRangeProbab = 0.2;\
		midRange = 500;\
		midRangeProbab = 0.7;\
		maxRange = 1500;\
		maxRangeProbab = 0.2
#define ASR_AI_ROF_BIGSNIPER_HSCOPE_SEMI \
		aiRateOfFire = 8;\
		aiRateOfFireDistance = 1100;\
		aiRateOfFireDispersion = 4;\
		minRange = 250;\
		minRangeProbab = 0.2;\
		midRange = 750;\
		midRangeProbab = 0.7;\
		maxRange = 1000;\
		maxRangeProbab = 0.4
#define ASR_AI_ROF_BIGSNIPER_HSCOPE_FAR_SEMI \
		aiRateOfFire = 10;\
		aiRateOfFireDistance = 1500;\
		aiRateOfFireDispersion = 5;\
		minRange = 500;\
		minRangeProbab = 0.3;\
		midRange = 1200;\
		midRangeProbab = 0.7;\
		maxRange = 2500;\
		maxRangeProbab = 0.1

#define ASR_AI_ROF_338SNIPER_SEMI \
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 300;\
		aiRateOfFireDispersion = 2;\
		minRange = 1;\
		minRangeProbab = 0.4;\
		midRange = 150;\
		midRangeProbab = 0.7;\
		maxRange = 700;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_338SNIPER_MSCOPE_SEMI \
		aiRateOfFire = 4;\
		aiRateOfFireDistance = 500;\
		aiRateOfFireDispersion = 3;\
		minRange = 150;\
		minRangeProbab = 0.2;\
		midRange = 500;\
		midRangeProbab = 0.7;\
		maxRange = 1500;\
		maxRangeProbab = 0.01
#define ASR_AI_ROF_338SNIPER_HSCOPE_SEMI \
		aiRateOfFire = 8;\
		aiRateOfFireDistance = 1000;\
		aiRateOfFireDispersion = 4;\
		minRange = 250;\
		minRangeProbab = 0.2;\
		midRange = 750;\
		midRangeProbab = 0.7;\
		maxRange = 2200;\
		maxRangeProbab = 0.01

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
		}; \
		class FullAuto: ##fullbase { \
			ASR_AI_ROF_RIFLE_MEDIUM_FULLAUTO; \
		}; \
		class ASR_AI_Burst_close: FullAuto { \
			showToPlayer = 0; \
            aiBurstTerminable = 1; \
			burst = 4; \
			ASR_AI_ROF_RIFLE_MEDIUM_CLOSE_BURST; \
		}; \
		class ASR_AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			ASR_AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE; \
		}; \
		class ASR_AI_Single_optics2: Single { \
			showToPlayer = 0; \
			requiredOpticType = 2; \
			ASR_AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE; \
		}; \
		class ASR_SemiAuto: Single { \
			ASR_AI_ROF_RIFLE_MEDIUM_SEMI; \
		}


//6.5
#define ASR_AI_RIFLE_SMALL_XMODES \
		class ASR_AI_Burst_close: FullAuto { \
			showToPlayer = 0; \
            aiBurstTerminable = 1; \
			burst = 4; \
			ASR_AI_ROF_RIFLE_SMALL_CLOSE_BURST; \
		}; \
		class ASR_AI_Burst_far: FullAuto { \
			showToPlayer = 0; \
            aiBurstTerminable = 1; \
			burst = 2 + floor random 3; \
			ASR_AI_ROF_RIFLE_SMALL_FAR_BURST; \
		}; \
		class ASR_AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			ASR_AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE; \
		}; \
		class ASR_AI_Single_optics2: Single { \
			showToPlayer = 0; \
			requiredOpticType = 2; \
			ASR_AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE; \
		}; \
		class ASR_Single: Single {}; \
		class ASR_SemiAuto: Single { \
			ASR_AI_ROF_RIFLE_SMALL_SEMI; \
		}; \
		class ASR_Burst3: Single { \
			ASR_AI_ROF_RIFLE_SMALL_CLOSE_BURST; \
			showToPlayer = 1; \
			burst = 3; \
			displayName = $STR_DN_MODE_BURST; \
			textureType = "burst"; \
			soundBurst = 0; \
		}; \
		class ASR_Burst2: ASR_Burst3 { \
			burst = 2; \
            textureType = "dual"; \
		}

#define ASR_AI_RIFLE_SMALL_MODES(semibase,fullbase) \
		class Single: ##semibase { \
			ASR_AI_ROF_RIFLE_SMALL_SINGLE; \
		}; \
		class FullAuto: ##fullbase { \
			ASR_AI_ROF_RIFLE_SMALL_FULLAUTO; \
		}; \
		ASR_AI_RIFLE_SMALL_XMODES

#define ASR_AI_RIFLE_SMALL_CQB_MODES(semibase,fullbase) \
		class Single: ##semibase { \
			ASR_AI_ROF_CQB_SINGLE; \
		}; \
		class FullAuto: ##fullbase { \
			ASR_AI_ROF_RIFLE_SMALL_FULLAUTO; \
		}; \
		class ASR_AI_Burst_close: FullAuto { \
			showToPlayer = 0; \
            aiBurstTerminable = 1; \
			burst = 4; \
			ASR_AI_ROF_RIFLE_SMALL_CLOSE_BURST; \
		}; \
		class ASR_AI_Burst_far: FullAuto { \
			showToPlayer = 0; \
            aiBurstTerminable = 1; \
			burst = 2 + floor random 3; \
			ASR_AI_ROF_CQB_FAR_BURST; \
		}; \
		class ASR_AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			ASR_AI_ROF_CQB_MSCOPE_SINGLE; \
		}; \
		class ASR_AI_Single_optics2: Single { \
			showToPlayer = 0; \
			requiredOpticType = 2; \
			ASR_AI_ROF_CQB_MSCOPE_SINGLE; \
		}; \
		class ASR_Single: Single {}; \
		class ASR_SemiAuto: Single { \
			ASR_AI_ROF_CQB_SEMI; \
		}; \
		class ASR_Burst3: Single { \
			ASR_AI_ROF_RIFLE_SMALL_CLOSE_BURST; \
			showToPlayer = 1; \
			burst = 3; \
			displayName = $STR_DN_MODE_BURST; \
			textureType = "burst"; \
			soundBurst = 0; \
		}; \
		class ASR_Burst2: ASR_Burst3 { \
			burst = 2; \
		}

#define ASR_AI_BIGSNIPER_MODES(semibase) \
		class Single: ##semibase { \
			ASR_AI_ROF_BIGSNIPER_SEMI; \
		}; \
		class ASR_AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			ASR_AI_ROF_BIGSNIPER_MSCOPE_SEMI; \
		}; \
		class ASR_AI_Single_optics2: Single { \
			showToPlayer = 0; \
			requiredOpticType = 2; \
			ASR_AI_ROF_BIGSNIPER_HSCOPE_SEMI; \
		}; \
		class ASR_AI_Single_far_optics2: Single { \
			showToPlayer = 0; \
			requiredOpticType = 2; \
			ASR_AI_ROF_BIGSNIPER_HSCOPE_FAR_SEMI; \
		}


#define ASR_AI_338SNIPER_MODES(semibase) \
		class Single: ##semibase { \
			ASR_AI_ROF_338SNIPER_SEMI; \
		}; \
		class ASR_AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			ASR_AI_ROF_338SNIPER_MSCOPE_SEMI; \
		}; \
		class ASR_AI_Single_optics2: Single { \
			showToPlayer = 0; \
			requiredOpticType = 2; \
			ASR_AI_ROF_338SNIPER_HSCOPE_SEMI; \
		}
