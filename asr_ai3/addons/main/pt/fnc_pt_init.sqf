//how well the AI must know about a danger source in order for it to take cover relative to it
//instead of taking cover in generalC w
GVAR(AI_KNOWLEDGE_THRESHOLD) = getNumber( configfile>>"cfgPt">>CfgPt>>"AI_KNOWLEDGE_THRESHOLD");
//how far we're allowed to get to cover
GVAR(MAX_DIST_TO_COVER) = getNumber( configfile>>"cfgPt">>CfgPt>>"MAX_DIST_TO_COVER");
//an object must be at least this tall to be considered for cover
GVAR(MIN_HEIGHT_OBJ_TO_CONSIDER) = getNumber( configfile>>"cfgPt">>CfgPt>>"MIN_HEIGHT_OBJ_TO_CONSIDER");
GVAR(CHANCE_USE_BUILDING_POS) = getNumber( configfile>>"cfgPt">>CfgPt>>"CHANCE_USE_BUILDING_POS");


//time until we're allowed to react to danger again
GVAR(DT_OUTSIDE) = getNumber( configfile>>"cfgPt">>CfgPt>>"DT_OUTSIDE");
GVAR(DT_IN_STRUCT_AM_VIS_CHANGE_POS) = getNumber( configfile>>"cfgPt">>CfgPt>>"DT_IN_STRUCT_AM_VIS_CHANGE_POS");
GVAR(DT_IN_STRUCT_HIT) = getNumber( configfile>>"cfgPt">>CfgPt>>"DT_IN_STRUCT_HIT");
GVAR(DT_IN_STRUCT_NOT_HIT) = getNumber( configfile>>"cfgPt">>CfgPt>>"DT_IN_STRUCT_NOT_HIT");
GVAR(DT_IN_STRUCT_UNKNOWN_ENEMY) = getNumber( configfile>>"cfgPt">>CfgPt>>"DT_IN_STRUCT_UNKNOWN_ENEMY");
GVAR(DT_IN_STRUCT_AM_VIS_MOVE) = getNumber( configfile>>"cfgPt">>CfgPt>>"DT_IN_STRUCT_AM_VIS_MOVE");


//time until counter attack
GVAR(AT_OUTSIDE) = getNumber( configfile>>"cfgPt">>CfgPt>>"AT_OUTSIDE");
GVAR(AT_IN_STRUCT_AM_VIS_CHANGE_POS) = getNumber( configfile>>"cfgPt">>CfgPt>>"AT_IN_STRUCT_AM_VIS_CHANGE_POS");
GVAR(AT_IN_STRUCT_HIT) = getNumber( configfile>>"cfgPt">>CfgPt>>"AT_IN_STRUCT_HIT");
GVAR(AT_IN_STRUCT_NOT_HIT) = getNumber( configfile>>"cfgPt">>CfgPt>>"AT_IN_STRUCT_NOT_HIT");
GVAR(AT_IN_STRUCT_AM_VIS_MOVE) = getNumber( configfile>>"cfgPt">>CfgPt>>"AT_IN_STRUCT_AM_VIS_MOVE");


//counter attack max disatance
GVAR(AD_OUTSIDE) = getNumber( configfile>>"cfgPt">>CfgPt>>"AD_OUTSIDE");
GVAR(AD_IN_STRUCT_AM_VIS_CHANGE_POS) = getNumber( configfile>>"cfgPt">>CfgPt>>"AD_IN_STRUCT_AM_VIS_CHANGE_POS");
GVAR(AD_IN_STRUCT_HIT) = getNumber( configfile>>"cfgPt">>CfgPt>>"AD_IN_STRUCT_HIT");
GVAR(AD_IN_STRUCT_NOT_HIT) = getNumber( configfile>>"cfgPt">>CfgPt>>"AD_IN_STRUCT_NOT_HIT");
GVAR(AD_IN_STRUCT_AM_VIS_MOVE) = getNumber( configfile>>"cfgPt">>CfgPt>>"AD_IN_STRUCT_AM_VIS_MOVE");

//time to reset unit pos
GVAR(RT_OUTSIDE) = getNumber( configfile>>"cfgPt">>CfgPt>>"RT_OUTSIDE");
GVAR(RT_IN_STRUCT_HIT) = getNumber( configfile>>"cfgPt">>CfgPt>>"RT_IN_STRUCT_HIT");
GVAR(RT_IN_STRUCT_CHANGE_POS) = getNumber( configfile>>"cfgPt">>CfgPt>>"RT_IN_STRUCT_CHANGE_POS");
GVAR(RT_IN_STRUCT_AM_VIS_MOVE) = getNumber( configfile>>"cfgPt">>CfgPt>>"RT_IN_STRUCT_AM_VIS_MOVE");
GVAR(RT_IN_STRUCT_UNKNOWN_ENEMY) = getNumber( configfile>>"cfgPt">>CfgPt>>"RT_IN_STRUCT_UNKNOWN_ENEMY");
