//#define DEBUG_MODE_FULL
#include "script_component.hpp"

PARAMS_2(_unit,_house);
DEFAULT_PARAM(2,_posdelay,10); // meant more like "clear building and fight from inside or top"; call this with a smaller third parameter for a quick search
private ["_indices","_timeout","_housepos"];
_indices = [];

// pick some positions
for "_i" from 0 to (_house select 1) do {
	if (random 1 > 0.6) then {
		_indices set [count _indices,_i];
	};
};

if (count _indices > 0) then {
  {
  	if (_unit call FNCMAIN(isUnc)) exitWith {};
  	_housepos = (_house select 0) buildingPos _x;
  	TRACE_2("Try to move unit to house",_unit,_housepos);
  	if (unitReady _unit && str _housepos != '[0,0,0]') then {
  		waitUntil {isNil {_unit getVariable QGVAR(shooting)}}; // stopped shooting
  		_unit setUnitPosWeak "Up";
  		_unit doMove _housepos;
  		_timeout = time + 90;
  		waitUntil {moveToCompleted _unit || moveToFailed _unit || unitReady _unit || _unit call FNCMAIN(isUnc) || _timeout < time};
  		if (_unit call FUNC(isUnderRoof)) then {
  			_unit setUnitPosWeak "Up";
  		} else {
  			_unit setUnitPosWeak "Auto";
  		};
  	};
  	_posdelay = _posdelay + random (_posdelay * 2);
  	sleep _posdelay;
  	if (_unit ammo (currentWeapon _unit) < 20) then {
  		sleep (_posdelay * 2); // snipe more
  	};
  } forEach _indices;
  
  if (alive _unit) then {
  	_unit setUnitPosWeak "Auto";
  	[_unit] joinSilent (group _unit);
  };
};
