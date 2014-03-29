//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if (!isServer) exitWith {};
PARAMS_2(_unit,_hitman);

// AI groups only
if (isPlayer _unit || isPlayer leader _unit) exitWith {};

// move to cover
[_unit,_hitman,time,100] call FUNC(moveToCover);

// if the unit can't walk, separate from the group after some time
if (GVAR(removegimps) > 0 && vehicle _unit == _unit) then {
	if (count ((group _unit) call CBA_fnc_getAlive) > 1 && !(_unit call FNCMAIN(isMedic))) then {
		if (isNil {_unit getVariable "asr_nolegs"}) then {
			if (!canStand _unit) then {
				_unit setVariable ["asr_nolegs", time]; // since when ?
  			_unit spawn {
  				while (!isNil {_this getVariable "asr_nolegs"}) do {
  					if (canStand _this) then {
  						_this setVariable ["asr_nolegs", nil]; // recovered
  					} else {
  						// if no legs for too long, separate from the group to prevent slowing them down
  						if (time - (_this getVariable "asr_nolegs") > GVAR(removegimps)) then {
  							// but only if there's no medic in group
 								if ({_x call FNCMAIN(isMedic)} count ((group _this) call CBA_fnc_getAlive) == 0) then {
 									[_this] joinSilent grpNull;
 									private "_nearmedic";
 									_nearmedic = _this call FUNC(nearestMedic);
 									if (!isNull _nearmedic) then {_this doFollow _nearmedic};
 								};
  						};
  					};
  					sleep 1;
  				};//while
  			};//spawn
			};//can't stand
		};
	};
};
