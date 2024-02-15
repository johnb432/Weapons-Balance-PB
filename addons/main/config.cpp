#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "wb_pb_main_prep",
            "ArmaReTex_C7",
            "ArmaReTex_Negev",
            "ArmaReTex_PM63_Automatic",
            "ArmaReTex_TAR21",
            "ArmaReTex_Radios",
            "ArmaReTex_RAHE",
            "bg21_famas_prplredux",
            "KAR_RK62",
            "KAR_RK62M2",
            "KARPB_MPT55",
            "KARPB_TYPE20",
            "PB_FO_ARM1",
            "PB_Rucksack",
            "QIN_CZ_BREN2",
            "SOLIDTAN_Uniform",
            "tfar_backpacks"
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

#include "CfgAcc.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
