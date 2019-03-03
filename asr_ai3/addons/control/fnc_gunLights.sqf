//check for lights capability and return: [<hasFL>, <hasIR>, <mrtClass>, <accessoryClass>]
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];
private _hasFL = 0;
private _hasIR = 0;
//get side attachment class
private _acc = (_unit weaponAccessories currentWeapon _unit) select 1;
if (_acc isEqualTo "") exitWith {[0, 0, "", ""]};
private _wcfg = configFile >> "CfgWeapons" >> _acc;

//is it a flashlight ?
if ([_wcfg >> "ItemInfo" >> "FlashLight", "intensity", -1] call BIS_fnc_returnConfigEntry > 0) then {_hasFL = 1};
//is it a laser pointer ?
if ([_wcfg >> "ItemInfo" >> "Pointer", "irDistance", -1] call BIS_fnc_returnConfigEntry > 0) then {_hasIR = 1};

//check for CBA Accessory support (MRT)
private _mrtNext = [_wcfg, "MRT_SwitchItemNextClass", ""] call BIS_fnc_returnConfigEntry;
private _mrtPrev = [_wcfg, "MRT_SwitchItemPrevClass", ""] call BIS_fnc_returnConfigEntry;
TRACE_2("",_mrtNext,_mrtPrev);
if ([_mrtNext, _mrtPrev] isEqualTo ["", ""]) exitWith {[_hasFL, _hasIR, "", _acc]};

//we have switchable attachment, check if we have flashlights or lasers
private _mrtClass = "";
{
    _wcfg = configFile >> "CfgWeapons" >> _x;
    if (_hasFL == 0) then { //can we switch to a flashlight ?
        if ([_wcfg >> "ItemInfo" >> "FlashLight", "intensity", -1] call BIS_fnc_returnConfigEntry > 0) then {
            _hasFL = 2;
            _mrtClass = _x;
        };
    };
    if (_hasIR == 0) then { //can we switch to a laser ?
        if ([_wcfg >> "ItemInfo" >> "Pointer", "irDistance", -1] call BIS_fnc_returnConfigEntry > 0) then {
            _hasIR = 2;
            _mrtClass = _x;
        };
    };
} forEach [_mrtNext, _mrtPrev];
TRACE_4("",_hasFL,_hasIR,_mrtClass,_acc);
[_hasFL, _hasIR, _mrtClass, _acc]
