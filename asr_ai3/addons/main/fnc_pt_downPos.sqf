
#include "script_component.hpp"
private ["_unit"];
_unit = _this select 0;
_force = _this select 1;
//format ["down pos was at  %1", unitPos _unit] call BIS_fnc_log;
if(unitPos _unit == "MIDDLE" && _force) then {
    _unit setUnitPos "DOWN";
};
if(unitPos _unit == "UP") then {
    _unit setUnitPos "MIDDLE";
};

if(unitPos _unit == "AUTO") then {
    _unit setUnitPos "MIDDLE";
};


//format ["down pos went to at  %1", unitPos _unit] call BIS_fnc_log;