forward RestoreLoginAttemptInformation(const playerid);
public RestoreLoginAttemptInformation(const playerid) {
    if (loginAttempts[playerid] != 0)
        loginAttempts[playerid] = 0;
    return 1;
}