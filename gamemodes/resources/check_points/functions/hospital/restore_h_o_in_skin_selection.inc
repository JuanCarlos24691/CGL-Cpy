forward RestoreHOInSkinSelection(const playerid);
public RestoreHOInSkinSelection(const playerid) {
    if (hospitalInformation[playerid][hOInSkinSelection] != false)
        hospitalInformation[playerid][hOInSkinSelection] = false;
    return 1;
}