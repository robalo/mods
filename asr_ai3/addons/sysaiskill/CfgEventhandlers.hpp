class Extended_PreInit_EventHandlers {
	class ADDON {
		init = QUOTE(call COMPILE_FILE(XEH_preInit));
	};
};

class Extended_PostInit_EventHandlers {
	class ADDON {
		init = QUOTE(if (!hasInterface) then {call COMPILE_FILE(XEH_postServerInit)});
	};
};

class Extended_InitPost_EventHandlers {
	class CAManBase {
		class ADDON {
			serverInit = QUOTE(if (GVAR(enabled) == 1) then {if(_this call FUNC(isValidUnit)) then {_this spawn FUNC(modUnitSkill)}});
		};
	};
};

class Extended_Hit_EventHandlers {
	class CAManBase {
		class ADDON {
			serverHit = QUOTE(if (GVAR(enabled) == 1) then {if(_this call FUNC(isValidUnit)) then {_this spawn FUNC(modUnitSkill)}});
		};
	};
};
