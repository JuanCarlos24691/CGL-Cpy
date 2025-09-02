forward InsertaccountInformation(const nameOfTheNewAccount[], const passwordForTheNewAccount[], const skinOfTheNewAccount, const levelOfTheNewAccount, const inGameOfTheNewAccount, const Func:callBack<i>);
public InsertaccountInformation(const nameOfTheNewAccount[], const passwordForTheNewAccount[], const skinOfTheNewAccount, const levelOfTheNewAccount, const inGameOfTheNewAccount, const Func:callBack<i>) {
    inline const QueryInline() {
        @.callBack(cache_affected_rows());
        Indirect_Release(callBack);
    }

    if (MySQL_TQueryInline(databaseConnection, using inline QueryInline, "INSERT INTO `accounts` (player_name, password, skin, level, in_game) VALUES('%e', '%e', %d, %d, %d)", nameOfTheNewAccount, passwordForTheNewAccount, skinOfTheNewAccount, levelOfTheNewAccount, inGameOfTheNewAccount))
        Indirect_Claim(callBack);
    return 1;
}