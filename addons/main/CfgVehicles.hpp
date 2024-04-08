class CfgVehicles {
    class Bag_Base;
    class PB_Bergen: Bag_Base {
        mass = 80;
        maximumLoad = 380;
    };

    class B_AssaultPack_Base;
    class SOLIDTAN_Assaultpack: B_AssaultPack_Base {
        hiddenSelectionsTextures[] = {"SOLIDTAN_Kit\Data\SOLIDTAN_assault_backpack_medic.paa"};
    };
    class SOLIDTAN_Medicpack: B_AssaultPack_Base {
        hiddenSelectionsTextures[] = {"SOLIDTAN_Kit\Data\SOLIDTAN_assault_backpack.paa"};
    };

    class CADPAT_PB_Bergen: PB_Bergen {
        displayName = "[CADPAT-TW] Bergen";
    };
    class CADPATAR_PB_Bergen: PB_Bergen {
        displayName = "[CADPAT-AR] Bergen";
    };

    class PB_Rucksack;
    class CADPAT_PB_Rucksack: PB_Rucksack {
        displayName = "[CADPAT-TW] Rucksack";
    };
    class CADPATAR_PB_Rucksack: PB_Rucksack {
        displayName = "[CADPAT-AR] Rucksack";
    };

    class B_RadioBag_01_base_F: Bag_Base {
        mass = 90;
        maximumLoad = 240;
    };
};
