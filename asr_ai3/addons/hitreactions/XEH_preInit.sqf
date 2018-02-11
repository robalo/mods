//#define DEBUG_MODE_FULL
#include "script_component.hpp"
LOG(MSG_INIT);

#include "initSettings.sqf"

GVAR(crithit) = [getNumber (configFile >> "CfgFirstAid" >> "CriticalHeadHit"), getNumber (configFile >> "CfgFirstAid" >> "CriticalBodyHit")];

PREP(fallDown);
PREP(handleHit);
PREP(handleExplosion);
PREP(ejectDeadGunner);
PREP(addHandleDamage);
PREP(handleHitVehicle);
PREP(vehicleSetup);
