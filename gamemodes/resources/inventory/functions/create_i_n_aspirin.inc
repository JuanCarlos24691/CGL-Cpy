forward CreateINAspirin(const playerid, const input[]);
public CreateINAspirin(const playerid, const input[]) {
    if (!isequal(inventoryInformation[playerid][iNAspirin], input, true))
        strcpy(inventoryInformation[playerid][iNAspirin], input);
    return 1;
}