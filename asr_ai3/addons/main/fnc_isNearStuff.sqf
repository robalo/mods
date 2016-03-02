//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_places", "_distance"];
private ["_nearSomething","_sbp"];
_nearSomething = false;
_sbp = selectBestPlaces [(getPosASL _unit),_distance,_places,1,1];
if (count _sbp > 0) then {
	_nearSomething = ((_sbp select 0) select 1 >= 1);
};
TRACE_2("",_unit,_nearSomething);
_nearSomething
