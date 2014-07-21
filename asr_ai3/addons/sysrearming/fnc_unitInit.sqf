//#define DEBUG_MODE_FULL
#include "script_component.hpp"

private "_oksec";
_oksec = [];

// add current weapon to cover custom mission loadouts
if ((secondaryWeapon _this) call FNCMAIN(getWeaponType) == "LAUNCHER") then {
	_oksec set [count _oksec, secondaryWeapon _this];
};

// get unit's weapons from config
{	if (getNumber(configFile >>"CfgWeapons">>_x>>"type") == 4) exitWith {
		//don't care if we have doubles
		_oksec set [count _oksec, _x];
	};
} forEach getArray(configFile >>"CfgVehicles">>(typeOf _this)>>"weapons");

if !(_this call FNCMAIN(isMedic) || _this call FUNC(isCrew) || _this call FUNC(isPilot)) then {
	// add launchers that are ok to grab for anybody (except medics, crewmen and pilots)
	{_oksec set [count _oksec, _x]} forEach GVAR(launchers);
};

_this setVariable[QGVAR(allowedsec),_oksec];
