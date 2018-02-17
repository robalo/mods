//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_vehicle"];

if (GVAR(STAY_IN_VEH)) then {
    {
        if (!isNil "_x" && {_x > 0.9}) then {_vehicle allowCrewInImmobile false};
    } forEach [_vehicle getHitPointDamage "HitTurret", _vehicle getHitPointDamage "HitGun"];
};
