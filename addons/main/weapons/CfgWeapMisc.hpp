class fow_w_g43: fow_rifle_base {
    ACE_barrelLength = 550;
    ACE_barrelTwist = 240;
    displayName = "G43";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_792x57_G43","CBA_792x57_K98"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 97;
    };
};

class fow_w_m1_carbine: fow_rifle_base {
    ACE_barrelLength = 460;
    ACE_barrelTwist = 254;
    displayName = "M1 Carbine";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_30Carbine_M1Carbine"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 52;
    };
};

class fow_w_m1_garand: fow_rifle_base {
    ACE_barrelLength = 610;
    ACE_barrelTwist = 254;
    displayName = "M1 Garand";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_3006_Garand"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 94.8;
    };
    class fow_w_m7_gl: UGL_F {
        magazineWell[] = {"CBA_22mm_GL_M1"};
    };
};
class fow_w_m1_garand_l: fow_w_m1_garand {
    displayName = "M1 Garand (Light Wood)";
};
class fow_w_m1_garand_2: fow_w_m1_garand {
    displayName = "M1 Garand (Dark Wood)";
};

class fow_w_stg44: fow_rifle_base {
    ACE_barrelLength = 420;
    ACE_barrelTwist = 240;
    displayName = "StG 44";
    magazineWell[] += {"CBA_792x33_StG"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101.2;
    };
};

class fow_shotgun_base: fow_rifle_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class fow_w_ithaca37: fow_shotgun_base {
    discreteDistance[] = {50};
    discreteDistanceInitIndex = 1;
    displayName = "Ithaca 37";
    magazineWell[] = {"CBA_12g_1rnd","CBA_12g_2rnds","CBA_12g_3rnds","CBA_12g_4rnds","CBA_12g_5rnds"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.1;
    };
};
class fow_w_M1912: fow_shotgun_base {
    displayName = "Winchester M1912";
    magazineWell[] = {"CBA_12g_1rnd","CBA_12g_2rnds","CBA_12g_3rnds","CBA_12g_4rnds","CBA_12g_5rnds","CBA_12g_6rnds"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 75.5;
    };
};

class fow_w_piat: fow_rifle_base {
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_PIAT"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 320;
    };
};

class Launcher;
class Launcher_Base_F: Launcher {
    class WeaponSlotsInfo;
};
class fow_w_m1a1_bazooka: Launcher_Base_F {
    magazineWell[] += {"CBA_Bazooka"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 127.5;
    };
};
