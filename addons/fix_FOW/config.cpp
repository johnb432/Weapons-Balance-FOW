#include "CfgAmmoDef.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazineWells.hpp"

class CfgPatches {
    class WB_fix_FOW {
        name = "Weapons balance - Fix FOW";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {
            "cba_main",
            "fow_main",
            "fow_munitions_c",
            "fow_weapons_c"
        };
        author = "johnb43";
    };
};

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };
    class fow_rifle_base: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };

    #include "CfgWeapBoltAction.hpp"
    #include "CfgWeapMG.hpp"
    #include "CfgWeapSMG.hpp"
    #include "CfgWeapMisc.hpp"
};

class CfgMagazines {
    class CA_Magazine;

    #include "CfgMagMG.hpp"
    #include "CfgMagSMG.hpp"
    #include "CfgMagMisc.hpp"
};
