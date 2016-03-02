//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_show"];

private ["_nvg","_eyew"];
_nvg = "";
{ if (getText(configFile>>"CfgWeapons">>_x>>"simulation") == "NVGoggles") exitWith {_nvg = _x} } forEach assignedItems _unit;

if (_show) then { // Equip NVG
	if (_nvg != "") exitWith {
		LOG("Already has NVG equipped");
	};
	{ if (getText(configFile>>"CfgWeapons">>_x>>"simulation") == "NVGoggles") exitWith {_nvg = _x} } forEach items _unit;
	if (_nvg != "") then {
		_unit assignItem _nvg;
		TRACE_2("Unit equips NVG",_unit,_nvg);
		// remove glasses
		_eyew = goggles _unit;
		if (_eyew != "") then {
			removeGoggles _unit;
			TRACE_2("Unit un-equips eyewear",_unit,_eyew);
			_unit setVariable ["asr_glasses", _eyew];
		};
	};
} else { // un-Equip NVG
	if (_nvg != "") then {
		// have space for it ?
		if (_unit canAdd _nvg) then {
			_unit unassignItem _nvg;
			TRACE_2("Unit un-equips NVG",_unit,_nvg);
			// put glasses back on
			_eyew = _unit getVariable ["asr_glasses", ""];
			if (_eyew != "") then {
				_unit addGoggles _eyew;
				TRACE_2("Unit equips eyewear",_unit,_eyew);
				_unit setVariable ["asr_glasses", nil];
			};
		} else {
			LOG("Not enough space to store NVG");
		};
	};
};
