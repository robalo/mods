//#define DEBUG_MODE_FULL
#include "\a3\editor_f\Data\Scripts\dikCodes.h"
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



ASR_AI_SETDEFAULT(DEBUG_NAME, "Pooter");

GVAR(DC_NEED_COVER) = [2,4,9];
GVAR(DC_ATTACK) =[2,3,4,6,9];




if (count GVAR(sets) < 10) then {
    GVAR(sets) = [
	[	"general",[1.00,0.0],	"aiming",[1.00,0.00],	"spotting",[1.00,0.0]	],
	[	"general",[0.90,0.1],	"aiming",[0.40,0.25],	"spotting",[0.40,0.1]	],
	[	"general",[0.85,0.1],	"aiming",[0.35,0.25],	"spotting",[0.35,0.1]	],
	[	"general",[0.80,0.1],	"aiming",[0.30,0.15],	"spotting",[0.30,0.1]	],
	[	"general",[0.75,0.1],	"aiming",[0.25,0.15],	"spotting",[0.25,0.1]	],
	[	"general",[0.70,0.1],	"aiming",[0.20,0.15],	"spotting",[0.20,0.1]	],
	[	"general",[0.65,0.1],	"aiming",[0.15,0.15],	"spotting",[0.15,0.1]	],
	[	"general",[0.60,0.1],	"aiming",[0.10,0.15],	"spotting",[0.10,0.1]	],
	[	"general",[0.80,0.1],	"aiming",[0.25,0.15],	"spotting",[0.35,0.1]	],
	[	"general",[0.70,0.1],	"aiming",[0.20,0.15],	"spotting",[0.30,0.1]	],
	[	"general",[0.90,0.1],	"aiming",[0.70,0.30],	"spotting",[0.90,0.1]	]
    ]
};
if (count GVAR(levels_units) < 10) then {GVAR(levels_units) = [[],[],[],[],[],[],[],[],[],[],[]]};

GVAR(configQueue) = [];
GVAR(copymystance) = 0;

GVAR(needmax) = [ // The level of supplies the unit will try to maintain
	GVAR(rearm_mags), // mags for primary weapon
	GVAR(rearm_fak)  // fak
];
GVAR(crithit) = [getNumber (configFile >> "CfgFirstAid" >> "CriticalHeadHit"), getNumber (configFile >> "CfgFirstAid" >> "CriticalBodyHit")];

FUNC(isValidUnit) = {!(isNull _this) && {alive _this} && {{_x == faction _this} count GVAR(skip_factions) == 0} && {!(_this getVariable ["asr_ai_exclude", false])}};
FUNC(isValidUnitC) = {_this call FUNC(isValidUnit) && {!(_this call FUNC(isUnc))}};
FUNC(isMedic) = {getNumber(configFile >>"CfgVehicles">>(typeOf _this)>>"attendant") == 1};
FUNC(getAlive) = {(units _this) select {alive _x}};
FUNC(addUnitToQueue) = {params ["_unit"]; GVAR(configQueue) pushBack _unit};

PREP(isUnc);
PREP(isNearStuff);
PREP(getNearest);
PREP(nearFactionGroups);
PREP(hasRadio);
PREP(hasPlayer);
PREP(setUnitSkill);
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
PREP(fallDown);
PREP(handleExplosion);
PREP(stopToShoot);
PREP(handleDamage);

["ASR AI3", "ASR AI3", ["Toggle Copy My Stance", "asr_ai3_copymystance"], {player call FUNC(copyMyStance)}, {}, [DIK_BACKSLASH, [true, true, false]]] call cba_fnc_addKeybind;

PREP(pt_checkVis);
PREP(pt_downPos);
PREP(pt_findPossibleCenter);
PREP(pt_getCoverPos);
PREP(pt_getCoverPosUnknownEnemy);
PREP(pt_getClosestBuildingPos);
PREP(pt_getUnitsThatNeedCover);
PREP(pt_goToNextBuildingPos);
PREP(pt_isCoverValid);
PREP(pt_moveToPoint);
PREP(pt_reactDanger_attack);
PREP(pt_reactDanger_inStruct);
PREP(pt_reactDanger_inStruct_amVis);
PREP(pt_reactDanger_outStruct);
PREP(pt_reactDanger);
PREP(pt_reset_pos);
PREP(pt_calculatePos);
PREP(pt_setStatusText);
