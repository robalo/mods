class Extended_PreInit_EventHandlers {
	class ADDON {
		init = QUOTE(call COMPILE_FILE(XEH_preInit));
	};
};

class Extended_PostInit_EventHandlers {
	class ADDON {
		serverInit = QUOTE(if (GVAR(enabled) == 1) then {call COMPILE_FILE(XEH_postServerInit)});
	};
};

class Extended_InventoryClosed_EventHandlers {
	class CAManBase {
		ADDON = QUOTE(if (GVAR(enabled) == 1) then {_this call FUNC(inventoryClosed)});
	};
};
