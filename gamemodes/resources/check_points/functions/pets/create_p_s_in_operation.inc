forward CreatePSInOperation(const playerid);
public CreatePSInOperation(const playerid) {
    if (petsInformation[playerid][pSInOperation] != true)
        petsInformation[playerid][pSInOperation] = true;
    return 1;
}