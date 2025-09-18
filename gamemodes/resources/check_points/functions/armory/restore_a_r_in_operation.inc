forward RestoreARInOperation(const playerid);
public RestoreARInOperation(const playerid) {
    if (armoryInformation[playerid][aRInOperation] != false)
        armoryInformation[playerid][aRInOperation] = false;
    return 1;
}