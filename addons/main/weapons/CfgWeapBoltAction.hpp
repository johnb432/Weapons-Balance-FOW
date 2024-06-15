class fow_rifleBolt_base: fow_rifle_base {
    class WeaponSlotsInfo;
};
class fow_w_k98: fow_rifleBolt_base {
    ACE_barrelLength = 600;
    ACE_barrelTwist = 240;
    displayName = "K98k";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_792x57_K98"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
    };
};
class fow_w_k98_scoped: fow_w_k98 {
    displayName = "K98k (Optic)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 91;
    };
};

class fow_w_leeenfield_no4mk1: fow_rifleBolt_base {
    ACE_barrelLength = 640;
    ACE_barrelTwist = 254;
    displayName = "Lee-Enfield No.4 Mk.I";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_303B_LeeEn"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 92.4;
    };
};
class fow_w_leeenfield_no4mk1_redwood: fow_w_leeenfield_no4mk1 {
    displayName = "Lee-Enfield No.4 Mk.I (Red Wood)";
};
class fow_w_leeenfield_no5mk1_junglecarbine: fow_w_leeenfield_no4mk1 {
    ACE_barrelLength = 478;
    displayName = "Lee-Enfield No.5 Mk.I (Jungle Carbine)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70.5;
    };
};

class fow_w_m1903A1: fow_rifleBolt_base {
    ACE_barrelLength = 610;
    ACE_barrelTwist = 254;
    displayName = "M1903A1 Springfield";
    magazineWell[] += {"CBA_3006_Spring"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 88;
    };
};
class fow_w_m1903A1_sniper: fow_w_m1903A1 {
    displayName = "M1903A1 Springfield (Optic)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 93;
    };
};

class fow_w_type99: fow_rifleBolt_base {
    ACE_barrelLength = 657;
    ACE_barrelTwist = 254;
    displayName = "Type 99 Arisaka";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_77x58_Arisaka"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 83.6;
    };
    class fow_w_type2_gl: UGL_F{
        magazineWell[] = {"CBA_30mm_GL_Type99"};
    };
};
class fow_w_type99_sniper: fow_w_type99 {
    displayName = "Type 99 Arisaka (Optic)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 88.6;
    };
};
