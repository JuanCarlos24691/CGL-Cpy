YCMD:inv(playerid, params[], help) = inventario;
YCMD:inventario(playerid, params[], help) {
    if (inventoryInformation[playerid][inOperation])
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Ya tienes el inventario abierto.");

    ShowInventory(playerid);
    return 1;
}