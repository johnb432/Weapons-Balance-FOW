class fow_30Rnd_45acp: CA_Magazine {
    displayName = "30Rnd .45ACP Mag";
    _MASS(AMMO45ACP,30,RND30MAGSMG);
};
class fow_30Rnd_45acp_T: fow_30Rnd_45acp {
    displayName = "30Rnd .45ACP Mag (Tracer)";
};

class fow_50Rnd_45acp: fow_30Rnd_45acp {
    displayName = "50Rnd .45ACP Thompson Drum";
    _MASS(AMMO45ACP,50,RND50DRUMSMG);
};
class fow_50Rnd_45acp_T: fow_50Rnd_45acp {
    displayName = "50Rnd .45ACP Thompson Drum (Tracer)";
};

class fow_20Rnd_45acp: CA_Magazine {
    displayName = "20Rnd .45ACP M55 Mag";
    _MASS(AMMO45ACP,20,RND20MAGSMG);
};

class fow_32Rnd_8x22: CA_Magazine {
    count = 30;
    displayName = "30Rnd 8x22mm Type 100 Mag";
    _MASS(AMMO8X22,30,RND30MAGSMG);
};

class fow_32Rnd_9x19_mp40: CA_Magazine {
    displayName = "32Rnd 9x19mm MP 40 Mag";
    _MASS(AMMO9X19,32,RND32MAGSMG);
};

class fow_32Rnd_9x19_sten: CA_Magazine {
    displayName = "32Rnd 9x19mm Sten Mag";
    _MASS(AMMO9X19,32,RND32MAGSMG);
};

class fow_33Rnd_9x19_owen: CA_Magazine {
    displayName = "33Rnd 9x19mm Owen Mag";
    _MASS(AMMO9X19,33,RND32MAGSMG);
};
