#include "script_component.hpp"

#include "CfgPatches.hpp"

PRELOAD_ADDONS;

#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

#include "CfgEventhandlers.hpp"

class CfgAISkill {
	aimingAccuracy[] = {0, 0, 1, 1};	//default
	aimingShake[] = {0, 0, 1, 1};		//default
	aimingSpeed[] = {0, 0.2, 1, 1};		//0.5->0.3
	endurance[] = {0, 0, 1, 1};		//default
	spotDistance[] = {0, 0.2, 1, 0.4};	//default
	spotTime[] = {0, 0, 1, 0.6};		//0.7->0.6
	courage[] = {0, 0, 1, 1};		//default
	reloadSpeed[] = {0, 0, 1, 1};		//default
	commanding[] = {0, 0, 1, 1};		//default
	general[] = {0, 0, 1, 1};		//default
};
