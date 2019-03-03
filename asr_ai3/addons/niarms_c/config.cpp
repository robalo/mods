#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        addonRootClass = "hlcweapons_core";
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {QUOTE(MAIN_ADDON), "hlcweapons_core"};
		version = VERSION;
		author = "Robalo";
	};
};

PRELOAD_ADDONS;

#include "CfgAmmo.hpp"
