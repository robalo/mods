[
    QGVAR(setskills), // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "AI skills reconfigured (class based)", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ASR AI3", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    true, // data for this setting
    1, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
[
    QGVAR(teamsuperai),
    "CHECKBOX",
    "Better skills for player group AI",
    "ASR AI3",
    true,
    1,
    {
        {{_x call FUNC(setUnitSkill)} forEach (units _x)} forEach ([] call BIS_fnc_listPlayers);
    }
] call CBA_Settings_fnc_init;
/*
[
    QGVAR(sets_str),
    "EDITBOX",
    "AI skill sets",
    "ASR AI3",
    "[ // for each level: skilltype, [<min value>, <random value added to min>]
	[	'general',[1.00,0.0],	'aiming',[1.00,0.0],	'spotting',[1.00,0.0]	],	// 0:  super-AI (only used for testing)
	[	'general',[0.90,0.1],	'aiming',[0.50,0.2],	'spotting',[0.50,0.1]	],	// 1:  sf 1
	[	'general',[0.85,0.1],	'aiming',[0.40,0.2],	'spotting',[0.40,0.1]	],	// 2:  sf 2 (recon units, divers and spotters)
	[	'general',[0.80,0.1],	'aiming',[0.25,0.1],	'spotting',[0.30,0.1]	],	// 3:  regular 1 (regular army leaders, marksmen)
	[	'general',[0.75,0.1],	'aiming',[0.20,0.1],	'spotting',[0.25,0.1]	],	// 4:  regular 2 (regulars)
	[	'general',[0.70,0.1],	'aiming',[0.15,0.1],	'spotting',[0.20,0.1]	],	// 5:  militia or trained insurgents, former regulars (insurgent leaders, marksmen)
	[	'general',[0.65,0.1],	'aiming',[0.10,0.1],	'spotting',[0.15,0.1]	],	// 6:  some military training (insurgents)
	[	'general',[0.60,0.1],	'aiming',[0.05,0.1],	'spotting',[0.10,0.1]	],	// 7:  no military training
	[	'general',[0.80,0.1],	'aiming',[0.20,0.1],	'spotting',[0.35,0.1]	],	// 8:  pilot 1 (regular)
	[	'general',[0.75,0.1],	'aiming',[0.15,0.1],	'spotting',[0.30,0.1]	],	// 9:  pilot 2 (insurgent)
	[	'general',[0.90,0.1],	'aiming',[0.70,0.3],	'spotting',[0.90,0.1]	]	// 10: sniper 
]",
    1,
    {
        GVAR(sets) = call compile GVAR(sets_str);
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(levels_units_str),
    "EDITBOX",
    "AI skill level overrides",
    "ASR AI3",
    "[
	[],	// 0:  super-AI (only used for testing)
	[],	// 1:  sf 1
	[],	// 2:  sf 2 (recon units, divers and spotters)
	[],	// 3:  regular 1 (regular army leaders, marksmen)
	[],	// 4:  regular 2 (regulars)
	[],	// 5:  militia or trained insurgents, former regulars (insurgent leaders, marksmen)
	[],	// 6:  civilians with some military training (insurgents)
	[],	// 7:  civilians without military training
	[],	// 8:  pilot 1 (regular)
	[],	// 9:  pilot 2 (insurgent)
	[]	// 10: sniper 
]",
    1,
    {
        GVAR(levels_units) = call compile GVAR(levels_units_str);
    }
] call CBA_Settings_fnc_init;
[
    QGVAR(factions_str),
    "EDITBOX",
    "AI skill faction coefficients",
    "ASR AI3",
    "[ ['LOP_AA',0.9], ['LOP_IA',0.9] ]",
    1,
    {
        GVAR(factions) = call compile GVAR(factions_str);
    }
] call CBA_Settings_fnc_init;
*/
[
    QGVAR(packNVG),
    "CHECKBOX",
    "Night vision device (un)equip (head-mounted)",
    "ASR AI3",
    true
] call CBA_Settings_fnc_init;

[ QGVAR(debug_setskill), "CHECKBOX", "Debug skills", "ASR AI3", false, 1 ] call CBA_Settings_fnc_init;
[ QGVAR(debug_setcamo), "CHECKBOX", "Debug camouflage", "ASR AI3", false, 1 ] call CBA_Settings_fnc_init;
