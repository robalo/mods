#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"CBA_MAIN"};
		versionDesc = "ASR AI3";
		versionAct = "";
		VERSION_CONFIG;
	};
};

#include "CfgEventhandlers.hpp"
