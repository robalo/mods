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

[ QGVAR(COUNTER_ATTACK), "CHECKBOX",  "Counterattack after being alerted",  "ASR AI3",  false, 1 ] call CBA_Settings_fnc_init;
[ QGVAR(ADVANCED_COVER), "CHECKBOX",  "Use advanced cover behavior",  "ASR AI3",  false, 1 ] call CBA_Settings_fnc_init;
[ QGVAR(FLEE_CIVVIE), "CHECKBOX",  "Civillians will Flee",  "ASR AI3",  false, 1 ] call CBA_Settings_fnc_init;
[
    QGVAR(MAX_DIST_TO_COVER),
    "SLIDER",
    "Max distance to consider objects as cover",
    "ASR AI3", 
    [0, 300, 50, 0], 
    false,
    {
    } 
] call CBA_Settings_fnc_init;
[
    QGVAR(AUTO_ATTACK_WITHIN),
    "SLIDER",
    "Always counterattack for danger within(m)",
    "ASR AI3", 
    [0, 300, 15, 0], 
    false,
    {
    } 
] call CBA_Settings_fnc_init;
[
    QGVAR(NO_COVER_FOR_DANGER_WITHIN),
    "SLIDER",
    "AI will not take cover for threats within",
    "ASR AI3", 
    [0, 300, 75, 0],
    false,
    {
    } 
] call CBA_Settings_fnc_init;
[
    QGVAR(ATTACK_TIMER),
    "SLIDER",
    "seconds until counterattack",
    "ASR AI3", 
    [65, 300, 120, 0],
    false,
    {
    } 
] call CBA_Settings_fnc_init;
[
    QGVAR(AD_OUTSIDE),
    "SLIDER",
    "max distance AI outside will attempt to attack at",
    "ASR AI3", 
    [0, 500, 250, 0], 
    false,
    {
    } 
] call CBA_Settings_fnc_init;
[
    QGVAR(AD_INSIDE),
    "SLIDER",
    "max distance AI inside will attempt to attack at",
    "ASR AI3", 
    [0, 500, 50, 0], 
    false,
    {
    } 
] call CBA_Settings_fnc_init;

