forward ProgressivelyDecrementTheLife(const playerid);
public ProgressivelyDecrementTheLife(const playerid) {
    new Float:health, Float:decrement = 2.0;
    GetPlayerHealth(playerid, health);

    if (health <= decrement)
        return SetPlayerHealth(playerid, 0.0);

    SetPlayerHealth(playerid, health - decrement);
    return 1;
}