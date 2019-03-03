//#define DEBUG_MODE_FULL
#include "script_component.hpp"
LOG(MSG_INIT);

#include "initSettings.sqf"

if (isServer) then {
    if (isFilePatchingEnabled) then {
        ASR_AI3_SETTINGS_SS = compile preprocessFileLineNumbers "\userconfig\asr_ai3\asr_ai3_config.sqf";
        if (!isNil "ASR_AI3_SETTINGS_SS") then {
            [] call ASR_AI3_SETTINGS_SS; // Load the server-side defaults
        };
    } else {
        diag_log "ASR AI3: Loading default settings for AI skills, launch the game with -filePatching to enable loading from userconfig\asr_ai3\asr_ai3_config.sqf";
    };
};

ASR_AI_SETDEFAULT(sets,[]);
ASR_AI_SETDEFAULT(levels_units,[]);
ASR_AI_SETDEFAULT(factions,[]);

if (count GVAR(sets) < 10) then {
    GVAR(sets) = [
	[	'general',[1.00,0.0],	'aiming',[1.00,0.0],	'spotting',[1.00,0.0]	],
	[	'general',[0.80,0.2],	'aiming',[0.50,0.2],	'spotting',[0.50,0.2]	],
	[	'general',[0.75,0.2],	'aiming',[0.40,0.2],	'spotting',[0.40,0.2]	],
	[	'general',[0.65,0.2],	'aiming',[0.25,0.2],	'spotting',[0.30,0.2]	],
	[	'general',[0.60,0.2],	'aiming',[0.20,0.2],	'spotting',[0.25,0.2]	],
	[	'general',[0.55,0.2],	'aiming',[0.15,0.2],	'spotting',[0.20,0.2]	],
	[	'general',[0.50,0.2],	'aiming',[0.10,0.2],	'spotting',[0.15,0.2]	],
	[	'general',[0.45,0.2],	'aiming',[0.01,0.2],	'spotting',[0.10,0.2]	],
	[	'general',[0.65,0.2],	'aiming',[0.20,0.2],	'spotting',[0.35,0.2]	],
	[	'general',[0.60,0.2],	'aiming',[0.15,0.2],	'spotting',[0.30,0.2]	],
	[	'general',[0.75,0.2],	'aiming',[0.80,0.2],	'spotting',[0.90,0.1]	]
    ]
};
if (count GVAR(levels_units) < 11) then {GVAR(levels_units) = [[],[],[],[],[],[],[],[],[],[],[]]};

GVAR(cfgQ) = [];

PREP(setSkill);
PREP(setUnitSkill);
PREP(setUnitCamo);
PREP(configureUnit);
PREP(unitNVG);
PREP(showHideNVG);
PREP(setupGear);
PREP(configLoop);
PREP(handleLocal);
