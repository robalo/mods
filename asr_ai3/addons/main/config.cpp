#include "script_component.hpp"

#include "CfgPatches.hpp"

PRELOAD_ADDONS;

#include "CfgEventhandlers.hpp"

class CfgAISkill {
    aimingShake[] = {0, 0.1, 0.8, 0.4, 1, 1};
    aimingSpeed[] = {0, 0.1, 0.8, 0.6, 1, 1};
    spotDistance[] = {0, 0.1, 0.8, 0.4, 1, 1};
    //courage[] = {0, 0, 0.5, 0.2, 1, 1};
};
/*
aimingAccuracy
Affects how well the AI can lead a target
Affects how accurately the AI estimate range and calculates bullet drop
Affects how well the AI compensates for weapon dispersion
Affects how much the AI will know to compensate for recoil (Higher value = more controlled fire)
Affects how certain the AI must be about its aim on target before opening fire
aimingShake
Affects how steadily the AI can hold a weapon (Higher value = less weapon sway)
aimingSpeed
Affects how quickly the AI can rotate and stabilize its aim (Higher value = faster, less error)
commanding
Affects how quickly recognized targets are shared with the group (Higher value = faster reporting)
courage
Affects unit's subordinates' morale (Higher value = more courage)
endurance
Disabled in Arma3

general
Raw "Skill", value is distributed to sub-skills unless defined otherwise. Affects the AI's decision making.
reloadSpeed
Affects the delay between switching or reloading a weapon (Higher value = less delay)
spotDistance
Affects the AI ability to spot targets within it's visual or audible range (Higher value = more likely to spot)
Affects the accuracy of the information (Higher value = more accurate information)
spotTime
Affects how quick the AI react to death, damage or observing an enemy (Higher value = quicker reaction)
*/

class CfgVehicles {
	class CAManBase;
	class SoldierWB: CAManBase {
		fsmDanger = "x\asr_ai3\addons\main\danger.fsm";
	};
	class SoldierEB: CAManBase {
		fsmDanger = "x\asr_ai3\addons\main\danger.fsm";
	};
	class SoldierGB: CAManBase {
		fsmDanger = "x\asr_ai3\addons\main\danger.fsm";
	};
};
class Cfg3DEN
{
	class Object
	{
		class AttributeCategories
		{
			class pe_asr_ai
			{
				displayName="PE ASR AI";
				collapsed=0;
				class Attributes
				{
					class pe_asr_ai_dist
					{
						displayName="S&D Distance (asr_ai3_main_AD_INDIVIDUAL)";
						tooltip="Max distance this unit will S&D enemies at (asr_ai3_main_AD_INDIVIDUAL)";
						property="pe_asr_sad_distance";
						control="Edit";
						expression="_this setVariable ['asr_ai3_main_AD_INDIVIDUAL', _value, true];";
						defaultValue="250";
						unique=0;
						validate="number";
						typeName="NUMBER";
						condition="objectBrain";
					};
				};
			};
		};
	};
};