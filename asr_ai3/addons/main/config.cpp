#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredAddons[] = {"CBA_MAIN"};
		requiredVersion = REQUIRED_VERSION;
		versionDesc = "ASR AI3";
		versionAct = "";
		VERSION_CONFIG;
        author = "Robalo";
	};
};

class Extended_PreInit_EventHandlers {
	ADDON = QUOTE(call COMPILE_FILE(XEH_preInit));
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