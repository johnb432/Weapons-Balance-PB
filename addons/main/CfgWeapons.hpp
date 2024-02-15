class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_762R;
class rhs_russian_ak_barrel_slot;

class CfgWeapons {
    class Rifle_Base_F;
    class hlc_ar15_base: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class ArmaReTex_C7: hlc_ar15_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_556 {};
        };
    };
    class ArmaReTex_C8: hlc_ar15_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_556 {};
        };
    };

    class KARPB_TYPE20: hlc_ar15_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_556 {};
        };
    };

    class QIN_CZ_BREN2_Base: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class QIN_CZ_BREN2_556_11: QIN_CZ_BREN2_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 64.1;
        };
    };
    class QIN_CZ_BREN2_556_14: QIN_CZ_BREN2_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 68.6;
        };
    };

    class QIN_CZ_BREN2_762_Base: QIN_CZ_BREN2_Base {
        magazineWell[] += {"AK_762x39","CBA_762x39_AK","CBA_762x39_RPK"};
        class WeaponSlotsInfo;
    };
    class QIN_CZ_BREN2_762_8: QIN_CZ_BREN2_762_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 62.6;
        };
    };
    class QIN_CZ_BREN2_762_14: QIN_CZ_BREN2_762_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 66.1;
        };
    };

    class QIN_CZ_BREN2_762_GL_Base: QIN_CZ_BREN2_762_Base {
        class WeaponSlotsInfo;
    };
    class QIN_CZ_BREN2_762_14_GL: QIN_CZ_BREN2_762_GL_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 99.1;
        };
    };

    class rhs_weap_akm;
    class rhs_weap_pm63: rhs_weap_akm {
        class WeaponSlotsInfo;
    };
    class ArmaReTex_PM63_Automatic: rhs_weap_pm63 {
        displayName = "PM-63 (Automatic)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 76.1;
            class MuzzleSlot: asdg_MuzzleSlot_762R {};
            class PointerSlot: rhs_russian_ak_barrel_slot {};
        };
    };

    class PB_ARM1_BASE: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_AK"};
    };
    class PB_ARM1: PB_ARM1_BASE {
        rhs_npz = "";
        class LinkedItems {
            class LinkedItemsMuzzle {
                item = "hlc_muzzle_MAG58_Brake";
                slot = "MuzzleSlot";
            };
        };
        class WeaponSlotsInfo {
            delete rhs_npz_slot;
        };
    };
    class PB_ARM5: PB_ARM1_BASE {
        class LinkedItems {
            class LinkedItemsMuzzle {
                item = "hlc_muzzle_MAG58_Brake";
                slot = "MuzzleSlot";
            };
        };
    };

    class arifle_SPAR_01_base_F;
    class ArmaReTex_RAHEL: arifle_SPAR_01_base_F {
        magazineWell[] += {"CBA_762x51_SR25"};
    };

    class KARPB_MPT55: arifle_SPAR_01_base_F {
        magazineWell[] += {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
        class WeaponSlotsInfo;
    };
    class KARPB_MPT55SGL: arifle_SPAR_01_base_F {
        magazineWell[] += {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };
    class KARPB_MPT76: KARPB_MPT55 {
        magazineWell[] += {"M14_762x51","CBA_762x51_M14","CBA_762x51_M14_L","CBA_762x51_M14_XL"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_762 {};
        };
    };

    class KAR_RIFLE_RK62: Rifle_Base_F {
        displayName = "RK 62";
        magazineWell[] += {"AK_762x39","CBA_762x39_AK","CBA_762x39_RPK"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 77;
        };
    };

    class KAR_RIFLE_RK62M2: Rifle_Base_F {
        displayName = "RK 62 M2";
        magazineWell[] += {"AK_762x39","CBA_762x39_AK","CBA_762x39_RPK"};
        mass = 81;
    };

    class Rifle_Long_Base_F;
    class LMG_Zafir_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo;
    };
    class ArmaReTex_Negev: LMG_Zafir_F {
        magazineWell[] = {"M240_762x51","CBA_762x51_LINKS"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 163;
            class CowsSlot: asdg_OpticRail1913 {};
            class MuzzleSlot: asdg_MuzzleSlot_762 {};
        };
    };

    class arifle_MX_Base_F;
    class bg21_famas_base: arifle_MX_Base_F {
        ACE_barrelLength = 488;
        ACE_barrelTwist = 304.8;
        displayName = "FAMAS F1";
        magazineWell[] = {"CBA_556x45_FAMAS"};
        class WeaponSlotsInfo {
            class asdg_FrontSideRail_Prpl_Famas: asdg_FrontSideRail {};
            class asdg_OpticRail_Prpl_Famas: asdg_OpticRail1913 {};
        };
    };
    class bg21_famas1: bg21_famas_base {
        class WeaponSlotsInfo {
            allowedSlots[] = {901};
            mass = 79.6;
        };
    };
    class bg21_famas2: bg21_famas_base {
        displayName = "FAMAS F1 (Rail)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 81.6;
            class MuzzleSlot: asdg_MuzzleSlot_556 {};
        };
    };
    class bg21_famas_HG: bg21_famas_base {
        displayName = "FAMAS F1 (HG)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 84.6;
            class MuzzleSlot: asdg_MuzzleSlot_556 {};
        };
    };
    class bg21_famas_FS_blk: bg21_famas_HG {
        displayName = "FAMAS F1 FS (Black)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 82.6;
        };
    };
    class bg21_famas_FS_grn: bg21_famas_FS_blk {
        displayName = "FAMAS F1 FS (Green)";
    };
    class bg21_famas_FS_tan: bg21_famas_FS_blk {
        displayName = "FAMAS F1 FS (Tan)";
    };

    class muzzle_snds_H;
    class prpl_famas_rds: muzzle_snds_H {
        displayName = "FAMAS Suppressor";
    };
    class prpl_famas_rds_grn: prpl_famas_rds {
        displayName = "FAMAS Suppressor (Green)";
    };
    class prpl_famas_rds_tan: prpl_famas_rds {
        displayName = "FAMAS Suppressor (Tan)";
    };

    class arifle_TRG20_F;
    class CTAR21_Black: arifle_TRG20_F {
        displayName = "CTAR-21 (Black)";
    };

    class arifle_TRG21_GL_F;
    class GTAR21_EGLM_Black: arifle_TRG21_GL_F {
        displayName = "GTAR-21 EGLM (Black)";
    };

    class arifle_TRG21_F;
    class TAR21_Black: arifle_TRG21_F {
        displayName = "TAR-21 (Black)";
    };
};
