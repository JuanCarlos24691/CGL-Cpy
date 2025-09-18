forward RestoreBAInOperation(const playerid);
public RestoreBAInOperation(const playerid) {
    if (bankInformation[playerid][bAInOperation] != false)
        bankInformation[playerid][bAInOperation] = false;
    return 1;
}