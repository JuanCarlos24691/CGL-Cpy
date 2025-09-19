forward RestoreClanColorInformation();
public RestoreClanColorInformation() {
    for (new i = 0; i < MAX_CLANS_COLORS; i++) {
        RestoreCCArgblColor(i);
        RestoreCCNameColor(i);
        RestoreCCHexadecimalColor(i);
    }
    return 1;
}