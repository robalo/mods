###
###	ASDG Joint Ammo and Magazines
###

/*
Goal: provide common bullet and magazine classes for use by weapon mods in order to achieve better consistency and compatibility

TO DO:
- add common bullets (CfgAmmo classes)
- add magazines (CfgMagazines classes)
- add magazine groups
- provide macros as alternative to magazine groups so mod makers can use them
- configure vanilla weapons to use new magazines
- add support for AB, ACE3

TO NOT DO:
- create too many bullet and magazine variations

*/

class CfgPatches {
	class asdg_jam {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.44;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark"};
		author[] = {"Robalo"};
	};
};

class CfgAddons {
	class PreloadAddons {
		class asdg_jam {
			list[] = {"asdg_jam"};
		};
	};
};

class CfgAmmo {
};

class CfgMagazines {
};

class CfgWeapons {
};
