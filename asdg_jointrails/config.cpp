#define true 1
#define false 0

#define ReadAndWrite 0 //! any modifications enabled
#define ReadAndCreate 1 //! only adding new class members is allowed
#define ReadOnly 2 //! no modifications enabled
#define ReadOnlyVerified 3 //! no modifications enabled, CRC test applied

#define private 0 //! item is never visible
#define protected 1 //! "advanced designer" switch must be activated to use it
#define public 2 //! anyone can see/use it

class CfgPatches {
	class asdg_jointrails {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.48;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark"};
		author[] = {"Robalo"};
	};
	class asdg_jointmuzzles {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.44;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark"};
		author[] = {"Robalo"};
	};
};

class CfgAddons {
	class PreloadAddons {
		class asdg_jointrails {
			list[] = {
				"asdg_jointrails"
			};
		};
	};
};

class CfgFunctions {
	class asdg_jointrails {
		tag = "asdg";
		class functions	{
			file = "\asdg_jointrails\functions";
			class compatibleItems {};
		};
	};
};

#include "\x\cba\addons\jr\jr_classes.hpp"
#include "\x\cba\addons\jr\cfgweapons.hpp"
