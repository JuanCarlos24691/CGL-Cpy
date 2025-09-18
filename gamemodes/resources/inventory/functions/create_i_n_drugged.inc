forward CreateINDrugged(const playerid, const input[]);
public CreateINDrugged(const playerid, const input[]) {
    if (!isequal(inventoryInformation[playerid][iNDrugged], input, true))
        strcpy(inventoryInformation[playerid][iNDrugged], input);
    return 1;
}