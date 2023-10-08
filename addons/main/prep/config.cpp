#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ArmaReTex_C7",
            "ArmaReTex_PM63_Automatic",
            "ArmaReTex_TAR21",
            "ArmaReTex_Radios",
            "bg21_famas_prplredux",
            "PB_Rucksack",
            "QIN_CZ_BREN2",
            "tfar_backpacks"
        };
        author = "johnb43";
        authors[] = {"johnb43"};
        url = "https://github.com/johnb432/Weapons-Balance-PB";
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class arifle_MX_Base_F;
    class bg21_famas_base: arifle_MX_Base_F {
        class WeaponSlotsInfo;
    };
    class bg21_famas_HG: bg21_famas_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
        };
    };
};
