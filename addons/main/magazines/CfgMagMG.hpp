class fow_20Rnd_762x63: CA_Magazine {
    displayName = "20Rnd .30-06 M1918 BAR Mag";
    _MASS(AMMO3006,20,RND20MAGLMG);
};

class fow_30Rnd_762x63: CA_Magazine {
    ACE_isBelt = 1;
    displayName = "30Rnd .30-06 M1919 Belt";
    //_MASS(AMMO3006,30,RND30BELTMG);
    mass = 13;
};
class fow_50Rnd_762x63: fow_30Rnd_762x63 {
    displayName = "50Rnd .30-06 M1919 Belt";
    //_MASS(AMMO3006,50,RND50BELTMG);
};
class fow_100Rnd_762x63: fow_30Rnd_762x63 {
    displayName = "100Rnd .30-06 M1919 Belt";
    //_MASS(AMMO3006,100,RND100BELTMG);
};

class fow_30Rnd_303_bren: CA_Magazine {
    displayName = "30Rnd .303 Bren Mag";
    _MASS(AMMO303B,30,RND30MAGLMG);
};

class fow_30Rnd_77x58: CA_Magazine {
    displayName = "30Rnd 7.7x58mm Type 99 LMG Mag";
    _MASS(AMMO77X58,30,RND30MAGLMG);
};

class fow_50Rnd_792x57: CA_Magazine {
    ACE_isBelt = 1;
    displayName = "50Rnd 7.92x57mm MG Drum";
    //_MASS(AMMO792X57,50,RND50BELTMG);
    mass = 31;
};
