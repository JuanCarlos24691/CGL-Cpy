forward CreateINCondoms(const playerid, const input[]);
public CreateINCondoms(const playerid, const input[]) {
    if (!isequal(inventoryInformation[playerid][iNCondoms], input, true))
        strcpy(inventoryInformation[playerid][iNCondoms], input);
    return 1;
}