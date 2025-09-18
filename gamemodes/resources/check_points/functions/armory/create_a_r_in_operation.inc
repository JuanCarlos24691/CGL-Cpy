forward CreateARInOperation(const playerid);
public CreateARInOperation(const playerid) {
    if (armoryInformation[playerid][aRInOperation] != true)
        armoryInformation[playerid][aRInOperation] = true;
    return 1;
}