#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "fow_main",
            "fow_munitions_c",
            "fow_weapons_c"
        };
        author = "johnb43";
        url = "https://github.com/johnb432/Weapons-Balance-FOW";
        VERSION_CONFIG;
    };
};

#include "CfgAmmoDef.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazineWells.hpp"

// TODO: type 10 flare gun, type 14, webley, 1911 reload thingy
class CfgWeapons {
    class UGL_F;

    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };
    class fow_rifle_base: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };

    #include "weapons\CfgWeapBoltAction.hpp"
    #include "weapons\CfgWeapMG.hpp"
    #include "weapons\CfgWeapSMG.hpp"
    #include "weapons\CfgWeapMisc.hpp"
};

class CfgMagazines {
    class CA_Magazine;

    #include "magazines\CfgMagMG.hpp"
    #include "magazines\CfgMagSMG.hpp"
    #include "magazines\CfgMagMisc.hpp"
};
