//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_show"];

(_unit call FUNC(unitNVG)) params ["_nvg", "_nvgHelmet"];

if (_show) then { // Equip NVG
	if (_nvg != "" || _nvgHelmet != "") exitWith {
		LOG("Already has NVG equipped");
	};
	{ if (getText(configFile>>"CfgWeapons">>_x>>"simulation") == "NVGoggles") exitWith {_nvg = _x} } forEach items _unit;
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
