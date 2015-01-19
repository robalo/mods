//#define DEBUG_MODE_FULL
#include "script_component.hpp"
//code from the SRRS module by SickBoy
private ["_friendlyForce", "_hostileForce", "_cost", "_factorOfHostileSuperiority"];
_friendlyForce = -1;
_hostileForce = 1;
{
	// filter out all friendly units from the result
	_cost = _x select 3;
	if (_cost > 0) then {
		_hostileForce = _hostileForce + _cost;
	} else {
		// filter out all not-friendly units from the result
		if (_x select 2 != civilian && _cost <= 0) then {
			_friendlyForce = _friendlyForce + _cost;
		};
	};
}
forEach (_this nearTargets GVAR(radiorange));

_friendlyForce = abs _friendlyForce;
_factorOfHostileSuperiority = (round((_hostileForce/_friendlyForce)*1000))/1000;
TRACE_2("force",_this,_factorOfHostileSuperiority);

_factorOfHostileSuperiority
