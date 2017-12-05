//#define DEBUG_MODE_FULL
#include "script_component.hpp"
//if (_this isKindOf "Man" || _this isKindOf "Bird") exitWith {false};
//if (_this isKindOf "BulletCore" || _this isKindOf "Grenade") exitWith {false};
//if (_this isKindOf "WeaponHolder" || _this isKindOf "WeaponHolderSimulated") exitWith {false};
//if (_this isKindOf "Lamps_base_F") exitWith {false};
//if (_this isKindOf "Sound") exitWith {false};
//if (!isTouchingGround _this) exitWith {false};
if (isBurning _this) exitWith {false};
private _tfilter = false;
private _type = typeOf _this;
if (_type == "") then {
	if (damage _this == 1) then {_tfilter = true};
} else {
	scopeName "haveType";
	//if (_type in ["#crater","#crateronvehicle","#soundonvehicle","#particlesource","#lightpoint","#slop","#mark"]) then {_tfilter = true; breakOut "haveType"};
	if (_type find "Wire" > -1) then {_tfilter = true; breakOut "haveType"};
	if (getText (configfile>>"CfgVehicles">>_type>>"vehicleClass") in ["","Ammo","Flag","Helpers","Lamps","Signs","Small_items","Submerged","Structures_Fences"]) then {_tfilter = true};
};
if (_tfilter) exitWith {false};
if ((boundingCenter _this) select 2 < 0.45) exitWith {false};
if (_this getVariable ["ace_cookoff_isCookingOff", false]) exitWith {false};
true
