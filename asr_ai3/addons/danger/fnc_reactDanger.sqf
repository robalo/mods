//#define DEBUG_MODE_FULL
#include "script_component.hpp"
_this spawn {

    params ["_unit", "_dangerCausedBy", "_dangerCause"];

    // skip in singleplayer when player is too far and not the source of danger (save computing resources)
    if (!isMultiPlayer && {_dangerCausedBy != player} && {_unit distance player > 1500}) exitWith {};

    private _grp = group _unit;
    private _time = time;
    TRACE_1("started danger moving", _unit);
    // don't send units away when less than 6 in group
    if (attackEnabled _grp && {count (units _grp) < 6}) then {_grp enableAttack false};


    //optional behavior: counterattack
    TRACE_5("considering counterattacking", _dangerCause, GVAR(DC_ATTACK), GVAR(COUNTER_ATTACK), _unit, _unit == leader _unit);
    if(_dangerCause in GVAR(DC_ATTACK) && GVAR(COUNTER_ATTACK) && _unit == leader _unit) then {
        _unit  setVariable [QGVAR(AT),time + GVAR(ATTACK_TIMER),false];
        if(_unit call FNCMAIN(isUnderRoof)) then {
            TRACE_1("counter attack, is inside",  _unit);
            _unit  setVariable [QGVAR(AD),GVAR(AD_INSIDE),false];
        }else {
            TRACE_1("counter attack, is outside",  _unit);
            _unit  setVariable [QGVAR(AD),GVAR(AD_OUTSIDE),false];

        };
        [_unit, _dangerCausedBy] call FUNC(counterAttack);
    };


    if (_unit getVariable[QGVAR(DANGER_SLEEP), 0] == 0 && _unit call FNCMAIN(isValidUnitC) && {unitReady _unit} && {_grp call FNCMAIN(hasNoPlayer)} && {_time > (_unit getVariable [QGVAR(reacting),-1000]) + 60}) then {

        _unit setVariable [QGVAR(reacting),_time,false]; //save last time we ran this for this unit, so we don't run more than twice per minute / unit


        _unit setVariable [QGVAR(DANGER_SLEEP), 1, false];
        TRACE_1("sleep starting", _unit);
        //sleep half a second to let the AI find its attacker before making decisions
        sleep 0.5;
        _unit setVariable [QGVAR(DANGER_SLEEP), 0, false];
        TRACE_1("sleep ending", _unit);



        if(_unit == leader _unit) then {
            _unit  setVariable [QGVAR(ATTACKER_POS),(getPosATL _dangerCausedBy),false];
        };

        private _leader = leader _grp;

        //optional behavior: broadcast to other units
        // report to near groups
        if (GVAR(radiorange > 0) && {_unit == _leader} && {_unit knowsAbout _dangerCausedBy > 1.4}) then {
            [_grp,_dangerCausedBy] spawn FUNC(broadcastInfo);
        };


        // if mounted skip the rest
        if !(isNull objectParent _unit) exitWith {};

        //optional behavior: get into  weapons
        if (random 1 < GVAR(getinweapons)) then {
            [_grp] call FUNC(mount_weapon);
        };

        if (waypointType [_grp,currentWaypoint _grp] == "HOLD") exitWith {TRACE_1("has HOLD wp",_grp)};

        //optional behavior:  search buildings
        if (!isNull _dangerCausedBy && {random 1 < GVAR(usebuildings)}) then {
            [_unit] call FUNC(search_building);
        };

        //optional behavior: check for cover near and divert
        if (GVAR(seekcover)) then {
            if(!GVAR(ADVANCED_COVER)) then {
                private _coverRange = if (_grp call FNCMAIN(grpHasWP)) then {20} else {100};
                [_unit,_dangerCausedBy,_coverRange] call FUNC(moveToCover);
            }else {
                if(!(_unit call FNCMAIN(isUnderRoof))) then {
                    if(_dangerCausedBy distance _unit > GVAR(NO_COVER_FOR_DANGER_WITHIN)) then {
                        [_unit, _dangerCausedBy, _dangerCause] call FUNC(pt_advancedCover);
                    };
                }

            };
        };

    };

};
