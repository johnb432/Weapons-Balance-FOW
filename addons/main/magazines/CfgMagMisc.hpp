class fow_5Rnd_762x63: CA_Magazine {
    displayName = "5Rnd .30-06 M1903 Clip";
    _MASS(AMMO3006,5,RNDCLIP);
};

class fow_8Rnd_762x63: CA_Magazine {
    displayName = "8Rnd .30-06 M1 Garand Clip";
    _MASS(AMMO3006,8,RNDCLIP);
};
class fow_8Rnd_762x63_T: fow_8Rnd_762x63 {
    displayName = "8Rnd .30-06 M1 Garand Clip (Tracer)";
};

class fow_10Rnd_303: CA_Magazine {
    displayName = "10Rnd .303 Lee-Enfield Clip";
    _MASS(AMMO303B,10,RNDCLIP);
};

class fow_15Rnd_762x33: CA_Magazine {
    displayName = "15Rnd .30 M1 Carbine Mag";
    _MASS(AMMO30CAL,15,RND15MAGSMG);
};

class fow_5Rnd_77x58: CA_Magazine {
    displayName = "5Rnd 7.7x58mm Arisaka Clip";
    _MASS(AMMO77X58,5,RNDCLIP);
};

class fow_30Rnd_792x33: CA_Magazine {
    displayName = "30Rnd 7.92x33mm StG 44 Mag";
    _MASS(AMMO792X33,30,RND30MAGSMG);
};

class fow_5Rnd_792x57: CA_Magazine {
    displayName = "5Rnd 7.92x57mm Mauser Clip";
    _MASS(AMMO792X57,5,RNDCLIP);
};
class fow_20Rnd_792x57: fow_5Rnd_792x57 {
    displayName = "20Rnd 7.92x57mm FG 42 Mag";
    _MASS(AMMO792X57,20,RND20MAGLMG);
};

class fow_10nd_792x57: CA_Magazine {
    displayName = "10Rnd 7.92x57mm G43 Mag";
    _MASS(AMMO792X57,10,RND10MAGRIFLE);
};

class fow_6Rnd_12G_Slug: CA_Magazine {
    displayName = "6Rnd M37 12 Gauge Slug";
    _MASS(AMMO12GAUGE,6,RNDSHOTGUN);
};
class fow_6Rnd_12G_Pellets: fow_6Rnd_12G_Slug {
    displayName = "6Rnd M37 12 Gauge Pellets";
};

class fow_5Rnd_12G_Pellets: fow_6Rnd_12G_Pellets {
    displayName = "5Rnd M12 12 Gauge Pellets";
    _MASS(AMMO12GAUGE,5,RNDSHOTGUN);
};
class fow_5Rnd_12G_Slug: fow_6Rnd_12G_Slug {
    displayName = "5Rnd M12 12 Gauge Slug";
    _MASS(AMMO12GAUGE,5,RNDSHOTGUN);
    picture = "\fow\fow_weapons\m1912\data\UI\m_12g_s_ca.paa";
};
