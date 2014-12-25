class Extended_PreInit_EventHandlers {
	class ADDON {
		init = QUOTE(call COMPILE_FILE(XEH_preInit));
	};
};

class Extended_Hit_EventHandlers {
	class SoldierWB {
		class ADDON {
			serverHit = QUOTE(if (GVAR(enabled) == 1) then {if(_this call FNCMAIN(isValidUnit)) then {_this call FUNC(handleHit)}});
		};
	};
	class SoldierEB {
		class ADDON {
			serverHit = QUOTE(if (GVAR(enabled) == 1) then {if(_this call FNCMAIN(isValidUnit)) then {_this call FUNC(handleHit)}});
		};
	};
	class SoldierGB {
		class ADDON {
			serverHit = QUOTE(if (GVAR(enabled) == 1) then {if(_this call FNCMAIN(isValidUnit)) then {_this call FUNC(handleHit)}});
		};
	};
};
