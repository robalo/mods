
_unit = _this select 0;

//check what time we're supposed to attack
//this variable may change between recursive calls
_attackTime = (_unit getVariable [QGVAR(AT), 0])

if(_attackTime == 0) exitWith {

}


//this variable may change between recursive calls
_dangerPos = _unit getVariable ["ATTACKER_POS"];

//not yet time, sleep until then
if(diag_ticktime < _attackTime) then {
    [_unit, _attackTime] spawn {
        _unit = _this select 0;
        _attackTime = _this select 1;
        sleep (_attackTime - diag_ticktime);
        //then restart
        [_unit] call FUNC(pt_reactDanger_attack);
    };
}else {
    //\ may cause AI to get spammed with attack wps
    //\ consider marking them & removing them if a new one is added

    //attack no longer pending, allow attack to be called again
    _unit  setVariable ["ATK_PEND",0,false];
    //is the location of the one who caused the danger (at danger time) within Attack Distance (AD)?
    _distance = _unit distance _dangerPos;
    _AD = _unit getVariable [QGVAR(AD), 0];
    if(_distance < _AD) then {
        //ATTACK!
		//add in a waypoint
        _wp = group _unit addWaypoint [_dangerPos, 0, currentWaypoint group _unit];
        _wp setWaypointType "SAD";
    };
};