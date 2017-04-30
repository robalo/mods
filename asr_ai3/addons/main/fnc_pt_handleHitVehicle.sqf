
_vehicle = _this select 0;

if(asr_ai3_main_STAY_IN_VEH && !isNil {_vehicle getHitPointDamage "HitTurret"}
     && {_vehicle getHitPointDamage "HitTurret" > 0.9}) then {
    _vehicle allowCrewInImmobile false;
}
