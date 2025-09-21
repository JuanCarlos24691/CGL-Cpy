forward RestoreGlobalTextDrawings(const playerid);
public RestoreGlobalTextDrawings(const playerid) {
    RestoreAnimationAssistantInfo(playerid);
    RestoreATextDrawings(playerid);
    RestoreCompletedATextDrawings(playerid);
    RestoreAssistantInformation(playerid);
    RestoreRulesAssistantInfo(playerid);
    RestoreInventoryInformation(playerid);
    RestoreMoneyBangPlayerInfo(playerid);
    RestoreClanAssistantInfo(playerid);
    RestoreArmoryInformation(playerid);
    RestoreBankInformation(playerid);
    RestoreDrugDistributorsInfo(playerid);
    RestoreLVPlayerInformation(playerid);
    RestorePetsInformation(playerid);
    RestoreHospitalInformation(playerid, false);

    DestroyAdminAssistantTextDraw(playerid);
    return 1;
}