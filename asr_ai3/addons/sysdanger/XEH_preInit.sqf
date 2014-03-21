//#define DEBUG_MODE_FULL
#include "script_component.hpp"

//determine config class root
GVAR(cfg) = [[QUOTE(PREFIX),QUOTE(COMPONENT)],configfile>>QUOTE(PREFIX)>>QUOTE(COMPONENT)] call bis_fnc_loadClass;
TRACE_1("",GVAR(cfg));

ASR_AI_CFGREAD(enabled,number,1);
if (GVAR(enabled) == 0) exitWith {
	LOG("disabled");
};
LOG(MSG_INIT);

ASR_AI_CFGREAD(debug,number,0);
ASR_AI_CFGREAD(civ,number,0);
ASR_AI_CFGREAD(radionet,number,1);
ASR_AI_CFGREAD(radiorange,number,400);
ASR_AI_CFGREAD(seekcover,number,1);
ASR_AI_CFGREAD(throwsmoke,number,0.5);
ASR_AI_CFGREAD(reactions,array,[]);
if (count GVAR(reactions) < 3) then {GVAR(reactions) = [1,1,1]};
ASR_AI_CFGREAD(gunshothearing,number,0.8);
ASR_AI_CFGREAD(joinlastunit,number,1);
ASR_AI_CFGREAD(removegimps,number,300);
ASR_AI_CFGREAD(usebuildings,number,0.9);

PREP(getNearest);
PREP(isValidUnit);
PREP(sendInfo);
PREP(broadcastInfo);
PREP(isNearStuff);
PREP(hasSmoke);
PREP(throwSmoke);
PREP(findCover);
PREP(moveToCover);
PREP(enemyForce);
PREP(isUnderRoof);
PREP(searchHouse);
PREP(searchNearby);
PREP(nearFactionGroups);
PREP(reaction);
PREP(nearestMedic);
PREP(handleHit);
PREP(firedExplosive);
PREP(fired);
PREP(firedEH);
PREP(killedEH);
PREP(isMedic);
PREP(isUnc);
PREP(hasRadio);
