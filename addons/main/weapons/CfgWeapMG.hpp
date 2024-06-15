// https://old.weaponsystems.net/weaponsystem/AA06%20-%20Bren.html
class fow_w_bren: fow_rifle_base {
    ACE_barrelLength = 635;
    ACE_barrelTwist = 254;
    ace_overheating_allowSwapBarrel = 1;
    ace_overheating_closedBolt = 0;
    displayName = "Bren Mk.II";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_303B_BREN"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 228.2;
    };
};

class fow_w_fg42: fow_rifle_base {
    ACE_barrelLength = 500;
    ACE_barrelTwist = 240;
    displayName = "FG 42";
    magazineWell[] += {"CBA_792x57_FG42"};
    class WeaponSlotsInfo {
        mass = 93;
    };
};

class fow_w_m1918a2: fow_rifle_base {
    ACE_barrelLength = 610;
    ACE_barrelTwist = 254;
    ace_overheating_closedBolt = 0;
    displayName = "M1918A2 BAR";
    magazineWell[] += {"CBA_3006_BAR"};
};
class fow_w_m1918a2_bak: fow_w_m1918a2 {
    displayName = "M1918A2 BAR (Bakelite)";
};

class fow_w_m1919: fow_rifle_base {
    ACE_barrelLength = 610;
    ACE_barrelTwist = 254;
    ace_overheating_allowSwapBarrel = 1;
    displayName = "M1919A4";
    magazineWell[] += {"CBA_3006_Belt"};
    class WeaponSlotsInfo;
};
class fow_w_m1919a4: fow_w_m1919 {
    displayName = "M1919A4";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 310;
    };
};
class fow_w_m1919a6: fow_w_m1919 {
    displayName = "M1919A6";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 330.7;
    };
};

class fow_w_mg34: fow_rifle_base {
    ACE_barrelLength = 627;
    ACE_barrelTwist = 240;
    ace_overheating_allowSwapBarrel = 1;
    ace_overheating_closedBolt = 0;
    displayName = "MG 34";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_792x57_LINKS"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 264.5;
    };
};

class fow_w_mg42: fow_rifle_base {
    ACE_barrelLength = 530;
    ACE_barrelTwist = 240;
    ace_overheating_allowSwapBarrel = 1;
    ace_overheating_closedBolt = 0;
    displayName = "MG 42";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_792x57_LINKS"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 254.5;
    };
};

class fow_w_type99_lmg: fow_rifle_base {
    ACE_barrelLength = 550;
    ACE_barrelTwist = 254;
    ace_overheating_allowSwapBarrel = 1;
    ace_overheating_closedBolt = 0;
    displayName = "Type 99 LMG";
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_77x58_Type99"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 299;
    };
};
