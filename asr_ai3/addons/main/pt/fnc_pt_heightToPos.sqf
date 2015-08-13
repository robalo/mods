//accepts posATL
_height = _this select 0;

format ["heightToPos:%1", _height] call BIS_fnc_log;
if(_height < 0.7) exitWith {
    "DOWN";
};

if(_height < 1.4) exitWith {
    "MIDDLE";
};

"AUTO";