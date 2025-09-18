stock ReturnPlayerIp(const playerid) {
    new ipv4[16];
    GetPlayerIp(playerid, ipv4, 16);
    return ipv4;
}