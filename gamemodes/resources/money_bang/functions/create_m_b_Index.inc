forward CreateMBIndex(const index);
public CreateMBIndex(const index) {
    if (moneyBangInformation[mBIndex] != index)
        moneyBangInformation[mBIndex] = index;
    return 1;
}