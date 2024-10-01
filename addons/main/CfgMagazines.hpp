class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class PB_M855_Famas: 30Rnd_556x45_Stanag {
        mass = 8;
    };

    class PB_M855A1_Famas: 30Rnd_556x45_Stanag {
        mass = 8;
    };
    class PB_M855A1_Famas_Green: PB_M855A1_Famas {};
    class PB_M855A1_Famas_Orange: PB_M855A1_Famas {};
    class PB_M855A1_Famas_Red: PB_M855A1_Famas {};
    class PB_M855A1_Famas_Yellow: PB_M855A1_Famas {};

    class rhs_mag_30Rnd_556x45_Mk262_Stanag;
    class 25Rnd_556x45_famas_Mk262: rhs_mag_30Rnd_556x45_Mk262_Stanag {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        descriptionShort = "Caliber: 5.56x45mm Mk262 Mod 1<br/>Type: SBLR<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 Mk262 Mod 1 Mag";
        displayNameShort = "SBLR";
        mass = 8;
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        modelSpecial = "PB_M_Weapons\famas\PB_famas_25Rnd";
    };

    class rhs_mag_30Rnd_556x45_Mk318_Stanag;
    class 25Rnd_556x45_famas_Mk318: rhs_mag_30Rnd_556x45_Mk318_Stanag {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        descriptionShort = "Caliber: 5.56x45mm Mk318 Mod 0<br/>Type: SOST<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 Mk318 Mod 0 Mag";
        displayNameShort = "SOST";
        mass = 8;
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        modelSpecial = "PB_M_Weapons\famas\PB_famas_25Rnd";
    };

    class 25Rnd_556x45_famas_IR_DIM: PB_M855_Famas {
        ammo = "rhssaf_ammo_556x45_Ball_Tracer_Dim";
        descriptionShort = "Caliber: 5.56x45mm XM996<br/>Type: IR-DIM<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 XM996 Mag (IR-DIM Tracer)";
        displayNameShort = "IR-DIM";
        tracersEvery = 1;
    };

    class rhsgref_296Rnd_792x57_SmE_belt;
    class PB_MG3_100Belt_T: rhsgref_296Rnd_792x57_SmE_belt {
        mass = 32.3;
    };

    class CA_Magazine;
    class PB_200Rnd_762x51_M80: CA_Magazine {
        mass = 62;
    };

    class PB_100Rnd_Fury: CA_Magazine {
        mass = 29;
    };
    class PB_100Rnd_Fury_GT: PB_100Rnd_Fury {
        tracersEvery = 1;
    };
    class PB_100Rnd_Fury_YT: PB_100Rnd_Fury {
        tracersEvery = 1;
    };

    class PB_20Rnd_Fury;
    class PB_20Rnd_Fury_GT: PB_20Rnd_Fury {
        tracersEvery = 1;
    };
    class PB_20Rnd_Fury_YT: PB_20Rnd_Fury {
        tracersEvery = 1;
    };
};
