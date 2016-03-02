//#define DEBUG_MODE_FULL
#include "\a3\editor_f\Data\Scripts\dikCodes.h"
#include "script_component.hpp"
LOG(MSG_INIT);

if (isServer) then {
    if (isFilePatchingEnabled) then {
        ASR_AI3_SETTINGS = compile preprocessFileLineNumbers "\userconfig\asr_ai3\asr_ai3_settings.sqf";
        if (!isNil "ASR_AI3_SETTINGS") then {
            [] call ASR_AI3_SETTINGS; // Load the global defaults
        };
        ASR_AI3_SETTINGS_SS = compile preprocessFileLineNumbers "\userconfig\asr_ai3\asr_ai3_settings_ss.sqf";
        if (!isNil "ASR_AI3_SETTINGS_SS") then {
            [] call ASR_AI3_SETTINGS_SS; // Load the server-side defaults
        };
    } else {
        diag_log "ASR AI3: Loading default settings, launch the game with -filePatching to enable userconfig";
    };
};

ASR_AI_SETDEFAULT(enabled,1);
ASR_AI_SETDEFAULT(radiorange,600);
ASR_AI_SETDEFAULT(seekcover,1);
ASR_AI_SETDEFAULT(usebuildings,0.8);
ASR_AI_SETDEFAULT(getinweapons,0.5);
ASR_AI_SETDEFAULT(packNVG,1);
ASR_AI_SETDEFAULT(disableAIPGfatigue,1);
ASR_AI_SETDEFAULT(onteamswitch,1);
ASR_AI_SETDEFAULT(debug,0);

ASR_AI_SETDEFAULT(setskills,1);
ASR_AI_SETDEFAULT(joinlast,2);
ASR_AI_SETDEFAULT(removegimps,300);
ASR_AI_SETDEFAULT(rearm,40);
ASR_AI_SETDEFAULT(sets,[]);
ASR_AI_SETDEFAULT(levels_units,[]);
ASR_AI_SETDEFAULT(factions,[]);

if (count GVAR(sets) < 10) then {
    GVAR(sets) = [
	[	"general",[1.00,0.0],	"aiming",[1.00,0.0],	"spotting",[1.00,0.0]	],
	[	"general",[0.90,0.1],	"aiming",[0.40,0.2],	"spotting",[0.40,0.1]	],
	[	"general",[0.85,0.1],	"aiming",[0.35,0.2],	"spotting",[0.35,0.1]	],
	[	"general",[0.80,0.1],	"aiming",[0.30,0.1],	"spotting",[0.30,0.1]	],
	[	"general",[0.75,0.1],	"aiming",[0.25,0.1],	"spotting",[0.25,0.1]	],
	[	"general",[0.70,0.1],	"aiming",[0.20,0.1],	"spotting",[0.20,0.1]	],
	[	"general",[0.65,0.1],	"aiming",[0.15,0.1],	"spotting",[0.15,0.1]	],
	[	"general",[0.60,0.1],	"aiming",[0.10,0.1],	"spotting",[0.10,0.1]	],
	[	"general",[0.80,0.1],	"aiming",[0.25,0.1],	"spotting",[0.35,0.1]	],
	[	"general",[0.70,0.1],	"aiming",[0.20,0.1],	"spotting",[0.30,0.1]	],
	[	"general",[0.90,0.1],	"aiming",[0.70,0.3],	"spotting",[0.90,0.1]	]
    ]
};
if (count GVAR(levels_units) < 10) then {GVAR(levels_units) = [[],[],[],[],[],[],[],[],[],[],[]]};

ASR_AI_SETDEFAULT(gunshothearing,1.1);
GVAR(loudrange) = 1500 * GVAR(gunshothearing);

GVAR(needmax) = [ // The level of supplies the unit will try to maintain
	3, // mags for primary weapon
	1  // fak
];

GVAR(configQueue) = [];
GVAR(copymystance) = 0;

FUNC(isValidUnit) = {!(isNull _this) && {alive _this} && {!(_this isKindOf "Civilian")} && {!(_this getVariable ["asr_ai_exclude", false])}};
FUNC(isValidUnitC) = {_this call FUNC(isValidUnit) && {!(_this call FUNC(isUnc))}};
FUNC(isMedic) = {getNumber(configFile >>"CfgVehicles">>(typeOf _this)>>"attendant") == 1};
FUNC(getAlive) = {[units _this, {alive _x}] call BIS_fnc_conditionalSelect};

PREP(isUnc);
PREP(getWeaponType);
PREP(isNearStuff);
PREP(getNearest);
PREP(nearFactionGroups);
PREP(hasRadio);
PREP(hasPlayer);
PREP(setUnitSkill);
PREP(addUnitToQueue);
PREP(configureUnit);
PREP(firedEH);
PREP(killedEH);
PREP(sendInfo);
PREP(broadcastInfo);
PREP(canCover);
PREP(findCover);
PREP(moveToCover);
PREP(getInWeaponsEH);
PREP(handleHit);
PREP(shootingStance);
PREP(showHideNVG);
PREP(setupGear);
PREP(reactDanger);
PREP(reveal);
PREP(isUnderRoof);
PREP(pistolToPrimary);
PREP(inventoryClosed);
PREP(setSkill);
PREP(canMountAIGunner);
PREP(onTeamSwitch);
PREP(isReady);
PREP(getCompatMags);
PREP(countItems);
PREP(inventoryCheck);
PREP(rearm);
PREP(copyMyStance);
PREP(configLoop);

["ASR AI3", "ASR AI3", ["Toggle Copy My Stance", "asr_ai3_copymystance"], {player call FUNC(copyMyStance)}, {}, [DIK_BACKSLASH, [true, true, false]]] call cba_fnc_addKeybind;
