forward RestorePSTypeOfPetSelected(const playerid);
public RestorePSTypeOfPetSelected(const playerid) {
    if (petsInformation[playerid][pSTypeOfPetSelected] != 0)
        petsInformation[playerid][pSTypeOfPetSelected] = 0;
    return 1;
}