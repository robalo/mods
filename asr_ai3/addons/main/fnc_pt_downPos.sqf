
//format ["down pos was at  %1", unitPos _unit] call BIS_fnc_log;
_unit = _this select 0;
if(unitPos _unit == "MIDDLE") then {
    _unit setUnitPos "DOWN";
};
if(unitPos _unit == "UP") then {
    _unit setUnitPos "MIDDLE";
};

if(unitPos _unit == "AUTO") then {
    _unit setUnitPos "MIDDLE";
};

