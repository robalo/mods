//#define DEBUG_MODE_FULL
#include "script_component.hpp"
LOG(MSG_INIT);

[] spawn {
	private ["_fh","_i","_thisgroup","_units","_c","_u","_d","_from","_to","_test"];
	_fh = true;
	sleep 10;

	_test = {
		private["_ret","_side"];
		_side = getNumber(configFile>>"CfgVehicles">>(typeOf _this)>>"side");
		_ret = (alive _this && local _this && !isPlayer _this);
		TRACE_1("",_ret);
		_ret
	};
  
	while {true} do {
		{ // cycle all groups
			_thisgroup = _x;
			_units = units _thisgroup;
			if ({isPlayer _x} count _units == 0) then {
				_c = count _units;
				if (_c == 1) then {
					_u = _units select 0;
					if (_u call _test) then {
						_u spawn FUNC(rearm);
					};
				} else {
					_d = ceil(_c/2 - 1);
					if (_fh) then { // first half
						_from = 0;
						_to = _d;
					}	else { // second half
						_from = _d + 1;
						_to = _c - 1;
					};
					for "_i" from _from to _to do {
						_u = _units select _i;
						if (_u call _test) then {
							_u spawn FUNC(rearm);
						};
						sleep 0.1;
					};
				};
			};
			sleep 1;
		} forEach allGroups;
		_fh = !_fh;
		sleep 20;
  	};
};
