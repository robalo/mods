#define DEBUG_MODE_FULL
#include "script_component.hpp"

if (GVAR(dynsvd) == 0) exitWith {
	LOG("disabled");
};
LOG(MSG_INIT);

[] spawn {
 	private ["_startvd","_sunel","_newvd"];
 	_startvd = 900 max viewDistance;
 	while {true} do {
 		_sunel = call FUNC(sunElevation);
 		_newvd = _startvd * 90/(180 - _sunel);
 		if (fog > 0.05) then {_newvd = _newvd * (1.05 - fog)};
 		if (_newvd != viewDistance) then {
 			setViewDistance _newvd;
 			TRACE_1("New ViewDistance set",_newvd);
 		};
 		sleep 60;
 	};
};
