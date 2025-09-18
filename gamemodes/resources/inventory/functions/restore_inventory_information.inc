forward RestoreInventoryInformation(const playerid);
public RestoreInventoryInformation(const playerid) {
    RestoreINCashInTheBank(playerid);
    RestoreINDrugged(playerid);
    RestoreINDrugs(playerid);
    RestoreINInOperation(playerid);
    RestoreINLifeInsurance(playerid);
    RestoreINCondoms(playerid);
    RestoreINTextDrawings(playerid);
    RestoreINDiseases(playerid);
    RestoreINAspirin(playerid);
    return 1;
} 