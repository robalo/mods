/*
[
    QGVAR(pgaistamina),
    "LIST",
    "Stamina system on AI in player's group",
    ["ASR AI3", "control"],
    [[0, 1, 2], ["Disable", "Enable", "No Change"], 0], // data for this setting
    1,
    {
        if (GVAR(pgaistamina) < 2) then {
            {{_x enableStamina (isPlayer _x || GVAR(pgaistamina) == 1)} forEach (units _x)} forEach ([] call BIS_fnc_listPlayers);
        };
    }
] call CBA_Settings_fnc_init;
*/
[
    QGVAR(onteamswitchleader),
    "CHECKBOX",
    "On teamswitch become group leader",
    ["ASR AI3", "control"],
    true, // data for this setting
    1
] call CBA_Settings_fnc_init;
