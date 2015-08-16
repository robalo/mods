

_unit = _this select 0;
_dangerCausedBy = _this select 1;
//for each unit in this unit's group, see if their saved piece of cover blocks vision from the enemy
_unitThatNeedCover = [];


{
    if(unitReady _x) then {
        //just use _x as a default so we know that it is blank
        _coverObj = _x getVariable [QGVAR(savedCover), _x];
        if(_coverObj == _x) then {
            _unitThatNeedCover pushBack _unit;
        }else {
            if(![_x, _dangerCausedBy, _coverObj] call FUNC(pt_coverValid)) then {
                _unitThatNeedCover pushBack _unit;
            };
        };
    }
} forEach units _unit;

_unitThatNeedCover;