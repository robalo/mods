//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];

#define __m_primary_1 0
#define __m_fakit 1

// check for first aid kit types (ACE3 medical compatible)
private _fa = [];
if (isNil "ace_medical_fnc_itemCheck") then {
    _fa append ["FirstAidKit"];
} else {
    _fa append ["ACE_fieldDressing","ACE_packingBandage"];
};

// need types array
private _nt = [
	[],
	_fa
];

if !(_unit canAdd "FirstAidKit") exitWith {false}; //not even space for a FAK

private _w = primaryWeapon _unit;
if (_w != "" && {[magazines _unit, _w call FUNC(getCompatMags)] call FUNC(countItems) < GVAR(needmax) select __m_primary_1}) exitWith {true};

if (__ISMEDIC(_unit)) then { GVAR(needmax) set [__m_fakit, (GVAR(needmax) select __m_fakit) + 3] };

// Check for Kits
if ([items _unit, _nt select __m_fakit] call FUNC(countItems) < GVAR(needmax) select __m_fakit) exitWith {true};

false
