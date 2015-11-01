
#include "script_component.hpp"
_unit = _this select 0;
_force = _this select 1;
if(unitPos _unit == "MIDDLE" && _force) then {
    _unit setUnitPos "DOWN";
};
if(unitPos _unit == "UP") then {
    _unit setUnitPos "MIDDLE";
};

if(unitPos _unit == "AUTO") then {
    _unit setUnitPos "MIDDLE";
};