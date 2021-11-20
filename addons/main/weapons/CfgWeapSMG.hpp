class fow_w_m1a1_thompson: fow_rifle_base {
    ACE_barrelLength = 267;
    ACE_barrelTwist = 406;
    displayName = "M1A1 Thompson";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_45ACP_Thompson_Stick"};
};
class fow_w_m1_thompson: fow_w_m1a1_thompson {
    displayName = "M1 Thompson";
};

class fow_w_m3: fow_rifle_base {
    ACE_barrelLength = 203.2;
    ACE_barrelTwist = 406;
    displayName = "M3";
    magazineWell[] += {"CBA_45ACP_Grease"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.5;
    };
};

class fow_w_m55_reising: fow_rifle_base {
    ACE_barrelLength = 279;
    ACE_barrelTwist = 406;
    displayName = "M55 Reising";
    magazineWell[] += {"CBA_45ACP_Reising"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 62;
    };
};

class fow_w_mp40: fow_rifle_base {
    ACE_barrelLength = 250;
    ACE_barrelTwist = 250;
    displayName = "MP 40";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_9x19_MP40"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 87.5;
    };
};

class fow_w_sten_mk2: fow_rifle_base {
    ACE_barrelLength = 196;
    ACE_barrelTwist = 250;
    displayName = "Sten Mk.II";
    magazineWell[] += {"CBA_9x19_STEN"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70.5;
    };
};
class fow_w_sten_mk5: fow_w_sten_mk2 {
    displayName = "Sten Mk.V";
};

class fow_w_type100: fow_rifle_base {
    ACE_barrelLength = 230;
    ACE_barrelTwist = 240;
    displayName = "Type 100 SMG";
    magazineWell[] += {"CBA_8x22_Type100"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 85;
    };
};
