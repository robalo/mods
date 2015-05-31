//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_3(_sender,_rxgrp,_target);
if (isNull _sender || isNull _rxgrp || isNull _target) exitWith {LOG("Error: at least one parameter was null")};
private ["_knowledge","_rxleader"];
_knowledge = _sender knowsAbout _target;
if (_knowledge < 1) exitWith {LOG("Error: not enough info")};
_rxleader = leader _rxgrp;
if (_rxleader call FUNC(isValidUnitC)) then {
	_knowledge = _knowledge * (0.6 + random 0.3); // reveal less precise info
	if (_rxleader knowsAbout _target < _knowledge) then {
		if (_knowledge > 4) then {_knowledge = 4}; // cap it
		_rxleader reveal [_target, _knowledge];
		#ifndef DEBUG_MODE_FULL
		if (GVAR(debug) != 0) then {
		#endif
			diag_log format["%1 | Unit %2 sends %3 knowledge to %4 about %5",diag_ticktime,_sender,_knowledge,_rxleader,_target];
		#ifndef DEBUG_MODE_FULL
		};
	#endif
	};
};
