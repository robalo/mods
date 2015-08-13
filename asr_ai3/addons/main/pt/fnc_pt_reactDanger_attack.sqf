
_unit = _this select 0;
_dangerPos = _this select 1;

//check what time we're supposed to attack
_timesleep = (_unit getVariable ["AT", 0]) + diag_ticktime;
//not yet time, sleep until then
if(diag_ticktime < _timesleep) then {
    [_unit, _dangerPos, _timesleep] spawn {
        _unit = _this select 0;
        _dangerPos = _this select 1;
        _timesleep = _this select 2;
        _attack = compile preprocessFile "fnc_pt_reactDanger_attack.sqf";
        sleep _timesleep - diag_ticktime;
        //then restart
        [_unit, _dangerPos] call _attack;
    };
}else {
    //attack no longer pending, allow attack to be called again
    _unit  setVariable ["ATK_PEND",0,false];
    //is the one who caused the danger within Attack Distance (AD)?
    _distance = _unit distance _dangerPos;
    _AD = _unit getVariable ["AD", 0];
    if(_distance < _AD) then {
        //ATTACK!
		//add in a waypoint
        _wp = group _unit addWaypoint [_dangerPos, 0, currentWaypoint group _unit];
        _wp setWaypointType "SAD";
    };
};