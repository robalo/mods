#include "script_component.hpp"

params["_unit"];
private _grp = group _unit;
//pick another dude if possible
{if (_x != _unit) exitWith {_unit = _x}} forEach units _grp;
if (_unit getVariable [QGVAR(housing),false]) exitWith {};
private _bpos = [];
{
    {
        if (random 1 > 0.2) then {_bpos pushBack [_x select 2, _x]}; //pick some; get height and pos
    } forEach ([_x] call BIS_fnc_buildingPositions);
} forEach (_dangerCausedBy nearObjects ["HouseBase", 50]);
if !(_bpos isEqualTo []) then {
    _bpos sort false; //prefer higher positions
    [_unit, (_time + 240), _bpos] spawn { // 4 minutes
        params ["_unit", "_dangerUntil", "_bpos"];
        private "_toPos";
        _unit setVariable [QGVAR(housing), true];
        TRACE_1("House search duty",_unit);
        while {count _bpos > 0 && {time < _dangerUntil} && {_unit call FNCMAIN(isValidUnitC)}} do {
            if ((group _unit) call {_this call FNCMAIN(hasPlayer) && {_this call FNCMAIN(grpHasWP)}}) exitWith {}; //crossing paths issue
            _toPos = ((_bpos deleteAt 0) select 1);
             //wait until stopped shooting and not suppressed and pos not taken by a friendly
            waitUntil {isNil {_unit getVariable "asr_shooting"} && {getSuppression _unit < 0.4} && {(_toPos nearEntities ["CAManBase", 1]) select {(side _x) getFriend (side _unit) >= 0.6} isEqualTo []}};
            doStop _unit;
            _unit doMove _toPos;
            waitUntil {unitReady _unit}; //reached pos
            if (_unit call FNCMAIN(isUnderRoof)) then {_unit setUnitPosWeak "Up"} else {_unit setUnitPosWeak "Auto"};
            doStop _unit;
            sleep (5 + random 20);
        };
        if (alive _unit) then { // regroup
            _unit setUnitPosWeak "Auto";
            [_unit] joinSilent (group _unit);
            _unit setVariable [QGVAR(housing), false];
        };
    };
};
