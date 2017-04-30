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
    "Move to cover",
    "ASR AI3",
    true,
    true,
    {
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(usebuildings),
    "SLIDER",
    "Search buildings (chance)",
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
    [0, 2000, 700, 0],
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
    [0, 600, 10, 1],
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

[ QGVAR(debug_setskill), "CHECKBOX", "Debug skills", "ASR AI3", false, true, {} ] call CBA_Settings_fnc_init;
[ QGVAR(debug_setcamo), "CHECKBOX", "Debug camouflage", "ASR AI3", false, true, {} ] call CBA_Settings_fnc_init;
[ QGVAR(debug_findcover), "CHECKBOX", "Debug find cover", "ASR AI3", false, true, {} ] call CBA_Settings_fnc_init;
[ QGVAR(debug_rearm), "CHECKBOX", "Debug rearming", "ASR AI3", false, true, {} ] call CBA_Settings_fnc_init;
[ QGVAR(debug_reveal), "CHECKBOX", "Debug knowledge transfer", "ASR AI3", false, true, {} ] call CBA_Settings_fnc_init;

[
    QGVAR(MAX_DIST_TO_COVER), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Max distance to consider objects as cover", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 300, 50, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(AUTO_ATTACK_WITHIN), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Always counterattack for danger within(m)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 300, 15, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(MIN_HEIGHT_OBJ_TO_CONSIDER), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Minimum height of objects for cover", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 2, 0.2, 1], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(CHANCE_USE_BUILDING_POS), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Chance to use a building pos", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 1, 0.2, 1], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(DT_OUTSIDE), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Seconds until outside AI will react to danger again", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 20, 3, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(DT_INSIDE), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Seconds until inside AI will react to danger again", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 20, 3, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(RESELECT_COVER_TIME), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "How often the AI is allowed to re-evaluate its cover outside", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 180, 30, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(NO_COVER_FOR_DANGER_WITHIN), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "AI will not take cover for threats within", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 300, 100, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(AT_OUTSIDE), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "seconds until counterattack while outside", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 180, 60, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(AT_INSIDE), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "seconds until counterattack while inside", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 180, 60, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(AD_OUTSIDE), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "max distance AI outside will attempt to attack at", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 500, 250, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(AD_INSIDE), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "max distance AI inside will attempt to attack at", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 500, 50, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;

[ QGVAR(STAY_IN_VEH), "CHECKBOX", "Stay in armed immobile vehicles", "Pooters ASR AI3", true, true, {} ] call CBA_Settings_fnc_init;