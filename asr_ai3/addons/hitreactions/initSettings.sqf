[
    QGVAR(fallDown),
    "CHECKBOX",
    "Soldiers fall when hit",
    ["ASR AI3", "hitreactions"],
    true, // data for this setting
    1
] call CBA_Settings_fnc_init;

[
    QGVAR(STAY_IN_VEH),
    "CHECKBOX",
    "Stay in armed immobile vehicles",
    ["ASR AI3", "hitreactions"],
    true,
    1
] call CBA_Settings_fnc_init;
