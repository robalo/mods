//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_3(_sender,_receiver,_target);
if (_sender call FUNC(isValidUnit)) exitWith {};
if (isNull _receiver || isNull _target) exitWith {LOG("Error: at least one parameter was null")};

private "_knowledge";
_knowledge = _sender knowsAbout _target;

if (_knowledge > 1) then {
	// 1 to 4
	if (_knowledge > 4) then {
		_knowledge = 4;
	} else {
		_knowledge = floor _knowledge;
	};
	
	{	// reveal less precise info
		if (!isPlayer _x && _x call FUNC(isValidUnit)) then {
			_x reveal [_target, _knowledge * (0.6 + random 0.2)];
		};
	} foreach units _receiver;

	#ifndef DEBUG_MODE_FULL
	if (GVAR(debug) != 0) then {
	#endif
 	diag_log format["%1 | Unit %2 sends %3 knowledge to %4 about %5",time,_sender,_knowledge,_receiver,_target];
	#ifndef DEBUG_MODE_FULL
	};
	#endif
};
