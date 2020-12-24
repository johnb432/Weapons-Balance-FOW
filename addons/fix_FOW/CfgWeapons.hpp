class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };

    class UK3CB_BAF_L110_762_Base: UK3CB_BAF_L110_Base {
        ACE_Overheating_allowSwapBarrel = 1;
        magazineWell[] = {"M240_762x51","CBA_762x51_LINKS"};
    };
    
};
