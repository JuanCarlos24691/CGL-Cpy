forward UpdatePS3DLabel(const playerid, const text[]);
public UpdatePS3DLabel(const playerid, const text[]) {
    if (IsValidDynamic3DTextLabel(playerPausedInformation[playerid][pS3DLabel]))
        UpdateDynamic3DTextLabelText(playerPausedInformation[playerid][pS3DLabel], -1, text);
    return 1;
}