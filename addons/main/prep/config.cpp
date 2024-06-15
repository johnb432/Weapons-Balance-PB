#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "PB_C_Weapons",
            "PB_QIN_CZ_BREN2",

            "PB_Universal_Kit",
            "PB_Australian_Kit",
            "PB_Belgian_Kit",

            "PB_AUS_F",
            "PB_BEL_F",
            "PB_CAN_F"
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

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };
    class PB_K2: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete PointerSlot;
        };
    };

    class LMG_Base_F;
    class PB_Negev: LMG_Base_F {
        class WeaponSlotsInfo {
            delete GripodSlot;
        };
    };

    class PB_Famas_G2: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class PB_Famas_F1: PB_Famas_G2 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
            delete PointerSlot;
        };
    };
};
