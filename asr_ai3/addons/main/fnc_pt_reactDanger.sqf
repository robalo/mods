
#include "script_component.hpp"
private ["_unit", "_dangerCause", "_dangerCausedBy"];
_unit = _this select 0;
_dangerCausedBy = _this select 1;
_dangerCause = _this select 2;

[_unit, _dangerCausedBy, _dangerCause] spawn {

private ["_unit", "_dangerCause", "_dangerCausedBy", "_grp", "_exit", "_dir", "_oldDir", "_dirDist"];
_unit = _this select 0;
_dangerCausedBy = _this select 1;
_dangerCause = _this select 2;
_grp = group _unit;
        //format ["react danger, reacting on %1, against %2, because %3", _unit, _dangerCausedBy, _dangerCause] call BIS_fnc_log;
        //format ["danger, was ready %1, time %2 vs time %3", unitReady _unit, _time, _unit getVariable [QGVAR(DT),0]] call BIS_fnc_log;
if (unitReady _unit && {!isPlayer _unit} && {time > (_unit getVariable [QGVAR(DT),0])}) then {

    //sleep half a second to let the AI find its attacker before making decisions
    sleep 0.5;
    
    //This is wacky
    //so every 5 seconds or so react danger will be called with either enemy detected or enemy near.
    //in order to prevent overcalling we will save the direction that the enemy last came from and stop processing if it is too close to the 
    //dir this time
    _exit = false;
    _oldDir = _unit getVariable  [QGVAR(DANGER_DIR), 361];
    _dir = [_unit, _dangerCausedBy] call BIS_fnc_dirTo;
    if(_oldDir != 361 && (_dangerCause == 0 || _dangerCause == 3)) then {
        _dirDist = (abs (_dir - _oldDir)) % 360;
        if(_dirDist > 180) then {
            _dirDist = 360 - _dirDist;
        };
        
        if(_dirDist < GVAR(ALLOWABLE_ANGLE_FOR_IGNORE)) then {
            _exit = true;
            //format ["react danger, reacting on %1, exiting due to angle ignore", _unit] call BIS_fnc_log;
        };
        
    };
    
    _unit setVariable [QGVAR(DANGER_DIR),_dir,false];
    
    if(_exit) exitWith {
    };
    
    if(_unit call FUNC(isUnderRoof)) then {
        //format ["inStruct"] call BIS_fnc_log;
        [_unit, _dangerCausedBy, _dangerCause] call FUNC(pt_reactDanger_inStruct);
    } else {
        //format ["outStruct"] call BIS_fnc_log;
        [_unit, _dangerCausedBy, _dangerCause] call FUNC(pt_reactDanger_outStruct);
    };

    if(_unit == leader _unit && _unit getVariable [QGVAR(ATK_PEND), 0] == 0 && (_unit knowsAbout _dangerCausedBy > GVAR(AI_KNOWLEDGE_THRESHOLD))) then {
        _unit  setVariable [QGVAR(ATK_PEND),1,false];
        _unit  setVariable [QGVAR(ATTACKER_POS),(getPosATL _dangerCausedBy),false];
        //format ["attackCalled"] call BIS_fnc_log;
        [_unit, getPosATL _dangerCausedBy] call FUNC(pt_reactDanger_attack);
    };
};
};
