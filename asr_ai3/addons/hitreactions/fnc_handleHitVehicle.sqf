
_vehicle = _this select 0;

if(GVAR(STAY_IN_VEH) && !isNil {_vehicle getHitPointDamage "HitTurret"}
     && {_vehicle getHitPointDamage "HitTurret" > 0.9}) then {
    _vehicle allowCrewInImmobile false;
}
