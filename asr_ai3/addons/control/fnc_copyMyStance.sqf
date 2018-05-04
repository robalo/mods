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
                    call {
                        if !(isNull objectParent _leader) exitWith {_this setUnitPos "MIDDLE"};
                        if (stance _leader == "CROUCH") exitWith {_this setUnitPos "MIDDLE"};
                        if (currentWeapon _this == "") exitWith {_this setUnitPos "MIDDLE"}; //avoid going prone with no weapon, they never get back up
                        if (stance _leader == "PRONE") exitWith {_this setUnitPos "DOWN"};
                        if (_this call FNCMAIN(isUnderRoof)) then {_this setUnitPos "UP"} else {_this setUnitPos "AUTO"};
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
