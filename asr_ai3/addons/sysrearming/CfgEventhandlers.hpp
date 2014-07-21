class Extended_PreInit_EventHandlers {
	class ADDON {
		init = QUOTE(call COMPILE_FILE(XEH_preInit));
	};
};

class Extended_PostInit_EventHandlers {
	class ADDON {
		clientInit = QUOTE(call COMPILE_FILE(XEH_postClientInit));
		init = QUOTE(call COMPILE_FILE(XEH_postInit));
	};
};

class Extended_InitPost_EventHandlers {
	class CAManBase {
		class ADDON {
			onrespawn = 1;
			init = QUOTE(if (GVAR(feature)==1) then {if (local (_this select 0)) then {(_this select 0) call FUNC(unitInit)}});
		};
	};
};
