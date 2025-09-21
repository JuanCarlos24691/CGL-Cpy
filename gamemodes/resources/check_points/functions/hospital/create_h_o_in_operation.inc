forward CreateHOInOperation(const playerid);
public CreateHOInOperation(const playerid) {
    if (hospitalInformation[playerid][hOInOperation] != true)
        hospitalInformation[playerid][hOInOperation] = true;
    return 1;
}