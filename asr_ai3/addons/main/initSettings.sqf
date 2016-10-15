[
    QGVAR(setskills), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "AI skills reconfigured (class based)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    true, // data for this setting
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(seekcover),
    "CHECKBOX",
    "Moving to cover",
    "ASR AI3",
    true,
    true,
    {
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(usebuildings),
    "SLIDER",
    "Entering buildings (chance)",
    "ASR AI3",
    [0, 1, 0.8, 1],
    true,
    {
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(getinweapons),
    "SLIDER",
    "Mount near static and vehicle weapons (chance)",
    "ASR AI3",
    [0, 1, 0.5, 1],
    true,
    {
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(rearm),
    "SLIDER",
    "Basic rearming range (meters)",
    "ASR AI3",
    [0, 200, 40, 0],
    false,
    {
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(rearm_mags),
    "SLIDER",
    "Rearm if primary has less than (magazines)",
    "ASR AI3",
    [0, 7, 3, 0],
    false,
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
    false,
    {
        GVAR(needmax) set [1, GVAR(rearm_fak)];
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(radiorange),
    "SLIDER",
    "Radio report max range (meters, 0 to disable)",
    "ASR AI3",
    [0, 2000, 600, 0],
    true,
    {
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(rrdelaymin),
    "SLIDER",
    "Radio report min delay (seconds)",
    "ASR AI3",
    [0, 60, 5, 1],
    true,
    {
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(rrdelayplus),
    "SLIDER",
    "Radio report max random extra delay (seconds)",
    "ASR AI3",
    [0, 60, 10, 1],
    true,
    {
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(packNVG),
    "CHECKBOX",
    "Night vision device (un)equip (head-mounted)",
    "ASR AI3",
    true, // data for this setting
    true,
    {
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(joinlast),
    "SLIDER",
    "Merge groups reduced to (team members)",
    "ASR AI3",
    [0, 3, 2, 0],
    false,
    {
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(removegimps),
    "SLIDER",
    "Ungroup units unable to walk after (seconds)",
    "ASR AI3",
    [0, 3600, 300, 0],
    false,
    {
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(fallDown),
    "CHECKBOX",
    "Soldiers fall when hit",
    "ASR AI3",
    true, // data for this setting
    true,
    {
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(pgaistamina),
    "CHECKBOX",
    "Stamina system on AI in player's group",
    "ASR AI3",
    false, // data for this setting
    true,
    {
        {{_x enableStamina (isPlayer _x || GVAR(pgaistamina))} forEach (units _x)} forEach ([] call BIS_fnc_listPlayers);
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(onteamswitchleader),
    "CHECKBOX",
    "On teamswitch become group leader",
    "ASR AI3",
    true, // data for this setting
    true,
    {
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(loudrange),
    "SLIDER",
    "Gunshot hearing range (meters)",
    "ASR AI3",
    [0, 5000, 1200, 0],
    false,
    {
    }
] call CBA_Settings_fnc_init;

[ QGVAR(debug_setskill), "CHECKBOX", "Debug skills", "ASR AI3", false, true, {} ] call CBA_Settings_fnc_init;
[ QGVAR(debug_findcover), "CHECKBOX", "Debug find cover", "ASR AI3", false, true, {} ] call CBA_Settings_fnc_init;
[ QGVAR(debug_rearm), "CHECKBOX", "Debug rearming", "ASR AI3", false, true, {} ] call CBA_Settings_fnc_init;
[ QGVAR(debug_reveal), "CHECKBOX", "Debug knowledge transfer", "ASR AI3", false, true, {} ] call CBA_Settings_fnc_init;
[ QGVAR(debug_firedeh), "CHECKBOX", "Debug gunshot hearing", "ASR AI3", false, true, {} ] call CBA_Settings_fnc_init;
