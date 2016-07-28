//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private _typename = toLower(typename _this);

private _hasradio = {
	if (isNull _this) exitWith {false};
	private _has = false;
	{	if (getText(configFile >> "CfgWeapons" >> _x >> "simulation") == "ItemRadio") exitWith {_has = true};
	} forEach (assignedItems _this);
	_has
};

switch (_typename) do {
	case ("array") : {
		{
			if (_x call _hasradio) exitWith {true};
			false;
		} foreach _this;
	};
	case ("group") : {
		if (isnull (leader _this)) then {
			false;
		} else {
			(units _this) call FUNC(hasRadio);
		};
	};
	default {_this call _hasradio};
};
