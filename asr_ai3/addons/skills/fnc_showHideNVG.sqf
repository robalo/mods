//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_show"];

(_unit call FUNC(unitNVG)) params ["_nvg", "_nvgHelmet"];

if (_show) then { // Equip NVG
	if (_nvg != "" || _nvgHelmet != "") exitWith {
		LOG("Already has NVG equipped");
	};
	private _unitItems = [_unit, false, true, true, true, false] call CBA_fnc_uniqueUnitItems;
	private _cfgWeapons = configFile >> "CfgWeapons";
	private _found = _unitItems findIf {getText (_cfgWeapons >> _x >> "simulation") isEqualTo "NVGoggles"};
	if (_found != -1) then {_nvg = _unitItems select _found;};

	if (_nvg != "") then {
		_unit assignItem _nvg;
		TRACE_2("Unit equips NVG",_unit,_nvg);
	};
} else { // un-Equip NVG if not using it
	if (_nvg != "" && {currentVisionMode _unit == 0}) then {
		// have space for it ?
		if (_unit canAdd _nvg) then {
			_unit unassignItem _nvg;
			TRACE_2("Unit un-equips NVG",_unit,_nvg);
		} else {
			LOG("Not enough space to store NVG");
		};
	};
};
