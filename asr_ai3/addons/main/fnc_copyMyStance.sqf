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
                    call {
                        if !(isNull objectParent _leader) exitWith {_this setUnitPos "MIDDLE"};
                        if (stance _leader == "CROUCH") exitWith {_this setUnitPos "MIDDLE"};
                        if (stance _leader == "PRONE") exitWith {_this setUnitPos "DOWN"};
                        if (_this call FUNC(isUnderRoof)) then {_this setUnitPos "UP"} else {_this setUnitPos "AUTO"};
                    };
                    /*private _leadspeed = speed vehicle _leader;
                    if (_leadspeed > 0) then {_this forceSpeed _leadspeed};*/
                };
                sleep 2;
            };
        };
    } forEach units group _caller;
    hintSilent "Team follows my stance";
} else {
    GVAR(copymystance) = 0;
    { if (!isPlayer _x) then {_x setUnitPos "AUTO"; /*_x forceSpeed -1*/} } forEach units group _caller;
    hintSilent "Team stops copying my stance";
};

true
