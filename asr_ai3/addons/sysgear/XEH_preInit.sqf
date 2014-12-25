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
ASR_AI_CFGREAD(packNVG,number,1);
ASR_AI_CFGREAD(dayscope,number,1);

PREP(showHideNVG);
PREP(replaceOptics);
PREP(setupGear);

FUNC(pistolToPrimary) = {
	PARAMS_1(_unit);
	_pw = primaryWeapon _unit;
	if (_pw != "") then {
		if (_pw != currentWeapon _unit) then {
			_unit action ["handGunOff", _unit];
		};
	};
};

FUNC(inventoryClosed) = {
	PARAMS_1(_unit);
	if (local _unit) then {
		if (!isPlayer _unit) then {
			if (_unit call FNCMAIN(isValidUnit)) then {
				_unit call FUNC(replaceOptics);
				_unit call FUNC(pistolToPrimary);
			};
		};
	};
};
