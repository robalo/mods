// parameter: 2 dimensional cargo array
// returns the list of non-unique items
//#define DEBUG_MODE_FULL
#include "script_component.hpp"

private["_typea","_counta","_itema","_i","_j"];

_typea = (_this select 0) select 0;
_counta = (_this select 0) select 1;
_itema = [];

for "_i" from 0 to ((count _typea) - 1) do {
	for "_j" from 1 to (_counta select _i) do {
		_itema set [count _itema, _typea select _i];
	};
};

//TRACE_1("CARGO LIST",_itema);
_itema
