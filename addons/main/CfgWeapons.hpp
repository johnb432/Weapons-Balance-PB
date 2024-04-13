class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };
    class PB_QIN_CZ_BREN2_Base: Rifle_Base_F {
        magazineWell[] += {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
        class WeaponSlotsInfo;
    };
    class PB_QIN_CZ_BREN2_556_11: PB_QIN_CZ_BREN2_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 64.1;
        };
    };
    class PB_QIN_CZ_BREN2_556_14: PB_QIN_CZ_BREN2_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 68.6;
        };
    };

    class PB_QIN_CZ_BREN2_762_Base: PB_QIN_CZ_BREN2_Base {
        magazineWell[] += {"AK_762x39","CBA_762x39_AK","CBA_762x39_RPK"};
        class WeaponSlotsInfo;
    };
    class PB_QIN_CZ_BREN2_762_8: PB_QIN_CZ_BREN2_762_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 62.6;
        };
    };
    class PB_QIN_CZ_BREN2_762_14: PB_QIN_CZ_BREN2_762_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 66.1;
        };
    };

    class PB_QIN_CZ_BREN2_762_GL_Base: PB_QIN_CZ_BREN2_762_Base {
        class WeaponSlotsInfo;
    };
    class PB_QIN_CZ_BREN2_762_14_GL: PB_QIN_CZ_BREN2_762_GL_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 99.1;
        };
    };

    class PB_ARM1_BASE: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_AK"};
    };
    class PB_ARM1: PB_ARM1_BASE {
        rhs_npz = "";
        class WeaponSlotsInfo {
            delete rhs_npz_slot;
        };
    };
    class PB_ARM1_GL: PB_ARM1 {
        displayName = "AR-M1 (GP-25)";
        rhs_npz = "";
    };

    class rhs_weap_rpk74n;
    class rhs_weap_rpk74m: rhs_weap_rpk74n {
        class WeaponSlotsInfo;
    };
    class PB_LMG556: rhs_weap_rpk74m {
        magazineWell[] += {"CBA_556x45_AK"};
        rhs_fold = "";
        rhs_npz = "";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete rhs_npz_slot;
            class MuzzleSlot: asdg_MuzzleSlot_556 {};
        };
    };

    class PB_EF88: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80.7;
        };
    };
    class PB_EF88_GL: PB_EF88 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110.7;
        };
    };
    class PB_AUGA1: PB_EF88 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 78.5;
        };
    };

    class PB_c7_base: Rifle_Base_F {
        magazineWell[] += {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };

    class PB_C7M203: PB_c7_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 106;
        };
    };

    class PB_C9: Rifle_Base_F {
        magazineWell[] += {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","M249_556x45","CBA_556x45_MINIMI"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 155.5;
        };
    };

    class rhs_weap_XM2010;
    class PB_C14: rhs_weap_XM2010 {
        baseWeapon = "PB_C14";
    };

    class PB_K2: Rifle_Base_F {
        magazineWell[] += {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class PointerSlot {};
        };
    };

    class PB_K2GL: PB_K2 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 106;
        };
    };

    class PB_K2C1: Rifle_Base_F {
        magazineWell[] += {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 81.2;
        };
    };
    class PB_K2C1GL: PB_K2C1 {
        displayName = "Daewoo K2C1 (M203)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 114.2;
        };
    };

    class rhs_weap_lmg_minimi_railed;
    class rhs_weap_m249_pip: rhs_weap_lmg_minimi_railed {
        class WeaponSlotsInfo;
    };
    class PB_MINIMI_762: rhs_weap_m249_pip {
        magazineWell[] = {"M240_762x51","CBA_762x51_LINKS"};

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_762 {};
        };
    };

    class PB_G3: Rifle_Base_F {
        displayName = "HK G3A3 (RIS)";
        magazineWell[] += {"CBA_762x51_G3","CBA_762x51_G3_L","CBA_762x51_G3_XL"};
    };

    class PB_G36: Rifle_Base_F {
        displayName = "HK G36V (TAC)";
        magazineWell[] += {"CBA_556x45_G36","CBA_556x45_STANAG_2D_XL"};
    };
    class PB_G36_GL: PB_G36 {
        displayName = "HK G36V (TAC/AG36)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 106;
        };
    };

    class PB_GM10A4: Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    class PB_GM10A4_M203: PB_GM10A4 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 106;
        };
    };

    class PB_HK417: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_HK417","CBA_762x51_HK417_L","CBA_762x51_HK417_XL"};
    };

    class rhs_weap_mg42;
    class PB_MG3: rhs_weap_mg42 {
        magazineWell[] += {"CBA_762x51_LINKS","CBA_762x51_MG3"};
    };

    class PB_MG5: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 255.2;
        };
    };

    class LMG_Base_F;
    class PB_Negev: LMG_Base_F {
        displayName = "Negev NG-7R (Black)";
        magazineWell[] = {"CBA_762x54R_LINKS","PK_762x54R"};
        class WeaponSlotsInfo {
            mass = 163;
            class CowsSlot: asdg_OpticRail1913 {};
            class MuzzleSlot: asdg_MuzzleSlot_762 {};
        };
    };

    class PB_MSBS_Grot: Rifle_Base_F {
        magazineWell[] += {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };

    class RAHE_BASE_F;
    class PB_RAHEL: RAHE_BASE_F {
        magazineWell[] += {"CBA_762x51_SR25"};
    };

    class PB_MPT55: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class PB_MPT55SGL: PB_MPT55 {
        class WeaponSlotsInfo {
            mass = 114;
        };
    };
    class PB_MPT76: PB_MPT55 {
        magazineWell[] += {"M14_762x51","CBA_762x51_M14","CBA_762x51_M14_L","CBA_762x51_M14_XL"};
        class WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_762 {};
        };
    };

    class PB_RK62M2: Rifle_Base_F {
        displayName = "RK 62 M2";
        magazineWell[] += {"AK_762x39","CBA_762x39_AK","CBA_762x39_RPK"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 81;
        };
    };
    class PB_RK62: PB_RK62M2 {
        displayName = "RK 62";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 77;
        };
    };

    class PB_Famas_G2: Rifle_Base_F {
        ACE_barrelLength = 488;
        ACE_barrelTwist = 304.8;
        displayName = "FAMAS G2";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 84;
        };
    };
    class PB_Famas_G2_Grip: PB_Famas_G2 {
        displayName = "FAMAS G2 (Grip)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 87;
        };
    };
    class PB_Famas_G2_M203: PB_Famas_G2 {
        displayName = "FAMAS G2 (M203)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 117;
        };
    };

    class PB_Famas_F1: PB_Famas_G2 {
        displayName = "FAMAS F1";
        magazineWell[] += {"CBA_556x45_FAMAS"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 79.6;
            class CowsSlot: asdg_OpticRail1913 {};
            class PointerSlot: asdg_FrontSideRail {};
        };
    };
    class PB_Famas_F1_RIS: PB_Famas_F1 {
        displayName = "FAMAS F1 (RIS)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 81.6;
        };
    };
    class PB_Famas_F1_M203: PB_Famas_G2_M203 {
        displayName = "FAMAS F1 (M203)";
        magazines[] = {"PB_M855_Famas"};
        magazineWell[] = {"CBA_556x45_FAMAS"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 112.6;
        };
    };

    class PB_SCARL: Rifle_Base_F {
        magazineWell[] += {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 71.7;
        };
    };
    class PB_SCARL_GRIP: PB_SCARL {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 73.7;
        };
    };
    class PB_SCARL_GL: PB_SCARL {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 104.4;
        };
    };

    class arifle_TRG21_GL_F;
    class PB_GTAR21_EGLM_Black: arifle_TRG21_GL_F {
        baseWeapon = "PB_GTAR21_EGLM_Black";
    };
};
