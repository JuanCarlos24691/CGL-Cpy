forward LoadAccountInformation(const playerid, const UniversalUniqueIdentifier, const Func:callBack<i>);
public LoadAccountInformation(const playerid, const UniversalUniqueIdentifier, const Func:callBack<i>) {
    inline const IMySQL_TQueryInline() {
        if (cache_num_rows() != 0) {
            cache_get_value_index_int(0, 0, accountInformation[playerid][UUID]);
            cache_get_value_index(0, 1, accountInformation[playerid][name]);
            cache_get_value_index_int(0, 2, accountInformation[playerid][skin]);
            cache_get_value_index_int(0, 3, accountInformation[playerid][level]);
            cache_get_value_index_int(0, 4, accountInformation[playerid][cashInHand]);
            cache_get_value_index_int(0, 5, accountInformation[playerid][cashInTheBank]);
            cache_get_value_index_int(0, 6, accountInformation[playerid][lifeInsurance]);
            cache_get_value_index_int(0, 7, accountInformation[playerid][inGame]);
            cache_get_value_index_int(0, 8, accountInformation[playerid][administrativeLevel]);
            cache_get_value_index_int(0, 9, accountInformation[playerid][onDuty]);
            cache_get_value_index_int(0, 10, accountInformation[playerid][warnings]);
            cache_get_value_index_int(0, 11, accountInformation[playerid][deaths]);
            cache_get_value_index_int(0, 12, accountInformation[playerid][killings]);
            cache_get_value_index_int(0, 13, accountInformation[playerid][jailTime]);
            cache_get_value_index_int(0, 14, accountInformation[playerid][muteTime]);
            cache_get_value_index_int(0, 15, accountInformation[playerid][banTime]);
            cache_get_value_index(0, 16, accountInformation[playerid][banReason]);
            cache_get_value_index(0, 17, accountInformation[playerid][banDate]);
            cache_get_value_index_int(0, 18, accountInformation[playerid][assignedClan]);
            cache_get_value_index_int(0, 19, accountInformation[playerid][weaponSlotOne]);
            cache_get_value_index_int(0, 20, accountInformation[playerid][ammoSlotOne]);
            cache_get_value_index_int(0, 21, accountInformation[playerid][weaponSlotTwo]);
            cache_get_value_index_int(0, 22, accountInformation[playerid][ammoSlotTwo]);
            cache_get_value_index_int(0, 23, accountInformation[playerid][weaponSlotThree]);
            cache_get_value_index_int(0, 24, accountInformation[playerid][ammoSlotThree]);
            cache_get_value_index_int(0, 25, accountInformation[playerid][weaponSlotFour]);
            cache_get_value_index_int(0, 26, accountInformation[playerid][ammoSlotFour]);
            cache_get_value_index_int(0, 27, accountInformation[playerid][weaponSlotFive]);
            cache_get_value_index_int(0, 28, accountInformation[playerid][ammoSlotFive]);
            cache_get_value_index_int(0, 29, accountInformation[playerid][weaponSlotSix]);
            cache_get_value_index_int(0, 30, accountInformation[playerid][ammoSlotSix]);
            cache_get_value_index_int(0, 31, accountInformation[playerid][weaponSlotSeven]);
            cache_get_value_index_int(0, 32, accountInformation[playerid][ammoSlotSeven]);
            cache_get_value_index_int(0, 33, accountInformation[playerid][weaponSlotEight]);
            cache_get_value_index_int(0, 34, accountInformation[playerid][ammoSlotEight]);
            cache_get_value_index_int(0, 35, accountInformation[playerid][weaponSlotNine]);
            cache_get_value_index_int(0, 36, accountInformation[playerid][ammoSlotNine]);
            cache_get_value_index_int(0, 37, accountInformation[playerid][weaponSlotTen]);
            cache_get_value_index_int(0, 38, accountInformation[playerid][ammoSlotTen]);
            cache_get_value_index_int(0, 39, accountInformation[playerid][weaponSlotEleven]);
            cache_get_value_index_int(0, 40, accountInformation[playerid][ammoSlotEleven]);
            cache_get_value_index_int(0, 41, accountInformation[playerid][weaponSlotTwelve]);
            cache_get_value_index_int(0, 42, accountInformation[playerid][ammoSlotTwelve]);
            cache_get_value_index_int(0, 43, accountInformation[playerid][weaponSlotThirteen]);
            cache_get_value_index_int(0, 44, accountInformation[playerid][ammoSlotThirteen]);
            cache_get_value_index_float(0, 45, accountInformation[playerid][armour]);
            cache_get_value_index_int(0, 46, accountInformation[playerid][drugs]);
            cache_get_value_index_int(0, 47, accountInformation[playerid][aspirin]);
            cache_get_value_index_int(0, 48, accountInformation[playerid][chlamydia]);
            cache_get_value_index_int(0, 49, accountInformation[playerid][gonorrhea]);
            cache_get_value_index_int(0, 50, accountInformation[playerid][syphilis]);
            cache_get_value_index_int(0, 51, accountInformation[playerid][condoms]);
            cache_get_value_index_int(0, 52, accountInformation[playerid][pet]);
            cache_get_value_index(0, 53, accountInformation[playerid][petName]);
        }

        @.callBack(cache_num_rows());
        Indirect_Release(callBack);
    }

    if (MySQL_TQueryInline(databaseConnection, using inline IMySQL_TQueryInline, "SELECT UUID, player_name, skin, level, cash_in_hand, cash_in_the_bank, life_insurance, in_game, administrative_level, on_duty, warnings, deaths, killings, jail_time, mute_time, ban_time, ban_reason, ban_date, assigned_clan, weapon_slot_one, ammo_slot_one, weapon_slot_two, ammo_slot_two, weapon_slot_three, ammo_slot_three, weapon_slot_four, ammo_slot_four, weapon_slot_five, ammo_slot_five, weapon_slot_six, ammo_slot_six, weapon_slot_seven, ammo_slot_seven, weapon_slot_eight, ammo_slot_eight, weapon_slot_nine, ammo_slot_nine, weapon_slot_ten, ammo_slot_ten, weapon_slot_eleven, ammo_slot_eleven, weapon_slot_twelve, ammo_slot_twelve, weapon_slot_thirteen, ammo_slot_thirteen, armour, drugs, aspirin, chlamydia, gonorrhea, syphilis, condoms, pet, pet_name FROM `accounts` WHERE UUID = %d", UniversalUniqueIdentifier))
        Indirect_Claim(callBack);
    return 1;
}