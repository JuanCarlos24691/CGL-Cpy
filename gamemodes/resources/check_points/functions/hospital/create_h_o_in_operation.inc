forward CreateHOInOperation(const playerid);
public CreateHOInOperation(const playerid) {
    if (hospitalInformation[playerid][hOInOperation] != false)
        hospitalInformation[playerid][hOInOperation] = false;
    return 1;
}