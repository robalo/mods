[
    QGVAR(seekcover),
    "CHECKBOX",
    "Move to cover",
    "ASR AI3",
    true,
    1
] call CBA_Settings_fnc_init;
[
    QGVAR(usebuildings),
    "SLIDER",
    "Search buildings (chance)",
    "ASR AI3",
    [0, 1, 0.8, 1],
    1
] call CBA_Settings_fnc_init;
[
    QGVAR(getinweapons),
    "SLIDER",
    "Mount near static and vehicle weapons (chance)",
    "ASR AI3",
    [0, 1, 0.5, 1],
    1
] call CBA_Settings_fnc_init;
[
    QGVAR(radiorange),
    "SLIDER",
    "Radio report max range (meters, 0 to disable)",
    "ASR AI3",
    [0, 2000, 700, 0],
    1
] call CBA_Settings_fnc_init;
[
    QGVAR(rrdelaymin),
    "SLIDER",
    "Radio report min delay (seconds)",
    "ASR AI3",
    [0, 60, 5, 1],
    1
] call CBA_Settings_fnc_init;
[
    QGVAR(rrdelayplus),
    "SLIDER",
    "Radio report max random extra delay (seconds)",
    "ASR AI3",
    [0, 600, 10, 1],
    1
] call CBA_Settings_fnc_init;

[ QGVAR(debug_findcover), "CHECKBOX", "Debug find cover", "ASR AI3", false, 1 ] call CBA_Settings_fnc_init;
[ QGVAR(debug_reveal), "CHECKBOX", "Debug knowledge transfer", "ASR AI3", false, 1 ] call CBA_Settings_fnc_init;
