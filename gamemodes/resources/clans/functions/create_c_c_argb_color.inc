forward CreateCCArgbColor(const index, const newColor[]);
public CreateCCArgbColor(const index, const newColor[]) {
    if (isequal(clanColorInformation[index][cCArgbColor], newColor))
        strcpy(clanColorInformation[index][cCArgbColor], newColor);
    return 1;
}