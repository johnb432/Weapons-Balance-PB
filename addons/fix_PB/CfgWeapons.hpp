class asdg_MuzzleSlot_556;
class asdg_FrontSideRail;
class asdg_OpticRail1913;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };
    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };

    class hlc_ar15_base: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class ArmaReTex_C7: hlc_ar15_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_556 {};
        };
    };

    class QIN_CZ_BREN2_Base: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
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
        class WeaponSlotsInfo: WeaponSlotsInfo {};
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
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class QIN_CZ_BREN2_762_14_GL: QIN_CZ_BREN2_762_GL_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 99.1;
        };
    };

    class rhs_weap_ak74m_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class rhs_weap_ak74m: rhs_weap_ak74m_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class rhs_weap_akm: rhs_weap_ak74m {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class rhs_weap_pm63: rhs_weap_akm {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class ArmaReTex_PM63_Automatic: rhs_weap_pm63 {
        displayName = "PM-63 (Automatic)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 76.1;
        };
    };

    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class bg21_famas_base: arifle_MX_Base_F {
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
        displayName = "FAMAS F1 (Railed)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 81.6;
        };
    };
    class bg21_famas_HG: bg21_famas_base {
        displayName = "FAMAS F1 (HG)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 84.6;
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
        displayName = "FAMAS suppressor";
    };
    class prpl_famas_rds_grn: prpl_famas_rds {
        displayName = "FAMAS suppressor (Green)";
    };
    class prpl_famas_rds_tan: prpl_famas_rds {
        displayName = "FAMAS suppressor (Tan)";
    };
};
