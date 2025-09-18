forward CreateINDrugs(const playerid, const input[]);
public CreateINDrugs(const playerid, const input[]) {
    if (!isqueal(inventoryInformation[playerid][iNDrugs], input, true))
        strcpy(inventoryInformation[playerid][iNDrugs], input);
    return 1;
}