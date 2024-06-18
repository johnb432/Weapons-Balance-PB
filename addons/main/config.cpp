#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {"25Rnd_556x45_famas_Mk262","25Rnd_556x45_famas_Mk318","25Rnd_556x45_famas_IR_DIM"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "wb_pb_main_prep",
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

#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
