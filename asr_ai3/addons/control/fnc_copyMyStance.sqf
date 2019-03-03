//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_caller", "_copy"];
if (leader _caller != _caller) exitWith {hint "ASR-AI3 :: Copy My Stance : You are not the leader of the group !"; false};
private _units = groupSelectedUnits _caller; //work with selected units if any
if (_units isEqualTo []) then {_units = units group _caller};

if (_copy isEqualTo 1) then {
    {
        _x spawn {
            _this setVariable [QGVAR(copymystance), 1];
            while {alive _this && {(_this getVariable [QGVAR(copymystance), 0]) isEqualTo 1}} do {
                private _leader = leader _this;
                if (isPlayer _leader && !isPlayer _this) then {
                    private _stance = stance _leader;
                    call {
                        if (currentWeapon _this isEqualTo "") exitWith {_this setUnitPos "MIDDLE"};  // keep low if unarmed; prevent prone stuck bug
                        if !(isNull objectParent _leader) exitWith {_this setUnitPos "UP"};          // faster mounting
                        if (_leader distance _this > 100) exitWith {_this setUnitPos "AUTO"};        // revert to auto when away
                        if (_stance isEqualTo "CROUCH") exitWith {_this setUnitPos "MIDDLE"};
                        if (_stance isEqualTo "PRONE") exitWith {_this setUnitPos "DOWN"};
                        _this setUnitPos "UP"; //on auto they went prone way too often
                    };
                };
                sleep 2;
            };
        };
    } forEach _units;
    hintSilent "They follow my stance";
} else {
    {
        _x setVariable [QGVAR(copymystance), 0];
        if (!isPlayer _x) then {_x setUnitPos "AUTO"};
    } forEach _units;
    hintSilent "Stop copying my stance";
};

{_caller groupSelectUnit [_x, false]} forEach _units;

true
