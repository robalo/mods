//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private _unit = _this select 0;
private _dangerCausedBy = _this select 1;
private _dangerCause = _this select 2;
[_unit, _dangerCausedBy, _dangerCause] spawn {

private _unit = _this select 0;
private _dangerCausedBy = _this select 1;
private _dangerCause = _this select 2;
private _grp = group _unit;
//format ["react danger, reacting on %1, against %2, because %3, and knows %4, at distance %5", _unit, _dangerCausedBy, _dangerCause, (_unit targetKnowledge _dangerCausedBy select 5), _unit distance _dangerCausedBy ] call BIS_fnc_log;
//format ["danger, was asleep %1, was ready %2 and time time %3", _unit getVariable[QGVAR(PT_SLEEP), 0], unitReady _unit, time > (_unit getVariable [QGVAR(DT),0])] call BIS_fnc_log;
 
 
 
if (_unit getVariable[QGVAR(PT_SLEEP), 0] == 0 && {!isPlayer _unit} && {time > (_unit getVariable [QGVAR(DT),0])}) then {

    _unit setVariable [QGVAR(PT_SLEEP), 1, false];
    //sleep half a second to let the AI find its attacker before making decisions
    sleep 0.5;
    
    _unit setVariable [QGVAR(PT_SLEEP), 0, false];
    
    
    
    if(_unit == leader _unit) then {
        _unit  setVariable [QGVAR(ATTACKER_POS),(getPosATL _dangerCausedBy),false];
    };
    //CT is when we're allowed to consider cover again
    if(_dangerCause in GVAR(DC_NEED_COVER) && (time > (_unit getVariable [QGVAR(CT),0])) && vehicle _unit == _unit) then {
        //format ["react danger, %1 reconsidering cover", _unit] call BIS_fnc_log;

        if(_unit call FUNC(isUnderRoof)) then {
            //format ["inStruct"] call BIS_fnc_log;
            [_unit, _dangerCausedBy, _dangerCause] call FUNC(pt_reactDanger_inStruct);
        } else {
            //format ["outStruct"] call BIS_fnc_log;
            if(_dangerCausedBy distance _unit > GVAR(NO_COVER_FOR_DANGER_WITHIN)) then {
                [_unit, _dangerCausedBy, _dangerCause] call FUNC(pt_reactDanger_outStruct);
            };
        };
    
    };
    
    
    if(_dangerCause in GVAR(DC_ATTACK)) then {
        
        _unitIsLeader = _unit == leader _unit;
        _unitPendingAttack = _unit getVariable [QGVAR(ATK_PEND), 0] == 0;
        _unitKnowledge = ((_unit targetKnowledge _dangerCausedBy select 5) < 6 );
        _unitDistance = ((_unit distance _dangerCausedBy) < GVAR(AUTO_ATTACK_WITHIN));
        _unitKnowledgeOrDistance = (_unitKnowledge || _unitDistance);
        _unitLeaderAndPending = _unitIsLeader && _unitPendingAttack;
        
        if(_unitLeaderAndPending && _unitKnowledgeOrDistance) then {
            if(_unit getVariable [QGVAR(AT), 0] == 0) then {
                
                //format ["react danger, %1 attacking but didn't know much", _unit] call BIS_fnc_log;
                _unit setVariable [QGVAR(AT), GVAR(AT_OUTSIDE), false];
                if(_unit call FUNC(isUnderRoof)) then {
                    //format ["and is indoors", _unit] call BIS_fnc_log;
                    _unit setVariable [QGVAR(AD), GVAR(AD_INSIDE), false];
                }else {
                    //format ["and is outdoors", _unit] call BIS_fnc_log;
                    _unit setVariable [QGVAR(AD), GVAR(AD_OUTSIDE), false];
                };
            };
            
            //format ["react danger, %1 will be attacking", _unit] call BIS_fnc_log;
            //format ["unit knowledge: %1 at distance: %2", (_unit targetKnowledge _dangerCausedBy select 5), _unit distance _dangerCausedBy] call BIS_fnc_log;
            _unit  setVariable [QGVAR(ATK_PEND),1,false];
            //format ["attackCalled"] call BIS_fnc_log;
            [_unit, getPosATL _dangerCausedBy] call FUNC(pt_reactDanger_attack);
        };
    };

  
    
    if(_unit == leader _unit && vehicle _unit == _unit) then {
    
        // mount weapons
        if (random 1 < GVAR(getinweapons)) then {
            private ["_leader","_weapons","_wc","_weap","_mc","_ehid"];
            _leader = leader _grp;
            _weapons = [getposATL _leader, vehicles, 100, {!(_x isKindOf "Plane" || _x isKindOf "Tank") && {_x call FUNC(canMountAIGunner)}}] call FUNC(getNearest);
            TRACE_2("empty weapons",_grp,_weapons);
            _wc = count _weapons;
            if (_wc > 0) then {
                { //get some units to man the weapons
                    if (_wc > 0 && {_x != _leader} && {random 1 < 0.8}) then {
                        DEC(_wc);
                        _weap = _weapons select _wc;
                        _ehid = _weap getVariable [QGVAR(getInWeaponsEH), -1];
                        if (_ehid == -1) then {
                            _ehid = _weap addEventHandler ["GetIn", {_this spawn FUNC(getInWeaponsEH)}];
                            _weap setVariable [QGVAR(getInWeaponsEH), _ehid];
                        };
                        _mc = _weap getVariable [QGVAR(mountcount), 0];
                        if (_mc < ceil (2 + random 4)) then { // mount up to a few times
                            doStop _x;
                            
                            [_unit, "mounting"] call FUNC(pt_setStatusText);
                            _x assignAsGunner _weap;
                            [_x] orderGetIn true;
                            INC(_mc);
                            _weap setVariable [QGVAR(mountcount), _mc];
                        };
                    };
                } forEach units _grp;
            };
        };
    };
    
};



};
