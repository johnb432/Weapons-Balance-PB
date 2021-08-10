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
    };
};

#include "CfgAcc.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
