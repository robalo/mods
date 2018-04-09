//sets camouflage based on actual gear unit is wearing
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];
if !(local _unit) exitWith {};

private _uniform = uniform _unit;
private _vest = vest _unit;
private _ruck = backpack _unit;

private _gearItems = [_uniform, _vest, _ruck]; //uni must be checked first for ghillie special case

//Don't do anything if the relevant items didn't change
if (_unit getVariable ["asr_ai_skills_camoCache", []] isEqualTo _gearItems) exitWith {};
unit setVariable ["asr_ai_skills_camoCache", _gearItems];

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

// launcher on back gives one up, the more the bigger it is.
private _tube = secondaryWeapon _unit;
private _tubeCoef = 1;
if (_tube != "" && {isClass (configfile>>"CfgWeapons">>_tube)}) then {
    private _tubemass = [configfile>>"CfgWeapons">>_tube>>"WeaponSlotsInfo">>"mass", "number", 0] call CBA_fnc_getConfigEntry;
    if (_tubemass > 100) then {_tubeCoef = _tubemass/100};
};

private _camoCoef = if (_pieces > 0) then {(_camo/_pieces)*_tubeCoef} else {_tubeCoef};
_unit setUnitTrait ["camouflageCoef", _camoCoef];

if (GVAR(debug_setcamo)) then {
    private _unitType = typeOf _unit;
    private _basecamo = getNumber (configfile>>"CfgVehicles">>_unitType>>"camouflage");
    private _camofinal = _basecamo * _camoCoef;
    diag_log format["ASR AI3: Unit %1, type: %2, uniform: %3, vest: %4, ruck: %5, launcher: %6, baseCamo: %7, camoCoef: %8, camoFinal: %9",_unit,_unitType,_uniform,_vest,_ruck,_tube,_basecamo,_camoCoef,_camofinal];
};
