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
        url = "https://github.com/johnb432/Weapons-Balance-PB";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        name = "Weapons Balance - Project Blufor";
        author = "johnb43";
        tooltipOwned = "Weapons Balance - Project Blufor";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-PB";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_pb\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_pb\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_pb\addons\main\ui\logo_weapons_balance.paa";
    };
};

#include "CfgAcc.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
