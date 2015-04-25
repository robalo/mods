#include "CfgPatches.hpp"
class RscPicture;
#include "RscTitles.hpp"
#include "CfgSounds.hpp"

class Extended_PreInit_EventHandlers {
	class tmr_hiteffects {
		init = "call compile preProcessFileLineNumbers '\tmr_hiteffects\init.sqf'";
	};
};

class Extended_Explosion_EventHandlers {
	class CAManBase {
		class tmr_hiteffects {
			explosion = "_this spawn tmr_hiteffects_fnc_onExplosion";
		};
	};
};

class Extended_Hit_EventHandlers {
	class CAManBase {
		class tmr_hiteffects {
			hit = "_this spawn tmr_hiteffects_fnc_onHit";
		};
	};
};
