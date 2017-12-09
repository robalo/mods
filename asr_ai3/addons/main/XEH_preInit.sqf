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
ASR_AI_SETDEFAULT(skip_factions,[]);






if (count GVAR(sets) < 10) then {
    GVAR(sets) = [
	[	"general",[1.00,0.0],	"aiming",[1.00,0.0],	"spotting",[1.00,0.0]	],
	[	"general",[0.80,0.2],	"aiming",[0.40,0.2],	"spotting",[0.40,0.1]	],
	[	"general",[0.70,0.2],	"aiming",[0.30,0.2],	"spotting",[0.35,0.1]	],
	[	"general",[0.60,0.2],	"aiming",[0.25,0.1],	"spotting",[0.30,0.1]	],
	[	"general",[0.50,0.2],	"aiming",[0.20,0.1],	"spotting",[0.25,0.1]	],
	[	"general",[0.40,0.2],	"aiming",[0.15,0.1],	"spotting",[0.20,0.1]	],
	[	"general",[0.30,0.2],	"aiming",[0.10,0.1],	"spotting",[0.15,0.1]	],
	[	"general",[0.20,0.2],	"aiming",[0.05,0.1],	"spotting",[0.10,0.1]	],
	[	"general",[0.60,0.2],	"aiming",[0.25,0.1],	"spotting",[0.35,0.1]	],
	[	"general",[0.50,0.2],	"aiming",[0.20,0.1],	"spotting",[0.30,0.1]	],
	[	"general",[0.80,0.2],	"aiming",[0.70,0.3],	"spotting",[0.90,0.1]	]
    ]
};
if (count GVAR(levels_units) < 10) then {GVAR(levels_units) = [[],[],[],[],[],[],[],[],[],[],[]]};

GVAR(cfgQ) = [];
GVAR(copymystance) = 0;
GVAR(fireonme) = 0;

GVAR(needmax) = [ // The level of supplies the unit will try to maintain
	GVAR(rearm_mags), // mags for primary weapon
	GVAR(rearm_fak)  // fak
];
GVAR(crithit) = [getNumber (configFile >> "CfgFirstAid" >> "CriticalHeadHit"), getNumber (configFile >> "CfgFirstAid" >> "CriticalBodyHit")];

PREP(isValidUnit);
PREP(isValidUnitC);
PREP(hasPlayer);
PREP(hasNoPlayer);
PREP(isUnderRoof);
PREP(grpHasWP);

//unused: reveal, isNearStuff
