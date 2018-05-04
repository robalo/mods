//#define DEBUG_MODE_FULL
#include "script_component.hpp"

if (GVAR(STAY_IN_VEH)) then {
    if (!isNil {_this getHitPointDamage "HitTurret"} && !isNil {_this getHitPointDamage "HitGun"}) then {
        _this allowCrewInImmobile true;
    };
};
