//hit EH: remove gimps; switch to combat; go to cover
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_hitman", "_damage"];

if (local _unit && {!(isPlayer _unit)} && {_unit call FUNC(isValidUnitC)} && {_unit != missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", objNull]}) then {

    // GTFO of static weapons when hit
    if ((vehicle _unit) isKindOf "StaticWeapon" && {_damage > 0.2}) then {doGetOut _unit; _unit setSuppression (1 min (random 0.6 + getSuppression _unit))};

    // randomly fall down if damage was considerable
	if (GVAR(fallDown) && {_damage > 0.1} && {!isNull _hitman} && {random 1 > 0.41}) then {[_unit] spawn FUNC(fallDown)};

	if !((group _unit) call FUNC(hasPlayer)) then {
        // move to cover
        _unit limitSpeed 1; //km/h
        if (GVAR(seekcover)) then {[_unit,_hitman,10] call FUNC(unitMoveToCover)};

        // increase alertness to 9000
		if (_unit != _hitman) then {
			if ((behaviour _unit) in ["SAFE","AWARE"]) then {_unit setBehaviour "COMBAT"};
		};

		if (GVAR(removegimps) > 0) then {
            // if the unit can't walk, separate from the group after some time
            if (!canStand _unit && {isNil {_unit getVariable "asr_nolegs"}} && {isNull objectParent _unit} && {count ((group _unit) call FUNC(getAlive)) > 1} && {!(__ISMEDIC(_unit))}) then {
                _unit setVariable ["asr_nolegs", time]; // since when ?
                _unit spawn {
                    while {!isNil {_this getVariable "asr_nolegs"}} do {
                        if (canStand _this) then {
                            _this setVariable ["asr_nolegs", nil]; // recovered
                        } else {
                            // if no legs for too long and no medic, separate from the group to prevent slowing them down
                            if (time - (_this getVariable "asr_nolegs") > GVAR(removegimps) && {(((group _this) call FUNC(getAlive)) select {__ISMEDIC(_x)}) isEqualTo []}) then {
                                [_this] joinSilent grpNull;
                            };
                        };
                        sleep 30;
                    };
                };
            };
        };
	};
};
