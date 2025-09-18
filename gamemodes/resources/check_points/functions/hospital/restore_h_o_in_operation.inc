forward RestoreHOInOperation(const playerid);
public RestoreHOInOperation(const playerid) {
    if (hospitalInformation[playerid][hOInOperation] != false)
        hospitalInformation[playerid][hOInOperation] = false;
    return 1;
}