forward RestoreCCHexadecimalColor(const index);
public RestoreCCHexadecimalColor(const index) {
    if (clanColorInformation[index][cCHexadecimalColor] != EOS)
        clanColorInformation[index][cCHexadecimalColor] = EOS;
    return 1;
}