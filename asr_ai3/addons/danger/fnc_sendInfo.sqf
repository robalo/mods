//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_sender", "_rxgrp", "_target"];
if (isNull _sender || isNull _rxgrp || isNull _target) exitWith {LOG("Error: at least one parameter was null")};
private _knowledge = (_sender skill "commanding")*(_sender knowsAbout _target); //info accuracy based on commanding skill
if (_knowledge < 1.5) exitWith {LOG("Error: target info not accurate enough")};
private _rxleader = leader _rxgrp;
if (_rxleader call FNCMAIN(isValidUnitC)) then {
	if (_rxleader knowsAbout _target < _knowledge) then {
		_rxleader reveal [_target, _knowledge];
        #ifndef DEBUG_MODE_FULL
		if (GVAR(debug_reveal)) then {
        #endif
			diag_log format["ASR AI3: %1 | Unit %2 sends %3 knowledge to %4 about %5",diag_ticktime,_sender,_knowledge,_rxleader,_target];
        #ifndef DEBUG_MODE_FULL
		};
        #endif
	};
};
