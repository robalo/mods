//sets camouflage based on actual gear unit is wearing
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];
if !(local _unit) exitWith {};

private _uniform = uniform _unit;
private _vest = vest _unit;
private _ruck = backpack _unit;

private _gearItems = [_uniform, _vest, _ruck]; //uni must be checked first for ghillie special case
private _rootclasses = ["CfgWeapons", "CfgWeapons", "CfgVehicles"];
private _camo = 0;
private _pieces = 0;

{
    scopeName "camoLoop";
    _baseclass = _rootclasses select _forEachIndex;
    if (_x != "" && {([configfile>>_baseclass>>_x>>"asr_camouflage_ignore", "number", 0] call CBA_fnc_getConfigEntry) == 0}) then {
        _camo = _camo + ([configfile>>_baseclass>>_x>>"asr_camouflage", "number", 1] call CBA_fnc_getConfigEntry);
        INC(_pieces);
        // ghillie covers the others
        if (([configfile>>_baseclass>>_x>>"asr_camouflage_ghillie", "number", 0] call CBA_fnc_getConfigEntry) == 1) then {breakOut "camoLoop"};
    };
} forEach _gearItems;

if (_pieces > 0) then {
    _camoCoef = _camo/_pieces;
    _unit setUnitTrait ["camouflageCoef", _camoCoef];

    if (GVAR(debug_setcamo)) then {
        private _unitType = typeOf _unit;
        private _basecamo = getNumber (configfile>>"CfgVehicles">>_unitType>>"camouflage");
        private _camofinal = _basecamo * _camoCoef;
        diag_log format["ASR AI3: %1 | Unit %2, type: %3, uniform: %4, vest: %5, ruck: %6, baseCamo: %7, camoCoef: %8, camoFinal: %9",diag_ticktime,_unit,_unitType,_uniform,_vest,_ruck,_basecamo,_camoCoef,_camofinal];
    };
};
