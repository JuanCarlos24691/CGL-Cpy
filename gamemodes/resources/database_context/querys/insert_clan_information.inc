forward InsertClanInformation(const uniqueIdentifierOfTheNewClan, const leaderOfTheNewClan[], const nameOfTheNewClan[], const tagOfTheNewClan[], const argbOfTheNewClan, const hexadecimalOfTheNewClan[], const Func:callBack<i>);
public InsertClanInformation(const uniqueIdentifierOfTheNewClan, const leaderOfTheNewClan[], const nameOfTheNewClan[], const tagOfTheNewClan[], const argbOfTheNewClan, const hexadecimalOfTheNewClan[], const Func:callBack<i>) {
    inline const QueryInline() {
        @.callBack(cache_affected_rows());
        Indirect_Release(callBack);
    }

    if (MySQL_TQueryInline(databaseConnection, using inline QueryInline, "INSERT INTO clans (unique_clan_identifier, leader, name, tag, argb, hexadecimal) VALUES (%d, '%e', '%e', '%e', %d, '%e')", uniqueIdentifierOfTheNewClan, leaderOfTheNewClan, nameOfTheNewClan, tagOfTheNewClan, argbOfTheNewClan, hexadecimalOfTheNewClan))
        Indirect_Claim(callBack);
    return 1;
}