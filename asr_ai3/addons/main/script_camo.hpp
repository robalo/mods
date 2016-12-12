#define __CAMO_GHILIE 0.2
#define __CAMO_CAMO 0.3
#define __CAMO_MONO 0.4
#define __CAMO_DARK 0.7
#define __CAMO_COLOR 1

//unis, medium between top and bottom camouflage

#define __CAMO_U_GHILIEGHILIE asr_camouflage = __CAMO_GHILIE; asr_camouflage_ghillie = 1
#define __CAMO_U_GHILIECAMO asr_camouflage = __EVAL((__CAMO_GHILIE + __CAMO_CAMO)/2); asr_camouflage_ghillie = 1
#define __CAMO_U_CAMOCAMO asr_camouflage = __CAMO_CAMO
#define __CAMO_U_MONOCAMO asr_camouflage = __EVAL((__CAMO_MONO + __CAMO_CAMO)/2)
#define __CAMO_U_MONOMONO asr_camouflage = __CAMO_MONO
#define __CAMO_U_COLORMONO asr_camouflage = __EVAL((__CAMO_MONO + __CAMO_COLOR)/2)
#define __CAMO_U_COLORCAMO asr_camouflage = __EVAL((__CAMO_COLOR + __CAMO_CAMO)/2)

#define __CAMO_U_DARKDARK asr_camouflage = __CAMO_DARK; asr_camouflage_night = 0.3
#define __CAMO_U_CAMODARK asr_camouflage = __EVAL((__CAMO_DARK + __CAMO_CAMO)/2); asr_camouflage_night = 0.4
#define __CAMO_U_MONODARK asr_camouflage = __EVAL((__CAMO_MONO + __CAMO_DARK)/2); asr_camouflage_night = 0.4

#define __CAMO_U_SNOWSNOW asr_camouflage = __CAMO_COLOR; asr_camouflage_snow = 0.3

#define __CAMO_U_CAMOMONO __CAMO_U_MONOCAMO
#define __CAMO_U_CAMOCOLOR __CAMO_U_COLORCAMO
#define __CAMO_U_MONOCOLOR __CAMO_U_COLORMONO
#define __CAMO_U_DARKCAMO __CAMO_U_CAMODARK
#define __CAMO_U_DARKMONO __CAMO_U_MONODARK

//vests, single piece of camo

#define __CAMO_V_CAMO asr_camouflage = __CAMO_CAMO
#define __CAMO_V_MONO asr_camouflage = __CAMO_MONO
#define __CAMO_V_DARK asr_camouflage = __CAMO_DARK; asr_camouflage_night = 0.5
#define __CAMO_V_IGNORE asr_camouflage_ignore = 1

//rucks give camo penalty

#define __CAMO_B_SMALLCAMO asr_camouflage = 0.9
#define __CAMO_B_SMALLMONO asr_camouflage = 1.0
#define __CAMO_B_SMALLDARK asr_camouflage = 1.1; asr_camouflage_night = 0.8

#define __CAMO_B_MEDIUMCAMO asr_camouflage = 1.0
#define __CAMO_B_MEDIUMMONO asr_camouflage = 1.1
#define __CAMO_B_MEDIUMDARK asr_camouflage = 1.2; asr_camouflage_night = 0.9

#define __CAMO_B_LARGECAMO asr_camouflage = 1.1
#define __CAMO_B_LARGEMONO asr_camouflage = 1.2
#define __CAMO_B_LARGEDARK asr_camouflage = 1.3; asr_camouflage_night = 1.0

#define __CAMO_B_HUGECAMO asr_camouflage = 1.2
#define __CAMO_B_HUGEMONO asr_camouflage = 1.3
#define __CAMO_B_HUGEDARK asr_camouflage = 1.4; asr_camouflage_night = 1.1
