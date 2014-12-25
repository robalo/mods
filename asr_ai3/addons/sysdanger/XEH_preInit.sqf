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
ASR_AI_CFGREAD(radionet,number,1);
ASR_AI_CFGREAD(radiorange,number,500);
ASR_AI_CFGREAD(seekcover,number,1);
ASR_AI_CFGREAD(throwsmoke,number,0.8);
ASR_AI_CFGREAD(reactions,array,[]);
if (count GVAR(reactions) < 3) then {GVAR(reactions) = [1,1,1]};
ASR_AI_CFGREAD(usebuildings,number,0.7);

PREP(sendInfo);
PREP(broadcastInfo);
PREP(throwSmoke);
PREP(findCover);
PREP(moveToCover);
PREP(enemyForce);
PREP(isUnderRoof);
PREP(checkHouses);
PREP(reaction);
PREP(handleHit);
PREP(doSomething);
