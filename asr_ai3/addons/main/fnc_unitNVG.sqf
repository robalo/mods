//returns [<nvgItem>,<nvgHelmetItem>]
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];

private _nvg = hmd _unit;
if (_nvg != "") exitWith {[_nvg, ""]}; //quick way out

private _helmet = headGear _unit;
private _nvgHelmet = "";

if (_helmet != "") then {
    private _subItems = [(configFile>>"CfgWeapons">>_helmet), "subItems", []] call BIS_fnc_returnConfigEntry;
    { if (getText(configFile>>"CfgWeapons">>_x>>"simulation") == "NVGoggles") exitWith {_nvgHelmet = _helmet} } forEach _subItems;
};

["", _nvgHelmet]
