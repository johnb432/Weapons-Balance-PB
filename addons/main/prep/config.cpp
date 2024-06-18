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
            "PB_Austrian_Kit",
            "PB_Australian_Kit",
            "PB_Belgian_Kit",
            "PB_British_Kit",
            "PB_Canadian_Kit",
            "PB_Danish_Kit",
            "PB_Estonian_Kit",
            "PB_Finnish_Kit",
            "PB_French_Kit",
            "PB_German_Kit",
            "PB_Greek_Kit",
            "PB_Hungary_Kit",
            "PB_Irish_Kit",
            "PB_Japan_Kit",
            "PB_Korean_Kit",
            "PB_Latvian_Kit",
            "PB_Norway_Kit",
            "PB_Polish_Kit",
            "PB_Slovakian_Kit",
            "PB_Spain_Kit",
            "PB_Swedish_Kit",
            "PB_Ukraine_Kit",

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
