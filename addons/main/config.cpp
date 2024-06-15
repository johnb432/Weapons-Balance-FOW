#include "script_component.hpp"

#pragma hemtt flag pe23_ignore_has_include

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            #if __has_include("\Big_Three\addons\Big_Three_core\config.bin")
            "Big_Three_Core_Patch",
            "Big_Three_Weapons_Patch",
            "Big_Three_Weapons_GER_Patch",
            "Big_Three_Weapons_Japan_Patch",
            "Big_Three_Weapons_UK_Patch",
            "Big_Three_Weapons_USSR_Patch",
            "Big_Three_Weapons_US_Patch",
            #endif

            "fow_main",
            "fow_munitions_c",
            "fow_weapons_c"
        };
        author = "johnb43";
        authors[] = {
            "johnb43"
        };
        url = "https://github.com/johnb432/Weapons-Balance-FOW";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgAmmoDef.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazineWells.hpp"

// TODO: type 10 flare gun, type 14, webley, 1911 reload thingy
class CfgWeapons {
    class UGL_F;

    class Rifle_Base_F;
    class fow_rifle_base: Rifle_Base_F {
        class WeaponSlotsInfo;
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
