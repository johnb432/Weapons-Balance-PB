#define SET_MASS(item,parent,weight)\
class item: parent {\
    mass = weight;\
}

#define SET_MASS_AND_LOAD(item,parent,weight,maxLoad)\
class item: parent {\
    mass = weight;\
    maximumLoad = maxLoad;\
}

class CfgVehicles {
    class B_AssaultPack_Base;
    class B_Kitbag_Base;

    // Assault bags
    SET_MASS_AND_LOAD(PB_COMBAT_2015M,B_AssaultPack_Base,20,160);
    SET_MASS_AND_LOAD(PB_ASSAULT_Green,B_AssaultPack_Base,20,160);
    SET_MASS_AND_LOAD(PB_COMBAT_LATPAT,B_AssaultPack_Base,20,160);
    SET_MASS_AND_LOAD(PB_COMBATPB_AMCU,B_AssaultPack_Base,20,160);
    SET_MASS_AND_LOAD(PB_COMBATPB_Multicam,B_AssaultPack_Base,20,160);
    SET_MASS_AND_LOAD(PB_ASSAULT_Mehmetcik,B_AssaultPack_Base,20,160);
    SET_MASS_AND_LOAD(PB_ASSAULT_MM14,B_AssaultPack_Base,20,160);
    SET_MASS_AND_LOAD(PB_ASSAULT_TURDIG,B_AssaultPack_Base,20,160);

    SET_MASS_AND_LOAD(PB_COMBAT_MED_2015M,B_AssaultPack_Base,20,160);
    SET_MASS_AND_LOAD(PB_COMBAT_MED_LATPAT,B_AssaultPack_Base,20,160);
    SET_MASS_AND_LOAD(PB_COMBATMPB_AMCU,B_AssaultPack_Base,20,160);
    SET_MASS_AND_LOAD(PB_ASSAULT_MED_Green,B_AssaultPack_Base,20,160);
    SET_MASS_AND_LOAD(PB_ASSAULT_MED_Mehmetcik,B_AssaultPack_Base,20,160);
    SET_MASS_AND_LOAD(PB_ASSAULT_MED_MM14,B_AssaultPack_Base,20,160);
    SET_MASS_AND_LOAD(PB_ASSAULT_MED_TURDIG,B_AssaultPack_Base,20,160);

    // Eagle
    SET_MASS_AND_LOAD(PB_EAGLE_CADPATTW,B_AssaultPack_Base,35,240);
    SET_MASS_AND_LOAD(PB_EAGLE_DB,B_AssaultPack_Base,35,240);
    SET_MASS_AND_LOAD(PB_EAGLE_GRANITEB,B_AssaultPack_Base,35,240);
    SET_MASS_AND_LOAD(PB_EAGLE_M90,B_AssaultPack_Base,35,240);
    SET_MASS_AND_LOAD(PB_EAGLE_MM14,B_AssaultPack_Base,35,240);
    SET_MASS_AND_LOAD(PB_EAGLE_MULTICAM,B_AssaultPack_Base,35,240);

    SET_MASS_AND_LOAD(PB_EAGLE_ENG_CADPATTW,B_AssaultPack_Base,35,240);
    SET_MASS_AND_LOAD(PB_EAGLE_ENG_DB,B_AssaultPack_Base,35,240);
    SET_MASS_AND_LOAD(PB_EAGLE_ENG_GRANITEB,B_AssaultPack_Base,35,240);
    SET_MASS_AND_LOAD(PB_EAGLE_ENG_M90,B_AssaultPack_Base,35,240);
    SET_MASS_AND_LOAD(PB_EAGLE_ENG_MM14,B_AssaultPack_Base,35,240);
    SET_MASS_AND_LOAD(PB_EAGLE_ENG_Multicam,B_AssaultPack_Base,35,240);

    SET_MASS_AND_LOAD(PB_EAGLE_MED_CADPATTW,B_AssaultPack_Base,35,240);
    SET_MASS_AND_LOAD(PB_EAGLE_MED_DB,B_AssaultPack_Base,35,240);
    SET_MASS_AND_LOAD(PB_EAGLE_MED_GRANITEB,B_AssaultPack_Base,35,240);
    SET_MASS_AND_LOAD(PB_EAGLE_MED_M90,B_AssaultPack_Base,35,240);
    SET_MASS_AND_LOAD(PB_EAGLE_MED_MM14,B_AssaultPack_Base,35,240);
    SET_MASS_AND_LOAD(PB_EAGLE_MED_Multicam,B_AssaultPack_Base,35,240);

