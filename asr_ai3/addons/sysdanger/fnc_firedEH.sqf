//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if (isNull (_this select 6)) exitWith {}; //projectile
// help the AI hear bullets fired; for anything larger, help them hear the explosions
if ((_this select 4) isKindOf "BulletCore") then {
	if (GVAR(gunshothearing) > 0) then {
		if (isNil QGVAR(fired)) then {_this spawn FUNC(fired)};
	};
} else {
	_this spawn FUNC(firedExplosive);
};
