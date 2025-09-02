#include <YSI_Coding\y_hooks>

hook OnPlayerConnect(playerid) {
    switch (citiesInformation[selectedCity]) {
        case 0: va_SendClientMessage(playerid, -1, "Bienvenidos a "COLOR_RED""SERVER_NAME" "COLOR_WHITE"- "COLOR_GREEN"Bayside"COLOR_WHITE".");
        case 1: va_SendClientMessage(playerid, -1, "Bienvenidos a "COLOR_RED""SERVER_NAME" "COLOR_WHITE"- "COLOR_GREEN"El Quebrados"COLOR_WHITE".");
        case 2: va_SendClientMessage(playerid, -1, "Bienvenidos a "COLOR_RED""SERVER_NAME" "COLOR_WHITE"- "COLOR_GREEN"Las Payasadas"COLOR_WHITE".");
        case 3: va_SendClientMessage(playerid, -1, "Bienvenidos a "COLOR_RED""SERVER_NAME" "COLOR_WHITE"- "COLOR_GREEN"Las Barrancas"COLOR_WHITE".");
        case 4: va_SendClientMessage(playerid, -1, "Bienvenidos a "COLOR_RED""SERVER_NAME" "COLOR_WHITE"- "COLOR_GREEN"Fort Carson"COLOR_WHITE".");
        case 5: va_SendClientMessage(playerid, -1, "Bienvenidos a "COLOR_RED""SERVER_NAME" "COLOR_WHITE"- "COLOR_GREEN"Blueberry"COLOR_WHITE".");
        case 6: va_SendClientMessage(playerid, -1, "Bienvenidos a "COLOR_RED""SERVER_NAME" "COLOR_WHITE"- "COLOR_GREEN"Montgomery"COLOR_WHITE".");
        case 7: va_SendClientMessage(playerid, -1, "Bienvenidos a "COLOR_RED""SERVER_NAME" "COLOR_WHITE"- "COLOR_GREEN"Palomino Creek"COLOR_WHITE".");
        case 8: va_SendClientMessage(playerid, -1, "Bienvenidos a "COLOR_RED""SERVER_NAME" "COLOR_WHITE"- "COLOR_GREEN"Dillimore"COLOR_WHITE".");
        case 9: va_SendClientMessage(playerid, -1, "Bienvenidos a "COLOR_RED""SERVER_NAME" "COLOR_WHITE"- "COLOR_GREEN"Angel Pine"COLOR_WHITE".");
        case 10: va_SendClientMessage(playerid, -1, "Bienvenidos a "COLOR_RED""SERVER_NAME" "COLOR_WHITE"- "COLOR_GREEN"San Fierro"COLOR_WHITE".");
        case 11: va_SendClientMessage(playerid, -1, "Bienvenidos a "COLOR_RED""SERVER_NAME" "COLOR_WHITE"- "COLOR_GREEN"Los Santos"COLOR_WHITE".");
        case 12: va_SendClientMessage(playerid, -1, "Bienvenidos a "COLOR_RED""SERVER_NAME" "COLOR_WHITE"- "COLOR_GREEN"Las Venturas"COLOR_WHITE".");
    }

    va_SendClientMessage(playerid, -1, "Usa "COLOR_RED"/cmds "COLOR_WHITE"o "COLOR_RED"/reglas "COLOR_WHITE"para mas "COLOR_GREEN"Información"COLOR_WHITE".");
    return 1;
}