    // Kitbags
    SET_MASS_AND_LOAD(PB_Kitbag_2015M,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_AMCU,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_AUSOD,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_CCE,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_DPM,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_ESTDCU,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_FLECK,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_Green,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_KITBAG_GRELIZ,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_KITBAG_IDPM,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_JIGSAW,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_M04,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_M05,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_M09D,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_M09W,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_M84,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_M98,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_MM14,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_MTP,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_Multicam,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_Type2,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_VZ07,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Kitbag_WZ93W,B_Kitbag_Base,50,280);

    SET_MASS_AND_LOAD(PB_Medbag_AMCU,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_AUSOD,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_CCE,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_ESTDCU,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_FLECK,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_GRELIZ,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_IDPM,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_JIGSAW,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_M04,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_M05,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_M09D,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_M09W,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_M84,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_M98,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_MTP,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_Type2,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_VZ07,B_Kitbag_Base,50,280);
    SET_MASS_AND_LOAD(PB_Medbag_WZ93W,B_Kitbag_Base,50,280);

    // Radiobags
    SET_MASS_AND_LOAD(PB_Radiobag_2015M,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_AMCU,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_AUSOD,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_CADPATAR,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_CADPATMT,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_CADPATTW,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_CCE,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_DB,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_DPM,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_ESTDCU,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_FLECK,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_GRANITEB,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_Green,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_GRELIZ,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_IDPM,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_JIGSAW,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_LATPAT,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_M04,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_M05,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_M09D,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_M09W,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_M84,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_M90,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_M98,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_Mehmetcik,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_MM14,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_MTP,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_RADIOBAG_MULTICAM,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_SCHNEE,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_TROP,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_TURDIG,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_Type2,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_VZ07,B_Kitbag_Base,90,240);
    SET_MASS_AND_LOAD(PB_Radiobag_WZ93W,B_Kitbag_Base,90,240);

    // Carryall
    SET_MASS(PB_CARRYALL_AUSOD,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_CADPATTW,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_CCE,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_DPM,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_FLECK,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_GRANITEB,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_Green,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_IDPM,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_JIGSAW,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_LATPAT,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_M84,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_M90,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_M98,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_MM14,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_MTP,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_MULTICAM,B_Kitbag_Base,60);
    SET_MASS(PB_CARRYALL_WZ93W,B_Kitbag_Base,60);

    // Day backpack
    SET_MASS_AND_LOAD(PB_BP02_2015M,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_AMCU,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_cadpatar,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_cadpatmt,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_cadpattw,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_CCE,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_DPM,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_ESTDCU,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_Flecktarn,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_graniteb,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_greliz,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_GRN,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_IDPM,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_JDOTS,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_jigsaw,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_LATPAT,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_M04,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_M05,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_M09D,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_M09W,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_M84,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_M90,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_M98,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_Mehmetcik,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_MM14,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_MTP,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_Schneetarn,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_Tropentarn,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_VZ2007,B_Kitbag_Base,65,340);
    SET_MASS_AND_LOAD(PB_BP02_WZ93W,B_Kitbag_Base,65,340);

    // Patrol backpack
    SET_MASS_AND_LOAD(PB_BP01_2015M,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_AMCU,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_cadpatar,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_cadpatmt,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_cadpattw,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_CCE,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_DPM,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_ESTDCU,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_Flecktarn,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_graniteb,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_greliz,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_GRN,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_IDPM,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_JDOTS,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_jigsaw,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_LATPAT,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_M04,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_M05,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_M09D,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_M09W,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_M84,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_M90,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_M98,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_Mehmetcik,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_MM14,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_MTP,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_Schneetarn,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_Tropentarn,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_VZ2007,B_Kitbag_Base,70,360);
    SET_MASS_AND_LOAD(PB_BP01_WZ93W,B_Kitbag_Base,70,360);

    // Long range backpack
    SET_MASS_AND_LOAD(PB_BP03_2015M,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_AMCU,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_cadpatar,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_cadpatmt,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_cadpattw,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_CCE,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_DPM,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_ESTDCU,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_Flecktarn,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_graniteb,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_greliz,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_GRN,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_IDPM,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_JDOTS,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_jigsaw,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_LATPAT,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_M04,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_M05,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_M09D,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_M09W,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_M84,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_M90,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_M98,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_Mehmetcik,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_MM14,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_MTP,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_Schneetarn,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_Tropentarn,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_VZ2007,B_Kitbag_Base,80,420);
    SET_MASS_AND_LOAD(PB_BP03_WZ93W,B_Kitbag_Base,80,420);
};
