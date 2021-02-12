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

    class qin_30Rnd_556x45_Stanag: 30Rnd_556x45_Stanag {
        mass = 9.35;
    };
    class qin_30Rnd_556x45_Stanag_Tracer_Red: qin_30Rnd_556x45_Stanag {
        displayName = "5.56 mm 30rnd Tracer (Red) Mag";
    };

    class 25Rnd_556x45_famas: 30rnd_556x45_stanag {
        displayName = "5.56mm 25Rnd FAMAS";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        tracersEvery = 0;
    };
    class 25Rnd_556x45_famas_tr: 30rnd_556x45_stanag {
        displayName = "5.56mm 25Rnd FAMAS (Yellow Tracer)";
    };

    class 25Rnd_556x45_famas_M855: rhs_mag_30Rnd_556x45_M855_Stanag {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        displayName = "5.56mm 25Rnd M855 FAMAS";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_M855_tr_Red: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        displayName = "5.56mm 25Rnd M856 FAMAS (Red Tracer)";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };
    class 25Rnd_556x45_famas_M855_tr_Green: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        displayName = "5.56mm 25Rnd M856 FAMAS (Tracer Green)";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };
    class 25Rnd_556x45_famas_M855_tr_Orange: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        displayName = "5.56mm 25Rnd M856 FAMAS (Tracer Orange)";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };
    class 25Rnd_556x45_famas_M855_tr_White: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red {
        ammo = "UK3CB_556x45_Ball_Tracer_White";
        author = "PB & 3CB & Red Hammer Studios & johnb43";
        count = 25;
        displayName = "5.56mm 25Rnd M856 FAMAS (White Tracer)";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };
    class 25Rnd_556x45_famas_M855_tr_Yellow: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        displayName = "5.56mm 25Rnd M856 FAMAS (Tracer Yellow)";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_M855A1: rhs_mag_30Rnd_556x45_M855A1_Stanag {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        displayName = "5.56mm 25Rnd M855A1 FAMAS";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_M855A1_tr_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        displayName = "5.56mm 25Rnd M856A1 FAMAS (Red Tracer)";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };
    class 25Rnd_556x45_famas_M855A1_tr_Green: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        displayName = "5.56mm 25Rnd M856A1 FAMAS (Green Tracer)";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };
    class 25Rnd_556x45_famas_M855A1_tr_Orange: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        displayName = "5.56mm 25Rnd M856A1 FAMAS (Orange Tracer)";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };
    class 25Rnd_556x45_famas_M855A1_tr_White: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
        ammo = "UK3CB_556x45_Ball_Tracer_White";
        author = "PB & 3CB & Red Hammer Studios & johnb43";
        count = 25;
        displayName = "5.56mm 25Rnd M856A1 FAMAS (White Tracer)";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };
    class 25Rnd_556x45_famas_M855A1_tr_Yellow: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        displayName = "5.56mm 25Rnd M856A1 FAMAS (Yellow Tracer)";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_Mk262: rhs_mag_30Rnd_556x45_Mk262_Stanag {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        displayName = "5.56mm 25Rnd Mk262 Mod 1 FAMAS";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_Mk318: rhs_mag_30Rnd_556x45_Mk318_Stanag {
        author = "PB & Red Hammer Studios & johnb43";
        count = 25;
        displayName = "5.56mm 25Rnd Mk318 Mod 0 FAMAS";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_IR_DIM: 25Rnd_556x45_famas_M855 {
        ammo = "rhssaf_ammo_556x45_Ball_Tracer_Dim";
        displayName = "5.56mm 25Rnd Tracer IR-DIM FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        tracersEvery = 1;
    };
};
