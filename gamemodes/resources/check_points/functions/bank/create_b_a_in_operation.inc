forward CreateBAInOperation(const playerid);
public CreateBAInOperation(const playerid) {
    if (bankInformation[playerid][bAInOperation] != true)
        bankInformation[playerid][bAInOperation] = true;
    return 1;
}