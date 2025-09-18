forward CreateINDiseases(const playerid, const input[]);
public CreateINDiseases(const playerid, const input[]) {
    if (!isequal(inventoryInformation[playerid][iNDiseases], input, true))
        strcpy(inventoryInformation[playerid][iNDiseases], input);
    return 1;
}