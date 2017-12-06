[
    QGVAR(factionskip_str),
    "EDITBOX",
    "AI scripts excluded factions",
    "ASR AI3",
    "['CIV_F','CIV_IDAP_F','LOP_AFR_Civ','LOP_CHR_Civ','LOP_TAK_Civ']",
    1,
    {
        GVAR(skip_factions) = call compile GVAR(factionskip_str);
    }
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
