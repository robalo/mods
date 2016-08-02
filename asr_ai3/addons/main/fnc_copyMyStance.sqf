//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_caller"];
if (leader _caller != _caller) exitWith {hint "ASR-AI3 :: Copy My Stance : You are not the leader of the group !"; false};

if (GVAR(copymystance) == 0) then {
    GVAR(copymystance) = 1;
    {
        _x spawn {
            while {alive _this && GVAR(copymystance) == 1} do {
                private _leader = leader _this;
                if (isPlayer _leader && !isPlayer _this) then {
                    switch (stance _leader) do {
                        case "CROUCH": {_this setUnitPos "MIDDLE"};
                        case "PRONE": {_this setUnitPos "DOWN"};
                        default {_this setUnitPos "AUTO"};
                    };
                };
                sleep 2;
            };
        };
    } forEach units group _caller;
    hintSilent "ASR-AI3 :: Copy My Stance : Enabled";
} else {
    GVAR(copymystance) = 0;
    { if (!isPlayer _x) then {_x setUnitPos "AUTO"} } forEach units group _caller;
    hintSilent "ASR-AI3 :: Copy My Stance : Disabled";
};

true
