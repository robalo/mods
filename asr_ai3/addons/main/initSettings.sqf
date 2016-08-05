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
    QGVAR(seekcover), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Moving to cover", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    true, // data for this setting
    true, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(usebuildings), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Entering buildings (chance)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 1, 0.9, 1], // data for this setting: [min, max, default, number of shown trailing decimals]
    true, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(getinweapons), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Mount near static and vehicle weapons (chance)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 1, 0.5, 1], // data for this setting: [min, max, default, number of shown trailing decimals]
    true, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(rearm), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Basic rearming range (meters)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 200, 40, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(rearm_mags), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Rearm if primary has less than (magazines)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 7, 3, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
        GVAR(needmax) set [0, GVAR(rearm_mags)];
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(rearm_fak), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Rearm if first aid less than (kits)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 5, 1, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
        GVAR(needmax) set [1, GVAR(rearm_fak)];
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(radiorange), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Radio report max range (meters, 0 to disable)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 2000, 600, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    true, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(rrdelaymin), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Radio report min delay (seconds)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 60, 5, 1], // data for this setting: [min, max, default, number of shown trailing decimals]
    true, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(rrdelayplus), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Radio report max random extra delay (seconds)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 60, 10, 1], // data for this setting: [min, max, default, number of shown trailing decimals]
    true, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(packNVG), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Night vision device (un)equip (head-mounted)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    true, // data for this setting
    true, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(joinlast), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Merge groups reduced to (team members)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 3, 2, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(removegimps), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Ungroup units unable to walk after (seconds)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 3600, 300, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(pgaistamina), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Stamina system on AI in player's group", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    false, // data for this setting
    true, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
        {{_x enableStamina (isPlayer _x || GVAR(pgaistamina))} forEach (units _x)} forEach ([] call BIS_fnc_listPlayers);
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(onteamswitchleader), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "On teamswitch become group leader", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    true, // data for this setting
    true, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(loudrange), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Gunshot hearing range (meters)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 5000, 0, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(debug), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Debugging mode", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    false, // data for this setting
    true, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;

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
    "Always counterattack for danger within this distance", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 300, 50, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(MIN_HEIGHT_OBJ_TO_CONSIDER), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Minimum height of objects considered for cover", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 2, 0.2, 1], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(CHANCE_USE_BUILDING_POS), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Chance to use a building pos (higher = more populated buildings)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
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
    "time until counterattack while outside", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 180, 15, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(AT_INSIDE), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "time until counterattack while inside", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Pooters ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 180, 15, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
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