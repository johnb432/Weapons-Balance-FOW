#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "fow_main",
            "fow_munitions_c",
            "fow_weapons_c"
        };
        author = "johnb43";
        url = "https://github.com/johnb432/Weapons-Balance-FOW";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        name = "Weapons Balance - Faces of War";
        author = "johnb43";
        tooltipOwned = "Weapons Balance - Faces of War";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-FOW";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_fow\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_fow\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_fow\addons\main\ui\logo_weapons_balance.paa";
    };
};

#include "CfgAmmoDef.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazineWells.hpp"

//type 10 flare gun, type 14, webley, 1911 reload thingy
class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
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
