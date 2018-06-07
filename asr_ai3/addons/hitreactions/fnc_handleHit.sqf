//hit EH: suppression effects; get out of statics; fall; switch to combat; go to cover
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
TRACE_1("fnc_handleHit",_this);
params ["_unit", "_hitman", "_damage"];
if (local _unit && {_unit != call CBA_fnc_currentUnit} && {_unit call FNCMAIN(isValidUnitC)}) then {
    //diag_log format ["ASR AI3: fnc_handleHit pass 1st condition: %1",_unit];
    // always suppressed when hit
    if (isNull objectParent _unit || {(vehicle _unit) isKindOf "StaticWeapon"}) then {_unit setSuppression 1};

    // GTFO of static weapons when hit
    if ((vehicle _unit) isKindOf "StaticWeapon" && {_damage > 0.2}) then {doGetOut _unit};

    // randomly fall down if damage was considerable
	if (GVAR(fallDown) && {_damage > 0.1} && {!isNull _hitman} && {random 1 > 0.41} && {!isClass (configFile >> "CfgPatches" >> "ace_hitreactions")}) then {
        //diag_log format ["ASR AI3: fnc_handleHit pass 2nd condition: %1",_unit];
        [_unit] spawn FUNC(fallDown);
    };

	if ((group _unit) call FNCMAIN(hasNoPlayer)) then {
        // increase alertness to 9000
		if (_unit != _hitman) then {
			if ((behaviour _unit) in ["SAFE","AWARE"]) then {_unit setBehaviour "COMBAT"};
		};
/*
        // move to cover - disabled by Raptoer
        if (!isNil "asr_ai3_danger_fnc_unitMoveToCover") then {
            if (asr_ai3_danger_seekcover) then {[_unit, _hitman, 20] call asr_ai3_danger_fnc_unitMoveToCover};
        };
*/
	};

    if (!isClass (configFile >> "CfgPatches" >> "ace_medical_ai")) then {
        // patch self when clear
        _unit spawn {
            while {sleep 5 + random 5; alive _this && {damage _this > 0.3}} do {
                waitUntil {"FirstAidKit" in (items _this) && {isNull (_this findNearestEnemy _this)}};
                _this action ["HealSoldierSelf", _this];
                sleep 10;
            };
        };
    };
};
