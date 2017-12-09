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
