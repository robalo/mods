//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_2(_needle,_haystack);
({_needle == _x} count _haystack) > 0
