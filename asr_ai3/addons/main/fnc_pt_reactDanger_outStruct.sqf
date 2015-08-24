
#include "script_component.hpp"
private ["_unit", "_dangerCause", "_dangerCausedBy", "_unitsThatNeedCover", "_deniedCover", "_coverObj", "_activeCover"];

_unit = _this select 0;
_dangerCausedBy = _this select 1;
_dangerCause = _this select 2;
if(_unit != leader _unit) exitWith {
    [];
};
_unitsThatNeedCover = [];

if(_unit knowsAbout _dangerCausedBy > GVAR(AI_KNOWLEDGE_THRESHOLD)) then {
    _unitsThatNeedCover = [_unit, _dangerCausedBy] call FUNC(pt_getUnitsThatNeedCover);
}else {
    _unitsThatNeedCover = [];
    {
        if(unitReady _x) then {
            _unitsThatNeedCover pushBack _x;
        }
    } forEach units _unit;
    
    
};

//format ["outStruct: units that need cover %1", _unitsThatNeedCover] call BIS_fnc_log;
//now find a piece of cover for each of these units

_deniedCover = [];
{
    //just use _x as a default so we know that it is blank
    _coverObj = _x getVariable [QGVAR(savedCover), _x];
    if(_coverObj != _x) then {
        _deniedCover pushBack _coverObj;
    };
} forEach units _unit;

//format ["outStruct: denied pieces of cover: %1", _deniedCover] call BIS_fnc_log;
_activeCover = [];
{
    scopeName "loop";
    if(count _activeCover >= count _unitsThatNeedCover) then {
        breakOut "loop";
    };
    if(boundingCenter _x select 1 > GVAR(MIN_HEIGHT_OBJ_TO_CONSIDER)) then {
        
        if(_x isKindOf "HouseBase") then {
        
            //format ["outStruct: found house: %1, %2", _x, [_x] call BIS_fnc_buildingPositions] call BIS_fnc_log;
            {   
                //format ["outStruct: running house: %1", _x] call BIS_fnc_log;
                if(random 1 > GVAR(CHANCE_USE_BUILDING_POS) && (count _activeCover < count _unitsThatNeedCover)) then {
                    _activeCover pushBack _x;
                };
            } forEach ([_x] call BIS_fnc_buildingPositions);
        }else {
            private ["_coverPos"];
            
            if(_unit knowsAbout _dangerCausedBy > GVAR(AI_KNOWLEDGE_THRESHOLD)) then {
                _coverPos = [_unit, _dangerCausedBy, _x] call FUNC(pt_getCoverPos);
            } else {
                _coverPos = [_unit, _x] call FUNC(pt_getCoverPosUnknownEnemy);
            };
            
            if(count _coverPos > 0) then {
                //format ["outStruct: adding cover behind: %1", _x] call BIS_fnc_log;

                _activeCover pushBack _coverPos;
            };
        };
    };
} forEach (nearestObjects [_unit, [], GVAR(MAX_DIST_TO_COVER)]);

_grp lockwp true;


{
    [_unitsThatNeedCover select _forEachIndex, _x] spawn FUNC(pt_moveToPoint);
} forEach _activeCover;

_unit  setVariable [QGVAR(DT),time + GVAR(DT_OUTSIDE),false];
_unit  setVariable [QGVAR(RT),time + GVAR(RT_OUTSIDE),false];
if(_unit == leader _unit) then {
    _unit  setVariable [QGVAR(AT),time + GVAR(AT_OUTSIDE),false];
    _unit  setVariable [QGVAR(AD),GVAR(AD_OUTSIDE),false];
};