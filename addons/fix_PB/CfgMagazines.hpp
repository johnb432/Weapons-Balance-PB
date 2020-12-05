class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class rhs_mag_30Rnd_556x45_M855_Stanag;
    class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red;
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
    };
    class 25Rnd_556x45_famas_tr: 30rnd_556x45_stanag {
        displayName = "5.56mm 25Rnd FAMAS Tracer";
    };

    class 25Rnd_556x45_famas_M855: rhs_mag_30Rnd_556x45_M855_Stanag {
        count = 25;
        displayName = "5.56mm 25Rnd M855 FAMAS";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_M855_tr: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red {
        count = 25;
        displayName = "5.56mm 25Rnd M856 (Tracer) FAMAS";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_M855A1: rhs_mag_30Rnd_556x45_M855A1_Stanag {
        count = 25;
        displayName = "5.56mm 25Rnd M855A1 FAMAS";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_M855A1_tr: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
        count = 25;
        displayName = "5.56mm 25Rnd M856A1 (Tracer) FAMAS";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_tr_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_Mk262: rhs_mag_30Rnd_556x45_Mk262_Stanag {
        count = 25;
        displayName = "5.56mm 25Rnd Mk262 Mod 1 FAMAS";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_icone.paa";
        mass = 8;
    };

    class 25Rnd_556x45_famas_Mk318: rhs_mag_30Rnd_556x45_Mk318_Stanag {
        count = 25;
        displayName = "5.56mm 25Rnd Mk318 Mod 0 FAMAS";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br/>Rounds: 25<br/>Used in: FAMAS";
        picture = "\bg21_famas_prplredux\data\inv\charg_icone.paa";
        mass = 8;
    };
};
