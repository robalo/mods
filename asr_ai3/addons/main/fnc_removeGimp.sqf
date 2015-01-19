//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_unit);

// AI groups only
if ({isPlayer _x} count (units _unit) > 0) exitWith {};

// if the unit can't walk, separate from the group after some time
if (!canStand _unit && {isNil {_unit getVariable "asr_nolegs"}} && {vehicle _unit == _unit} && {count ((group _unit) call CBA_fnc_getAlive) > 1} && {!(_unit call FUNC(isMedic))}) then {
	_unit setVariable ["asr_nolegs", time]; // since when ?
	_unit spawn {
		while (!isNil {_this getVariable "asr_nolegs"}) do {
			if (canStand _this) then {
				_this setVariable ["asr_nolegs", nil]; // recovered
			} else {
				// if no legs for too long and no medic, separate from the group to prevent slowing them down
				if (time - (_this getVariable "asr_nolegs") > GVAR(removegimps) && {{_x call FUNC(isMedic)} count ((group _this) call CBA_fnc_getAlive) == 0}) then {
					[_this] joinSilent grpNull;
				};
			};
			sleep 10;
		};
	};
};
