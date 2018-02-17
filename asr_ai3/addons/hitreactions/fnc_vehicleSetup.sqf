if (GVAR(STAY_IN_VEH)) then {
    if (!isNil {_this getHitPointDamage "HitTurret"} && !isNil {_this getHitPointDamage "HitGun"}) then {
        _this allowCrewInImmobile true;
    };
};
