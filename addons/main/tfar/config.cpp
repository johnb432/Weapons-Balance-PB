#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "PB_C_TFAR",
            "tfar_core",
            "tfar_backpacks",
            "PB_Main",
            "PB_British_Kit",
            "PB_Australian_Kit",
            "PB_Canadian_Kit",
            "PB_German_Kit",
            "PB_Finnish_Kit"
        };
        author = "johnb43";
        authors[] = {
            "johnb43"
        };
        url = "https://github.com/johnb432/Weapons-Balance-PB";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class Bag_Base;
    class PB_RT1523G_Base: Bag_Base {
        mass = 75;
        maximumLoad = 160;
    };
    class PB_RT1523BIG_Base: Bag_Base {
        mass = 90;
        maximumLoad = 240;
        tf_range = 40000;
    };
};
