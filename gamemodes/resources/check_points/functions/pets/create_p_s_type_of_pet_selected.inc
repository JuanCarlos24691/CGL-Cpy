forward CreatePSTypeOfPetSelected(const playerid, const newValue);
public CreatePSTypeOfPetSelected(const playerid, const newValue) {
    if (petsInformation[playerid][pSTypeOfPetSelected] != newValue)
        petsInformation[playerid][pSTypeOfPetSelected] = newValue;
    return 1;
}