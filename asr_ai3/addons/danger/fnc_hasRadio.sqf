//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private _typename = toLower(typename _this);

private _hasradio = {
	if (isNull _this) exitWith {false};
    //{getText(configFile >> "CfgWeapons" >> _x >> "simulation") == "ItemRadio"} count (assignedItems _this) > 0
    (assignedItems _this) findIf {getText(configFile >> "CfgWeapons" >> _x >> "simulation") == "ItemRadio"} > -1
};

call {
	if (_typename == "array") exitWith {
        //{_x call _hasradio} count _this > 0
        _this findIf {_x call _hasradio} > -1
    };
	if (_typename == "group") exitWith {
		if (isNull (leader _this)) then {false} else {(units _this) call FUNC(hasRadio)};
    };
	_this call _hasradio
};
