// check for types items in goodies
// limits are set in nc for each type
// returns list of found items
//#define DEBUG_MODE_FULL
#include "script_component.hpp"

PARAMS_3(_goodies,_nc,_nt);

private["_a","_c","_d","_f","_found","_i"];
_found = [];

for "_a" from 5 to ((count _nc) - 3) do {
	if (_nc select _a > 0) then {
		scopeName "CheckGoodies";
		{ // foreach item from this category
			_c = _x; // item checked
			_d = {_c == _x} count _goodies; // found this many in goodies
			if (_d > 0) then { //found some
  			if (_d > (_nc select _a)) then {_d = (_nc select _a)}; // limit to how many I need
  			for "_i" from 1 to _d do {
  				_found set [count _found, _c]; // add _c to _found list _d times
  			};
  			_f = (_nc select _a) - _d;
  			_nc set [_a, _f];
  			if (_f == 0) then {
  				//TRACE_1("BREAK",_nc);
  				breakOut "CheckGoodies"
  			}; //found enough of this type
			};
		} forEach (_nt select _a);
	};
};

TRACE_1("",_found);
_found
