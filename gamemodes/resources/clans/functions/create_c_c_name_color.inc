forward CreateCCNameColor(const index, const newNameColor[]);
public CreateCCNameColor(const index, const newNameColor[]) {
    if (isequal(clanColorInformation[index][cCNameColor], newNameColor))
        strcpy(clanColorInformation[index][cCNameColor], newNameColor);
    return 1;
}