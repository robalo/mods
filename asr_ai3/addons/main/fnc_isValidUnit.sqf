//#define DEBUG_MODE_FULL
#include "script_component.hpp"
!(isNull _this) && {alive _this} && {(GVAR(skip_factions) select {_x == faction _this}) isEqualTo []} && {!(_this getVariable ["asr_ai_exclude", false])}
