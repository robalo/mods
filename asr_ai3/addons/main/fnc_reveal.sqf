//rx gain knowledge about tx based on audible range, distance and environment
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_rx", "_tx", "_k", "_r"];
_k = _k * (1 - ((_tx distance _rx)/_r));
// when in forest/houses/rain/wind/night, not so accurate
if ([_rx,"(forest + houses)",2] call FUNC(isNearStuff)) then {_k = _k * 0.75};
if ([_rx,"(rain + windy + night)",2] call FUNC(isNearStuff)) then {_k = _k * 0.75};
private _oldk = _rx knowsAbout _tx;
if (_oldk < _k) then {
	_rx reveal [_tx,_k];
	if (GVAR(debug_reveal)) then {
		diag_log format["ASR AI3: %1 | Unit %2 knew %3 and learned %4 about %5",diag_ticktime,_rx,_oldk,_k,_tx];
	};
};
