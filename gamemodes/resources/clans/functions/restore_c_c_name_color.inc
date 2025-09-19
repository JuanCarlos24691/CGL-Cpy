forward RestoreCCNameColor(const index);
public RestoreCCNameColor(const index) {
    if (clanColorInformation[index][cCNameColor] != EOS)
        clanColorInformation[index][cCNameColor] = EOS;
    return 1;
}