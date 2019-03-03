//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_caller", "_FLorIR", "_ONorOFF"];
if (leader _caller != _caller) exitWith {hint "ASR-AI3 :: Flip the gun lights : You are not the leader of the group !"; false};
private _units = groupSelectedUnits _caller; //work with selected units if any
if (_units isEqualTo []) then {_units = units group _caller};

private _fncSwitchItem = {
    params ["_unit", "_currWeaponType", "_currItem", "_switchItem"];
    switch (_currWeaponType) do {
        case 0: {
            _unit removePrimaryWeaponItem _currItem;
            _unit addPrimaryWeaponItem _switchItem;
        };
        case 1: {
            _unit removeHandgunItem _currItem;
            _unit addHandgunItem _switchItem;
        };
        case 2: {
            _unit removeSecondaryWeaponItem _currItem;
            _unit addSecondaryWeaponItem _switchItem;
        };
    };
};
private ["_gla", "_cw", "_cwt"];

{
    _cw = currentWeapon _x;
    _cwt = call {
        if (_cw == "") exitWith {-1};
        if (_cw == primaryWeapon _x) exitWith {0};
        if (_cw == handgunWeapon _x) exitWith {1};
        if (_cw == secondaryWeapon _x) exitWith {2};
        -1
    };
    if (_cwt > -1) then {
        (_x call FUNC(gunLights)) params ["_hasFL", "_hasIR", "_mrtClass", "_acc"];
        if (_FLorIR) then { //FL
            if (_hasFL > 0) then {
                if (_hasFL == 2) then { //switch to FL attachment
                    [_x, _cwt, _acc, _mrtClass] call _fncSwitchItem;
                };
                if (_ONorOFF) then {
                    _x enableGunLights "forceOn";
                    _x action ["GunLightOn", _x];
                    hintSilent "Lights ON";
                } else { //FL OFF
                    _x enableGunLights "forceOff";
                    _x action ["GunLightOff", _x];
                    hintSilent "Lights OFF";
                };
            };
        } else { //IR
            if (_hasIR > 0) then {
                if (_hasIR == 2) then { //switch to IR attachment
                    [_x, _cwt, _acc, _mrtClass] call _fncSwitchItem;
                };
                if (_ONorOFF) then {
                    _x enableIRLasers true;
                    _x action ["IRLaserOn", _x];
                    hintSilent "Lasers ON";
                } else {
                    _x enableIRLasers false;
                    _x action ["IRLaserOff", _x];
                    hintSilent "Lasers OFF";
                };
            };
        };
    };
} forEach _units;

{_caller groupSelectUnit [_x, false]} forEach _units;

true
