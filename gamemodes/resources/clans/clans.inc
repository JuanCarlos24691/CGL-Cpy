#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++) {
        RestoreClanAssistantInfo(i);
        RestoreClanInvitationInfo(i);
    }

    new const listOfClanColorNames[MAX_CLANS_COLORS][] = {
        "Verde",          // 0
        "Amarillo",       // 1
        "Azul oscuro",    // 2
        "Azul claro",     // 3
        "Celeste",        // 4
        "Gris",           // 5
        "Rojo",           // 6
        "Rojo oscuro",    // 7
        "Naranja",        // 8
        "Violeta",        // 9
        "Marrón oscuro",  // 10
        "Cian",           // 11
        "Agua marina",    // 12
        "Verde lima",     // 13
        "Turquesa",       // 14
        "Ladrillo"        // 15
    };

    new const listOfClanhexadecimalColors[MAX_CLANS_COLORS][] = {
        "008000", // Verde
        "FFDE21", // Amarillo
        "0000FF", // Azul oscuro
        "90D5FF", // Azul claro
        "B2FFFF", // Celeste
        "878787", // Gris
        "FF2C2C", // Rojo
        "950606", // Rojo oscuro
        "FFA800", // Naranja
        "9400D3", // Violeta
        "654321", // Marrón oscuro
        "00FFFF", // Cian
        "66F1C2", // Agua marina
        "89F336", // Verde lima
        "40E0D0", // Turquesa
        "E35336"  // Ladrillo
    };

    new const listOfClanArgbColors[MAX_CLANS_COLORS] = {
        0x008000FF, // Verde
        0xFFDE21FF, // Amarillo
        0x0000FFFF, // Azul oscuro
        0x90D5FFFF, // Azul claro
        0xB2FFFFFF, // Celeste
        0x878787FF, // Gris
        0xFF2C2CFF, // Rojo
        0x950606FF, // Rojo oscuro
        0xFFA800FF, // Naranja
        0x9400D3FF, // Violeta
        0x654321FF, // Marrón oscuro
        0x00FFFFFF, // Cian
        0x66F1C2FF, // Aguamarina
        0x89F336FF, // Verde lima
        0x40E0D0FF, // Turquesa
        0xE35336FF  // Ladrillo
    };

    RestoreClanColorInformation();

    for (new i = 0; i < MAX_CLANS_COLORS; i++) {
        CreateCCHexadecimalColor(i, listOfClanhexadecimalColors[i]);
        CreateCCArgbColor(i, listOfClanArgbColors[i]);
        CreateCCNameColor(i, listOfClanColorNames[i]);
    }
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && clanAssistantInformation[playerid][cAInOperation])
        RestoreClanAssistantInfo(playerid);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreClanAssistantInfo(playerid);
    RestoreClanInvitationInfo(playerid);
    return 1;
}