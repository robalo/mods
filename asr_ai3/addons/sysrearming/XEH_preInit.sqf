//#define DEBUG_MODE_FULL
#include "script_component.hpp"

GVAR(cfg) = if (isClass (ASR_AI_MISSIONCFG)) then {ASR_AI_MISSIONCFG} else {ASR_AI_USERCFG};
TRACE_1("",GVAR(cfg));

ASR_AI_CFGREAD(feature,number,1);
if (GVAR(feature) == 0) exitWith {
	LOG("disabled");
};
LOG(MSG_INIT);

ASR_AI_CFGREAD(run,number,1);
ASR_AI_CFGREAD(radius,number,40);
ASR_AI_CFGREAD(civ,number,0);
ASR_AI_CFGREAD(binocs,number,1);
TRACE_4("",GVAR(run),GVAR(radius),GVAR(civ),GVAR(binocs));

ASR_AI_CFGREAD(launchers,array,[]);
ASR_AI_CFGREAD(grenades,array,[]);
ASR_AI_CFGREAD(smokes,array,[]);
if (count GVAR(launchers) == 0) then {GVAR(launchers) = ["launch_NLAW_F","launch_RPG32_F","launch_B_Titan_short_F","launch_I_Titan_short_F","launch_O_Titan_short_F","launch_Titan_short_F"]};
if (count GVAR(grenades) == 0) then {GVAR(grenades) = ["HandGrenade","MiniGrenade"]};
if (count GVAR(smokes) == 0) then {GVAR(smokes) = ["SmokeShell","SmokeShellYellow","SmokeShellRed","SmokeShellGreen","SmokeShellPurple","SmokeShellBlue","SmokeShellOrange"]};
TRACE_1("",GVAR(launchers));
TRACE_1("",GVAR(grenades));
TRACE_1("",GVAR(smokes));

GVAR(needmax) = [	// The level of supplies the unit will try to maintain
	0, // not used
	0, // not used
	0, // not used
	0, // not used
	0, // not used
	3, // mags
	2, // gl
	1, // rpg
	0, // spotting
	1, // pistol
	1, // nades
	1, // smoke
	1, // fakits
	0, // medkits - for medics
	0, // toolkits - for engineers
	0, // not used
	0  // not used
];

PREP(found);
PREP(isCrew);
PREP(isPilot);
PREP(getCompatMags);
PREP(isReady);
PREP(foundMag);
PREP(countMags);
PREP(countItems);
PREP(inventoryCheck);
PREP(getCargo);
PREP(getNearMags);
PREP(getNearWeapons);
PREP(getBinoculars);
PREP(getNVG);
PREP(unitInit);
PREP(rearm);
PREP(returnToFormation);
