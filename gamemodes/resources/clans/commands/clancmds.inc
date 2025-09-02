#include <YSI_Coding\y_hooks>

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && clanAssistantInformation[playerid][inOperation])
        RestoreClanAssistantInfo(playerid);
    return 1;
}

YCMD:clancmds(playerid, params[], help) {
    RestoreClanAssistantInfo(playerid);
    CreateClanWizardTextDrawings(playerid);

    if (!clanAssistantInformation[playerid][inOperation])
        clanAssistantInformation[playerid][inOperation] = true;
    return 1;
}