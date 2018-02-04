[
    QGVAR(factionskip_str),
    "EDITBOX",
    "AI scripts excluded factions",
    "ASR AI3",
    "['LOP_AFR_Civ','LOP_CHR_Civ','LOP_TAK_Civ']",
    1,
    {
        GVAR(skip_factions) = call compile GVAR(factionskip_str);

        private _civFactions = ("(getNumber (_x >> 'side')) == 3" configClasses (configFile >> "CfgFactionClasses")) apply {configName _x};
        GVAR(skip_factions) append _civFactions;
    }
] call CBA_Settings_fnc_init;
