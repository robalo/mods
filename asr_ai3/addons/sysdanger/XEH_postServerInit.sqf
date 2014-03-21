//#define DEBUG_MODE_FULL
#include "script_component.hpp"

if (GVAR(enabled) > 0) then {
	LOG(MSG_INIT);

	// disable some functions which could break these games: Warfare (BIS or Benny's), DAC, MSO with caching)
	if (!isNil "BIS_WF_Common" || !isNil "WF_Logic" || !isNil "DAC_Code" || !isNil "gtk_cache_header") then {
		GVAR(joinlastunit) = 0;
		GVAR(removegimps) = 0;
	};

	private ["_units","_size"];
  { // cycle all groups
  	if (!isNull _x) then {
  		_units = _x call CBA_fnc_getAlive;
  		_size = count _units;
  		if (_x getVariable [QGVAR(initgroupsize),-1] == -1) then {
  			_x setVariable [QGVAR(initgroupsize), _size];
  			TRACE_3("saving initial group size",_x,_units,_size);
  		};
  	};
  } forEach allGroups;
};
