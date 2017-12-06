[
    QGVAR(rearm),
    "SLIDER",
    "Basic rearming range (meters)",
    "ASR AI3",
    [0, 200, 40, 0],
    1
] call CBA_Settings_fnc_init;
[
    QGVAR(rearm_mags),
    "SLIDER",
    "Rearm if primary has less than (magazines)",
    "ASR AI3",
    [0, 7, 3, 0],
    0,
    {
        GVAR(needmax) set [0, GVAR(rearm_mags)];
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(rearm_fak),
    "SLIDER",
    "Rearm if first aid less than (kits)",
    "ASR AI3",
    [0, 5, 1, 0],
    0,
    {
        GVAR(needmax) set [1, GVAR(rearm_fak)];
    }
] call CBA_Settings_fnc_init;

[ QGVAR(debug_rearm), "CHECKBOX", "Debug rearming", "ASR AI3", false, 1 ] call CBA_Settings_fnc_init;
