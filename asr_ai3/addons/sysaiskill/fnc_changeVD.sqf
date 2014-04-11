//for using on DS and HC
//sets new VD based on sun position and fog
#define DEBUG_MODE_FULL
#include "script_component.hpp"
private ["_sunel","_newvd"];
_sunel = call FUNC(sunElevation);
_newvd = GVAR(startvd) * 90/(180 - _sunel);
if (fog > 0.05) then {_newvd = _newvd * (1.05 - fog)};
if (_newvd != viewDistance) then {
	setViewDistance _newvd;
	TRACE_1("New ViewDistance set",_newvd);
};
