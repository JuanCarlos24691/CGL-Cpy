forward RestoreCCArgblColor(const index);
public RestoreCCArgblColor(const index) {
    if (clanColorInformation[index][cCArgbColor] != EOS)
        clanColorInformation[index][cCArgbColor] = EOS;
    return 1;
}