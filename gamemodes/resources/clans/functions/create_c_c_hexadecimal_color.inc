forward CreateCCHexadecimalColor(const index, const newColor[]);
public CreateCCHexadecimalColor(const index, const newColor[]) {
    if (isequal(clanColorInformation[index][cCHexadecimalColor], newColor))
        strcpy(clanColorInformation[index][cCHexadecimalColor], newColor);
    return 1;
}