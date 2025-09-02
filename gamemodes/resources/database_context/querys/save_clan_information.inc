forward SaveClanInformation(const uniqueIdentifierOfTheSavedClan, const affectedUUID, const Func:callBack<i>);
public SaveClanInformation(const uniqueIdentifierOfTheSavedClan, const affectedUUID, const Func:callBack<i>) {
    inline const QueryInline() {
        @.callBack(cache_affected_rows());
        Indirect_Release(callBack);
    }

    if (MySQL_TQueryInline(databaseConnection, using inline QueryInline, "UPDATE `clans` SET unique_clan_identifier = %d, leader = '%e', sub_leader = '%e', name = '%e', tag = '%e', argb = %d, hexadecimal = '%e', level = %d, members = %d WHERE UUID = %d", clanInformation[uniqueIdentifierOfTheSavedClan][uniqueClanIdentifier], clanInformation[uniqueIdentifierOfTheSavedClan][leader], clanInformation[uniqueIdentifierOfTheSavedClan][subLeader], clanInformation[uniqueIdentifierOfTheSavedClan][name], clanInformation[uniqueIdentifierOfTheSavedClan][tag], clanInformation[uniqueIdentifierOfTheSavedClan][argb], clanInformation[uniqueIdentifierOfTheSavedClan][hexadecimal], clanInformation[uniqueIdentifierOfTheSavedClan][level], clanInformation[uniqueIdentifierOfTheSavedClan][members], affectedUUID))
        Indirect_Claim(callBack);
    return 1;
}