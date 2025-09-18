forward CreateDDInOperation(const playerid);
public CreateDDInOperation(const playerid) {
    if (drugDistributorsInformation[playerid][dDInOperation] != true)
        drugDistributorsInformation[playerid][dDInOperation] = true;
    return 1;
}