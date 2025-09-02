forward DrugDistributorsCPOutput(const playerid);
public DrugDistributorsCPOutput(const playerid) {
    if (drugDistributorsInformation[playerid][inOperation] && !IsPlayerInCheckpoint(playerid))
        RestoreDrugDistributorsInfo(playerid);
    return 1;
}