#define BAG_RADIO(type)\
class type: TFAR_rt1523g_big {\
    mass = 90;\
    maximumLoad = 240;\
    tf_range = 40000;\
}

#define BAG_RADIO_SMALL(type)\
class type: TFAR_rt1523g {\
    mass = 75;\
    maximumLoad = 160;\
}

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

    class TFAR_rt1523g_big;
    class unv_BULFLK_big_rt1523g: TFAR_rt1523g_big {
        hiddenSelectionsTextures[] = {"\ArmaReTex_Radios\data\clf_nicecomm2_BULFLK_co.paa"};
        mass = 90;
        maximumLoad = 240;
        tf_range = 40000;
    };
    class unv_M05_big_rt1523g: TFAR_rt1523g_big {
        displayName = "[M05] RT-1523G Big";
        mass = 90;
        maximumLoad = 240;
        picture = "ArmaReTex_Radios\ui\TFAR_Big_LR.paa";
    };

    // unv_ESTDCU_big_rt1523g // wrong camo
    BAG_RADIO(Coyote_big_rt1523g);
    BAG_RADIO(unv_2015M_big_rt1523g);
    BAG_RADIO(unv_AMCU_big_rt1523g);
    BAG_RADIO(unv_black_big_rt1523g);
    BAG_RADIO(unv_CADPAT_big_rt1523g);
    BAG_RADIO(unv_CADPATAR_big_rt1523g);
    BAG_RADIO(unv_cce_big_rt1523g);
    BAG_RADIO(unv_DCCE_big_rt1523g);
    BAG_RADIO(unv_ESTDCU_big_rt1523g);
    BAG_RADIO(unv_flecktarn_big_rt1523g);
    BAG_RADIO(unv_GRANITEB_big_rt1523g);
    BAG_RADIO(unv_GRE_big_rt1523g);
    BAG_RADIO(unv_green_big_rt1523g);
    BAG_RADIO(unv_idpm_big_rt1523g);
    BAG_RADIO(unv_JIGSAW_big_rt1523g);
    BAG_RADIO(unv_M04_big_rt1523g);
    BAG_RADIO(unv_M09D_big_rt1523g);
    BAG_RADIO(unv_M09W_big_rt1523g);
    BAG_RADIO(unv_M11_big_rt1523g);
    BAG_RADIO(unv_M84_big_rt1523g);
    BAG_RADIO(unv_m90_big_rt1523g);
    BAG_RADIO(unv_M98_big_rt1523g);
    BAG_RADIO(unv_MARPAT_D_big_rt1523g);
    BAG_RADIO(unv_MARPAT_WD_big_rt1523g);
    BAG_RADIO(unv_MEHMETCIK_big_rt1523g);
    BAG_RADIO(unv_MM14_big_rt1523g);
    BAG_RADIO(unv_multic_big_rt1523g);
    BAG_RADIO(unv_mtp_big_rt1523g);
    BAG_RADIO(unv_NBS_big_rt1523g);
    BAG_RADIO(unv_olive_big_rt1523g);
    BAG_RADIO(unv_SCHNEETARN_big_rt1523g);
    BAG_RADIO(unv_tan_big_rt1523g);
    BAG_RADIO(unv_tropentarn_big_rt1523g);
    BAG_RADIO(unv_type3_big_rt1523g);
    BAG_RADIO(unv_UCP_big_rt1523g);
    BAG_RADIO(unv_VZ07_big_rt1523g);
    BAG_RADIO(unv_VZ85_big_rt1523g);
    BAG_RADIO(unv_VZ95_big_rt1523g);
    BAG_RADIO(unv_WZ2000_big_rt1523g);

    class TFAR_rt1523g;

    BAG_RADIO_SMALL(clf_2015M_prc117gco);
    BAG_RADIO_SMALL(clf_AMCU_prc117g_co);
    BAG_RADIO_SMALL(clf_black_prc117g_co);
    BAG_RADIO_SMALL(clf_BULFLK_prc117g_co);
    BAG_RADIO_SMALL(clf_CADPATAR_prc117g_co);
    BAG_RADIO_SMALL(clf_CADPAT_prc117g_co);
    BAG_RADIO_SMALL(clf_cce_prc117g_co);
    BAG_RADIO_SMALL(clf_DCCE_prc117g_co);
    BAG_RADIO_SMALL(clf_ESTDCU_prc117g_co);
    BAG_RADIO_SMALL(clf_flecktarn_prc117g_co);
    BAG_RADIO_SMALL(clf_GRANITEB_prc117g_co);
    BAG_RADIO_SMALL(clf_GRE_prc117gco);
    BAG_RADIO_SMALL(clf_Green_prc117g_co);
    BAG_RADIO_SMALL(clf_idpm_prc117g_co);
    BAG_RADIO_SMALL(clf_JIGSAW_prc117g_co);
    BAG_RADIO_SMALL(clf_M04_prc117gco);
    BAG_RADIO_SMALL(clf_M05_prc117g_co);
    BAG_RADIO_SMALL(clf_M09D_prc117g_co);
    BAG_RADIO_SMALL(clf_M09W_prc117g_co);
    BAG_RADIO_SMALL(clf_M11_prc117g_co);
    BAG_RADIO_SMALL(clf_M84_prc117g_co);
    BAG_RADIO_SMALL(clf_m90_prc117g_co);
    BAG_RADIO_SMALL(clf_M98_prc117g_co);
    BAG_RADIO_SMALL(clf_MARPAT_D_prc117g_co);
    BAG_RADIO_SMALL(clf_MARPAT_WD_prc117g_co);
    BAG_RADIO_SMALL(clf_MEHMETCIK_prc117g_co);
    BAG_RADIO_SMALL(clf_MM14_prc117g_co);
    BAG_RADIO_SMALL(clf_multic_prc117g_co);
    BAG_RADIO_SMALL(clf_MTP_prc117g_co);
    BAG_RADIO_SMALL(clf_NBS_prc117g_co);
    BAG_RADIO_SMALL(clf_Olive_prc117g_co);
    BAG_RADIO_SMALL(clf_SCHNEETARN_prc117g_co);
    BAG_RADIO_SMALL(clf_Tan_prc117g_co);
    BAG_RADIO_SMALL(clf_tropentarn_prc117g_co);
    BAG_RADIO_SMALL(clf_type3_prc117g_co);
    BAG_RADIO_SMALL(clf_UCP_prc117g_co);
    BAG_RADIO_SMALL(clf_VZ07_prc117gco);
    BAG_RADIO_SMALL(clf_VZ85_prc117g_co);
    BAG_RADIO_SMALL(clf_VZ95_prc117g_co);
    BAG_RADIO_SMALL(clf_WZ2000_prc117g_co);
};
