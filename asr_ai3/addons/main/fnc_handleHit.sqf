//hit EH: remove gimps; switch to combat; go to cover
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_hitman", "_damage"];

if (local _unit && {!(isPlayer _unit)} && {_unit call FUNC(isValidUnitC)} && {_unit != missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", objNull]}) then {

    // GTFO of static weapons when hit
    private _veh = vehicle _unit;
    if (_veh isKindOf "StaticWeapon" && {_damage > 0.2}) then {doGetOut _unit};

    // randomly fall down if damage was considerable
	if (GVAR(fallDown) && {_damage > 0.1} && {!isNull _hitman} && {random 1 > 0.41}) then {[_unit] spawn FUNC(fallDown)};


	if !([group _unit] call FUNC(hasPlayer)) then {
		if (_unit != _hitman) then {
			if ((behaviour _unit) in ["SAFE","AWARE"]) then {_unit setBehaviour "COMBAT"};
		};
		if (GVAR(removegimps) > 0) then {
            // if the unit can't walk, separate from the group after some time
            if (!canStand _unit && {isNil {_unit getVariable "asr_nolegs"}} && {_veh == _unit} && {count ((group _unit) call FUNC(getAlive)) > 1} && {!(_unit call FUNC(isMedic))}) then {
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
