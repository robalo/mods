//returns [<nvgItem>,<nvgHelmetItem>]
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];

private _nvg = hmd _unit;
if (_nvg != "") exitWith {[_nvg, ""]}; //quick way out

private _helmet = headGear _unit;
private _nvgHelmet = "";
if (_helmet == "") exitWith {["",""]};

private _cfgWeapons = configFile >> "CfgWeapons";
private _subItems = getArray _cfgWeapons >> _helmet >> "subItems";
private _found = _subItems findIf {getText(_cfgWeapons >> _x >> "simulation") == "NVGoggles"};
if (_found == -1) exitWith {["",""]};

["", _helmet]
