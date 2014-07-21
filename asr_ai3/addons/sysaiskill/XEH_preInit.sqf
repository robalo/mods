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
private ["_sets","_levelor","_i","_thisLevel","_j","_cn","_a","_facts"];

ASR_AI_CFGREAD(debug,number,0); TRACE_1("",GVAR(debug));
ASR_AI_CFGREAD(hitcoef,number,0.5); TRACE_1("",GVAR(hitcoef));
ASR_AI_CFGREAD(civ,number,0); TRACE_1("",GVAR(civ));
ASR_AI_CFGREAD(dynsvd,number,1); TRACE_1("",GVAR(dynsvd));
ASR_AI_CFGREAD(gunshothearing,number,1.1); TRACE_1("",GVAR(gunshothearing));
ASR_AI_CFGREAD(joinlast,number,2); TRACE_1("",GVAR(joinlast));
ASR_AI_CFGREAD(removegimps,number,300); TRACE_1("",GVAR(removegimps));

//read skill sets and unit overrides from config
_sets = [];
_levelor = [];
for "_i" from 0 to (count(GVAR(cfg)>>"sets") - 1) do {
	PUSH(_sets,[]);
	_thisLevel = (GVAR(cfg)>>"sets") select _i;
	for "_j" from 0 to (count(_thisLevel) - 1) do {
		if (isArray ((_thisLevel) select _j)) then {
			_cn = configName ((_thisLevel) select _j);
			_a = [(_thisLevel) select _j, "array", []] call CBA_fnc_getConfigEntry;
			if (_cn == "units") then { //unit overrides
				PUSH(_levelor,_a);
			} else { //skill definitions
				PUSH(_sets select _i,_cn);
				PUSH(_sets select _i,_a);
			};
		};
	};
};
if (isNil QGVAR(sets)) then {GVAR(sets) = _sets};
if (isNil QGVAR(levels_units)) then {GVAR(levels_units) = _levelor};
TRACE_1("",GVAR(sets));
TRACE_1("",GVAR(levels_units));

//read faction coefs from config
_facts = [];
for "_i" from 0 to (count(GVAR(cfg)>>"factions") - 1) do {
	_thisfaction = (GVAR(cfg)>>"factions") select _i;
	_facts set [count _facts, [configName _thisfaction, ([_thisfaction>>"coef", "number", 1] call CBA_fnc_getConfigEntry)]];
};
if (isNil QGVAR(factions)) then {GVAR(factions) = _facts};
TRACE_1("",GVAR(factions));

PREP(isValidUnit);
PREP(setUnitSkill);
PREP(modUnitSkill);
PREP(sunElevation); //by CarlGustaffa: http://forums.bistudio.com/showthread.php?t=107476
PREP(changeVD);
PREP(firedEH);
PREP(killedEH);
PREP(removeGimp);
