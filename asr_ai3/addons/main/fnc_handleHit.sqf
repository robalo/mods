//hit EH: remove gimps; switch to combat; go to cover
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_hitman"];

if (!(isPlayer _unit) && {_unit call FUNC(isValidUnitC)} && {_unit != missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", objNull]}) then {


	if !([group _unit] call FUNC(hasPlayer)) then {
		if (_unit != _hitman) then {
			if ((behaviour _unit) in ["SAFE","AWARE"]) then {_unit setBehaviour "COMBAT"};
		};
		if (GVAR(removegimps) > 0) then {
            // if the unit can't walk, separate from the group after some time
            if (!canStand _unit && {isNil {_unit getVariable "asr_nolegs"}} && {vehicle _unit == _unit} && {count ((group _unit) call FUNC(getAlive)) > 1} && {!(_unit call FUNC(isMedic))}) then {
                _unit setVariable ["asr_nolegs", time]; // since when ?
                _unit spawn {
                    while (!isNil {_this getVariable "asr_nolegs"}) do {
                        if (canStand _this) then {
                            _this setVariable ["asr_nolegs", nil]; // recovered
                        } else {
                            // if no legs for too long and no medic, separate from the group to prevent slowing them down
                            if (time - (_this getVariable "asr_nolegs") > GVAR(removegimps) && {{_x call FUNC(isMedic)} count ((group _this) call FUNC(getAlive)) == 0}) then {
                                [_this] joinSilent grpNull;
                            };
                        };
                        sleep 10;
                    };
                };
            };
        };
	};
};
