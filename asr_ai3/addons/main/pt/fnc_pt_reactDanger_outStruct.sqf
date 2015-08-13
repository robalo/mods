
_unit = _this select 0;
_dangerCausedBy = _this select 1;
_dangerCause = _this select 2;
_getUnitsThatNeedCover = compile preprocessFile "fnc_pt_getUnitsThatNeedCover.sqf";
_pt_getCoverPos = compile preprocessFile "fnc_pt_getCoverPos.sqf";
_pt_getCoverPosUnknownEnemy = compile preprocessFile "fnc_pt_getCoverPosUnknownEnemy.sqf";
_isUnc = compile preprocessFile "fnc_isUnc.sqf";
_moveToPoint = compile preprocessFile "fnc_pt_moveToPoint.sqf";
if(_unit != leader _unit) exitWith {
    [];
};
_unitsThatNeedCover = [];
//\change to config
if(_unit knowsAbout _dangerCausedBy > 2) then {
    _unitsThatNeedCover = [_unit, _dangerCausedBy] call _getUnitsThatNeedCover;
}else {
    _unitsThatNeedCover = [];
    {
        if(unitReady _x) then {
            _unitsThatNeedCover pushBack _x;
        }
    } forEach units _unit;
    
    
};

format ["outStruct: units that need cover %1", _unitsThatNeedCover] call BIS_fnc_log;
//now find a piece of cover for each of these units

_deniedCover = [];
{
    //just use _x as a default so we know that it is blank
    _coverObj = _x getVariable ["savedCover", _x];
    if(_coverObj != _x) then {
        _deniedCover pushBack _coverObj;
    };
} forEach units _unit;

format ["outStruct: denied pieces of cover: %1", _deniedCover] call BIS_fnc_log;
_activeCover = [];
_maxdisttocover = 100;
{
    scopeName "loop";
    if(count _activeCover >= count _unitsThatNeedCover) then {
        breakOut "loop";
    };
    if(boundingCenter _x select 1 > 0.20) then {
        
        if(_x isKindOf "HouseBase") then {
        
            format ["outStruct: found house: %1, %2", _x, [_x] call BIS_fnc_buildingPositions] call BIS_fnc_log;
            {   
                format ["outStruct: running house: %1", _x] call BIS_fnc_log; 
                if(random 1 > 0.2 && (count _activeCover < count _unitsThatNeedCover)) then {
                    _activeCover pushBack _x;
                };
            } forEach ([_x] call BIS_fnc_buildingPositions);
        }else {
        
            _coverPos =[];
            if(_unit knowsAbout _dangerCausedBy > 2) then {
                _coverPos = [_unit, _dangerCausedBy, _x] call _pt_getCoverPos;
            } else {
                _coverPos = [_unit, _x] call _pt_getCoverPosUnknownEnemy;
            };
            
            format ["outStruct: finished processing: %1, %2", _x, _coverPos] call BIS_fnc_log;
            if(count _coverPos > 0) then {
                _activeCover pushBack _coverPos;
            };
        };
    };
} forEach (nearestObjects [_unit, [], _maxdisttocover]);

_grp lockwp true;


{
    [_unitsThatNeedCover select _forEachIndex, _x] spawn _moveToPoint;
} forEach _activeCover;

_unit  setVariable ["DT",diag_ticktime + 5,false];
if(_unit == leader _unit) then {
    _unit  setVariable ["AT",50,false];
    _unit  setVariable ["AD",30,false];
};