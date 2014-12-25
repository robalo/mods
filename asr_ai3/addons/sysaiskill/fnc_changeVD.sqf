//for using on DS and HC
//sets new VD based on sun position and fog
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private "_newvd";
//_sunel = call FUNC(sunElevation);
//_newvd = GVAR(startvd) * 90/(180 - _sunel);
_newvd = GVAR(startvd)/(2 - sunOrMoon);
if (fog > 0.02) then {_newvd = _newvd * (1.02 - fog)};
if (_newvd != viewDistance) then {
	setViewDistance _newvd;
	if (GVAR(debug) != 0) then {
		diag_log format["New viewDistance: %1, Server FPS: %2", _newvd, diag_fps];
	};
};
