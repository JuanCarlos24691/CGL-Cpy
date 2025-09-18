forward CreateHOInSkinSelection(const playerid);
public CreateHOInSkinSelection(const playerid) {
    if (hospitalInformation[playerid][hOInSkinSelection] != true)
        hospitalInformation[playerid][hOInSkinSelection] = true;
    return 1;
}