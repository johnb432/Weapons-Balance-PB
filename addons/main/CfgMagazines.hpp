class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class rhs_mag_30Rnd_556x45_M855_Stanag;
    class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red;
    class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange;
    class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green;
    class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow;
    class rhs_mag_30Rnd_556x45_Mk262_Stanag;
    class rhs_mag_30Rnd_556x45_Mk318_Stanag;

    class CA_Magazine;
    class KARRK62_Mag: CA_Magazine {
        mass = 13.5;
    };

    class qin_30Rnd_556x45_Stanag: 30Rnd_556x45_Stanag {
        descriptionShort = "Caliber: 5.56x45mm M855<br/>Type: FMJ/Tracer<br/>Rounds: 30<br/>Used in: M16";
        displayName = "30Rnd 5.56x45 M855 Mag (Yellow Tracer Reload)";
        displayNameShort = "FMJ";
        mass = 9.35;
    };
    class qin_30Rnd_556x45_Stanag_Tracer_Red: qin_30Rnd_556x45_Stanag {
        descriptionShort = "Caliber: 5.56x45mm M856<br/>Type: Tracer<br/>Rounds: 30<br/>Used in: M16";
        displayName = "30Rnd 5.56x45 M856 Mag (Red Tracer)";
        displayNameShort = "Tracer";
    };

    class 25Rnd_556x45_famas: 30Rnd_556x45_Stanag {
        descriptionShort = "Caliber: 5.56x45mm M193<br/>Type: FMJ<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 M193 Mag";
        displayNameShort = "FMJ";
        mass = 8;
        tracersEvery = 0;
    };
    class 25Rnd_556x45_famas_tr: 30Rnd_556x45_Stanag {
        descriptionShort = "Caliber: 5.56x45mm M196<br/>Type: Tracer<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 M196 Mag (Yellow Tracer)";
        displayNameShort = "Tracer";
        mass = 8;
    };

    class 25Rnd_556x45_famas_M855: rhs_mag_30Rnd_556x45_M855_Stanag {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        descriptionShort = "Caliber: 5.56x45mm M855<br/>Type: FMJ<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 M855 Mag";
        displayNameShort = "FMJ";
        picture = "\bg21_famas_prplredux\data\inv\charg_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_M855_tr_Red: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        descriptionShort = "Caliber: 5.56x45mm M856<br/>Type: Tracer<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 M856 Mag (Red Tracer)";
        displayNameShort = "Tracer";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };
    class 25Rnd_556x45_famas_M855_tr_Green: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        descriptionShort = "Caliber: 5.56x45mm M856<br/>Type: Tracer<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 M856 Mag (Tracer Green)";
        displayNameShort = "Tracer";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };
    class 25Rnd_556x45_famas_M855_tr_Orange: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        descriptionShort = "Caliber: 5.56x45mm M856<br/>Type: Tracer<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 M856 Mag (Tracer Orange)";
        displayNameShort = "Tracer";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };
    class 25Rnd_556x45_famas_M855_tr_Yellow: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        descriptionShort = "Caliber: 5.56x45mm M856<br/>Type: Tracer<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 M856 Mag (Tracer Yellow)";
        displayNameShort = "Tracer";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_M855A1: rhs_mag_30Rnd_556x45_M855A1_Stanag {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        descriptionShort = "Caliber: 5.56x45mm M855A1<br/>Type: EPR<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 M855A1 Mag";
        displayNameShort = "EPR";
        picture = "\bg21_famas_prplredux\data\inv\charg_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_M855A1_tr_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        descriptionShort = "Caliber: 5.56x45mm M856A1<br/>Type: Tracer<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 M856A1 Mag (Red Tracer)";
        displayNameShort = "Tracer";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };
    class 25Rnd_556x45_famas_M855A1_tr_Green: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        descriptionShort = "Caliber: 5.56x45mm M856A1<br/>Type: Tracer<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 M856A1 Mag (Green Tracer)";
        displayNameShort = "Tracer";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };
    class 25Rnd_556x45_famas_M855A1_tr_Orange: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        descriptionShort = "Caliber: 5.56x45mm M856A1<br/>Type: Tracer<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 M856A1 Mag (Orange Tracer)";
        displayNameShort = "Tracer";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };
    class 25Rnd_556x45_famas_M855A1_tr_Yellow: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        descriptionShort = "Caliber: 5.56x45mm M856A1<br/>Type: Tracer<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 M856A1 Mag (Yellow Tracer)";
        displayNameShort = "Tracer";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_Mk262: rhs_mag_30Rnd_556x45_Mk262_Stanag {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        descriptionShort = "Caliber: 5.56x45mm Mk262 Mod 1<br/>Type: SBLR<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 Mk262 Mod 1 Mag";
        displayNameShort = "SBLR";
        picture = "\bg21_famas_prplredux\data\inv\charg_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_Mk318: rhs_mag_30Rnd_556x45_Mk318_Stanag {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        descriptionShort = "Caliber: 5.56x45mm Mk318 Mod 0<br/>Type: SOST<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 Mk318 Mod 0 Mag";
        displayNameShort = "SOST";
        picture = "\bg21_famas_prplredux\data\inv\charg_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_IR_DIM: 25Rnd_556x45_famas_M855 {
        ammo = "rhssaf_ammo_556x45_Ball_Tracer_Dim";
        descriptionShort = "Caliber: 5.56x45mm XM996<br/>Type: IR-DIM<br/>Rounds: 25<br/>Used in: FAMAS";
        displayName = "25Rnd 5.56x45 XM996 Mag (IR-DIM Tracer)";
        displayNameShort = "IR-DIM";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        tracersEvery = 1;
    };
};
