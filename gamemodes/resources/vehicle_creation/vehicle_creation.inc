#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++) {
        for (new b = 0; b < MAX_PLAYER_VEHICLES; b++)
            playerVehicleCreationInfo[i][pVVehicles][b] = INVALID_VEHICLE_ID;

        playerVehicleCreationInfo[i][pVPrimaryColor] = -1;
        playerVehicleCreationInfo[i][pVSecondaryColor] = -1;
    }

    vehicleCreationInformation[0][vCModelId] = 400;
    vehicleCreationInformation[0][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[0][vCVehicleName], "landstal");

    vehicleCreationInformation[1][vCModelId]    = 401;
    vehicleCreationInformation[1][vCVehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[1][vCVehicleName], "bravura");

    vehicleCreationInformation[2][vCModelId]    = 402;
    vehicleCreationInformation[2][vCVehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[2][vCVehicleName], "buffalo");

    vehicleCreationInformation[3][vCModelId]    = 403;
    vehicleCreationInformation[3][vCVehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[3][vCVehicleName], "linerun");

    vehicleCreationInformation[4][vCModelId]    = 404;
    vehicleCreationInformation[4][vCVehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[4][vCVehicleName], "peren");

    vehicleCreationInformation[5][vCModelId]    = 405;
    vehicleCreationInformation[5][vCVehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[5][vCVehicleName], "sentinel");

    vehicleCreationInformation[6][vCModelId]    = 406;
    vehicleCreationInformation[6][vCVehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[6][vCVehicleName], "dumper");

    vehicleCreationInformation[7][vCModelId]    = 407;
    vehicleCreationInformation[7][vCVehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[7][vCVehicleName], "firetruk");

    vehicleCreationInformation[8][vCModelId]    = 408;
    vehicleCreationInformation[8][vCVehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[8][vCVehicleName], "trash");

    vehicleCreationInformation[9][vCModelId]    = 409;
    vehicleCreationInformation[9][vCVehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[9][vCVehicleName], "stretch");

    vehicleCreationInformation[10][vCModelId]   = 410;
    vehicleCreationInformation[10][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[10][vCVehicleName], "manana");

    vehicleCreationInformation[11][vCModelId]   = 411;
    vehicleCreationInformation[11][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[11][vCVehicleName], "infernus");

    vehicleCreationInformation[12][vCModelId]   = 412;
    vehicleCreationInformation[12][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[12][vCVehicleName], "voodoo");

    vehicleCreationInformation[13][vCModelId]   = 413;
    vehicleCreationInformation[13][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[13][vCVehicleName], "pony");

    vehicleCreationInformation[14][vCModelId]   = 414;
    vehicleCreationInformation[14][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[14][vCVehicleName], "mule");

    vehicleCreationInformation[15][vCModelId]   = 415;
    vehicleCreationInformation[15][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[15][vCVehicleName], "cheetah");

    vehicleCreationInformation[16][vCModelId]   = 416;
    vehicleCreationInformation[16][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[16][vCVehicleName], "ambulan");

    vehicleCreationInformation[17][vCModelId]   = 417;
    vehicleCreationInformation[17][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[17][vCVehicleName], "leviathn");

    vehicleCreationInformation[18][vCModelId]   = 418;
    vehicleCreationInformation[18][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[18][vCVehicleName], "moonbeam");

    vehicleCreationInformation[19][vCModelId]   = 419;
    vehicleCreationInformation[19][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[19][vCVehicleName], "esperant");

    vehicleCreationInformation[20][vCModelId]   = 420;
    vehicleCreationInformation[20][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[20][vCVehicleName], "taxi");

    vehicleCreationInformation[21][vCModelId]   = 421;
    vehicleCreationInformation[21][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[21][vCVehicleName], "washing");

    vehicleCreationInformation[22][vCModelId]   = 422;
    vehicleCreationInformation[22][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[22][vCVehicleName], "bobcat");

    vehicleCreationInformation[23][vCModelId]   = 423;
    vehicleCreationInformation[23][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[23][vCVehicleName], "mrwhoop");

    vehicleCreationInformation[24][vCModelId]   = 424;
    vehicleCreationInformation[24][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[24][vCVehicleName], "bfinject");

    vehicleCreationInformation[25][vCModelId]   = 425;
    vehicleCreationInformation[25][vCVehiclePrice]  = 1000000;
    strcpy(vehicleCreationInformation[25][vCVehicleName], "hunter");

    vehicleCreationInformation[26][vCModelId]   = 426;
    vehicleCreationInformation[26][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[26][vCVehicleName], "premier");

    vehicleCreationInformation[27][vCModelId]   = 427;
    vehicleCreationInformation[27][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[27][vCVehicleName], "enforcer");

    vehicleCreationInformation[28][vCModelId]   = 428;
    vehicleCreationInformation[28][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[28][vCVehicleName], "securica");

    vehicleCreationInformation[29][vCModelId]   = 429;
    vehicleCreationInformation[29][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[29][vCVehicleName], "banshee");

    vehicleCreationInformation[30][vCModelId]   = 430;
    vehicleCreationInformation[30][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[30][vCVehicleName], "predator");

    vehicleCreationInformation[31][vCModelId]   = 431;
    vehicleCreationInformation[31][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[31][vCVehicleName], "bus");

    vehicleCreationInformation[32][vCModelId]   = 432;
    vehicleCreationInformation[32][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[32][vCVehicleName], "rhino");

    vehicleCreationInformation[33][vCModelId]   = 433;
    vehicleCreationInformation[33][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[33][vCVehicleName], "barracks");

    vehicleCreationInformation[34][vCModelId]   = 434;
    vehicleCreationInformation[34][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[34][vCVehicleName], "hotknife");

    vehicleCreationInformation[35][vCModelId]   = 435;
    vehicleCreationInformation[35][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[35][vCVehicleName], "artict1");

    vehicleCreationInformation[36][vCModelId]   = 436;
    vehicleCreationInformation[36][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[36][vCVehicleName], "previon");

    vehicleCreationInformation[37][vCModelId]   = 437;
    vehicleCreationInformation[37][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[37][vCVehicleName], "coach");

    vehicleCreationInformation[38][vCModelId]   = 438;
    vehicleCreationInformation[38][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[38][vCVehicleName], "cabbie");

    vehicleCreationInformation[39][vCModelId]   = 439;
    vehicleCreationInformation[39][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[39][vCVehicleName], "stallion");

    vehicleCreationInformation[40][vCModelId]   = 440;
    vehicleCreationInformation[40][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[40][vCVehicleName], "rumpo");

    vehicleCreationInformation[41][vCModelId]   = 441;
    vehicleCreationInformation[41][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[41][vCVehicleName], "rcbandit");

    vehicleCreationInformation[42][vCModelId]   = 442;
    vehicleCreationInformation[42][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[42][vCVehicleName], "romero");

    vehicleCreationInformation[43][vCModelId]   = 443;
    vehicleCreationInformation[43][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[43][vCVehicleName], "packer");

    vehicleCreationInformation[44][vCModelId]   = 444;
    vehicleCreationInformation[44][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[44][vCVehicleName], "monster");

    vehicleCreationInformation[45][vCModelId]   = 445;
    vehicleCreationInformation[45][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[45][vCVehicleName], "admiral");

    vehicleCreationInformation[46][vCModelId]   = 446;
    vehicleCreationInformation[46][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[46][vCVehicleName], "squalo");

    vehicleCreationInformation[47][vCModelId]   = 447;
    vehicleCreationInformation[47][vCVehiclePrice]  = 1000000;
    strcpy(vehicleCreationInformation[47][vCVehicleName], "seaspar");

    vehicleCreationInformation[48][vCModelId]   = 448;
    vehicleCreationInformation[48][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[48][vCVehicleName], "pizzaboy");

    vehicleCreationInformation[49][vCModelId]   = 449;
    vehicleCreationInformation[49][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[49][vCVehicleName], "tram");

    vehicleCreationInformation[50][vCModelId]   = 450;
    vehicleCreationInformation[50][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[50][vCVehicleName], "artict2");

    vehicleCreationInformation[51][vCModelId]   = 451;
    vehicleCreationInformation[51][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[51][vCVehicleName], "turismo");

    vehicleCreationInformation[52][vCModelId]   = 452;
    vehicleCreationInformation[52][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[52][vCVehicleName], "speeder");

    vehicleCreationInformation[53][vCModelId]   = 453;
    vehicleCreationInformation[53][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[53][vCVehicleName], "reefer");

    vehicleCreationInformation[54][vCModelId]   = 454;
    vehicleCreationInformation[54][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[54][vCVehicleName], "tropic");

    vehicleCreationInformation[55][vCModelId]   = 455;
    vehicleCreationInformation[55][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[55][vCVehicleName], "flatbed");

    vehicleCreationInformation[56][vCModelId]   = 456;
    vehicleCreationInformation[56][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[56][vCVehicleName], "yankee");

    vehicleCreationInformation[57][vCModelId]   = 457;
    vehicleCreationInformation[57][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[57][vCVehicleName], "caddy");

    vehicleCreationInformation[58][vCModelId]   = 458;
    vehicleCreationInformation[58][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[58][vCVehicleName], "solair");

    vehicleCreationInformation[59][vCModelId]   = 459;
    vehicleCreationInformation[59][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[59][vCVehicleName], "topfun");

    vehicleCreationInformation[60][vCModelId]   = 460;
    vehicleCreationInformation[60][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[60][vCVehicleName], "skimmer");

    vehicleCreationInformation[61][vCModelId]   = 461;
    vehicleCreationInformation[61][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[61][vCVehicleName], "pcj600");

    vehicleCreationInformation[62][vCModelId]   = 462;
    vehicleCreationInformation[62][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[62][vCVehicleName], "faggio");

    vehicleCreationInformation[63][vCModelId]   = 463;
    vehicleCreationInformation[63][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[63][vCVehicleName], "freeway");

    vehicleCreationInformation[64][vCModelId]   = 464;
    vehicleCreationInformation[64][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[64][vCVehicleName], "rcbaron");

    vehicleCreationInformation[65][vCModelId]   = 465;
    vehicleCreationInformation[65][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[65][vCVehicleName], "rcraider");

    vehicleCreationInformation[66][vCModelId]   = 466;
    vehicleCreationInformation[66][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[66][vCVehicleName], "glendale");

    vehicleCreationInformation[67][vCModelId]   = 467;
    vehicleCreationInformation[67][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[67][vCVehicleName], "oceanic");

    vehicleCreationInformation[68][vCModelId]   = 468;
    vehicleCreationInformation[68][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[68][vCVehicleName], "sanchez");

    vehicleCreationInformation[69][vCModelId]   = 469;
    vehicleCreationInformation[69][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[69][vCVehicleName], "sparrow");

    vehicleCreationInformation[70][vCModelId]   = 470;
    vehicleCreationInformation[70][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[70][vCVehicleName], "patriot");

    vehicleCreationInformation[71][vCModelId]   = 471;
    vehicleCreationInformation[71][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[71][vCVehicleName], "quad");

    vehicleCreationInformation[72][vCModelId]   = 472;
    vehicleCreationInformation[72][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[72][vCVehicleName], "coastg");

    vehicleCreationInformation[73][vCModelId]   = 473;
    vehicleCreationInformation[73][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[73][vCVehicleName], "dinghy");

    vehicleCreationInformation[74][vCModelId]   = 474;
    vehicleCreationInformation[74][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[74][vCVehicleName], "hermes");

    vehicleCreationInformation[75][vCModelId]   = 475;
    vehicleCreationInformation[75][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[75][vCVehicleName], "sabre");

    vehicleCreationInformation[76][vCModelId]   = 476;
    vehicleCreationInformation[76][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[76][vCVehicleName], "rustler");

    vehicleCreationInformation[77][vCModelId]   = 477;
    vehicleCreationInformation[77][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[77][vCVehicleName], "zr350");

    vehicleCreationInformation[78][vCModelId]   = 478;
    vehicleCreationInformation[78][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[78][vCVehicleName], "walton");

    vehicleCreationInformation[79][vCModelId]   = 479;
    vehicleCreationInformation[79][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[79][vCVehicleName], "regina");

    vehicleCreationInformation[80][vCModelId]   = 480;
    vehicleCreationInformation[80][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[80][vCVehicleName], "comet");

    vehicleCreationInformation[81][vCModelId]   = 481;
    vehicleCreationInformation[81][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[81][vCVehicleName], "bmx");

    vehicleCreationInformation[82][vCModelId]   = 482;
    vehicleCreationInformation[82][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[82][vCVehicleName], "burrito");

    vehicleCreationInformation[83][vCModelId]   = 483;
    vehicleCreationInformation[83][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[83][vCVehicleName], "camper");

    vehicleCreationInformation[84][vCModelId]   = 484;
    vehicleCreationInformation[84][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[84][vCVehicleName], "marquis");

    vehicleCreationInformation[85][vCModelId]   = 485;
    vehicleCreationInformation[85][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[85][vCVehicleName], "baggage");

    vehicleCreationInformation[86][vCModelId]   = 486;
    vehicleCreationInformation[86][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[86][vCVehicleName], "dozer");

    vehicleCreationInformation[87][vCModelId]   = 487;
    vehicleCreationInformation[87][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[87][vCVehicleName], "maverick");

    vehicleCreationInformation[88][vCModelId]   = 488;
    vehicleCreationInformation[88][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[88][vCVehicleName], "newschop");

    vehicleCreationInformation[89][vCModelId]   = 489;
    vehicleCreationInformation[89][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[89][vCVehicleName], "rancher");

    vehicleCreationInformation[90][vCModelId]   = 490;
    vehicleCreationInformation[90][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[90][vCVehicleName], "fbiranch");

    vehicleCreationInformation[91][vCModelId]   = 491;
    vehicleCreationInformation[91][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[91][vCVehicleName], "virgo");

    vehicleCreationInformation[92][vCModelId]   = 492;
    vehicleCreationInformation[92][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[92][vCVehicleName], "greenwoo");

    vehicleCreationInformation[93][vCModelId]   = 493;
    vehicleCreationInformation[93][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[93][vCVehicleName], "jetmax");

    vehicleCreationInformation[94][vCModelId]   = 494;
    vehicleCreationInformation[94][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[94][vCVehicleName], "hotring");

    vehicleCreationInformation[95][vCModelId]   = 495;
    vehicleCreationInformation[95][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[95][vCVehicleName], "sandking");

    vehicleCreationInformation[96][vCModelId]   = 496;
    vehicleCreationInformation[96][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[96][vCVehicleName], "blistac");

    vehicleCreationInformation[97][vCModelId]   = 497;
    vehicleCreationInformation[97][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[97][vCVehicleName], "polmav");

    vehicleCreationInformation[98][vCModelId]   = 498;
    vehicleCreationInformation[98][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[98][vCVehicleName], "boxville");

    vehicleCreationInformation[99][vCModelId]   = 499;
    vehicleCreationInformation[99][vCVehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[99][vCVehicleName], "benson");

    vehicleCreationInformation[100][vCModelId]  = 500;
    vehicleCreationInformation[100][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[100][vCVehicleName], "mesa");

    vehicleCreationInformation[101][vCModelId]  = 501;
    vehicleCreationInformation[101][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[101][vCVehicleName], "rcgoblin");

    vehicleCreationInformation[102][vCModelId]  = 502;
    vehicleCreationInformation[102][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[102][vCVehicleName], "hotrina");

    vehicleCreationInformation[103][vCModelId]  = 503;
    vehicleCreationInformation[103][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[103][vCVehicleName], "hotrinb");

    vehicleCreationInformation[104][vCModelId]  = 504;
    vehicleCreationInformation[104][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[104][vCVehicleName], "bloodra");

    vehicleCreationInformation[105][vCModelId]  = 505;
    vehicleCreationInformation[105][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[105][vCVehicleName], "rnchlure");

    vehicleCreationInformation[106][vCModelId]  = 506;
    vehicleCreationInformation[106][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[106][vCVehicleName], "supergt");

    vehicleCreationInformation[107][vCModelId]  = 507;
    vehicleCreationInformation[107][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[107][vCVehicleName], "elegant");

    vehicleCreationInformation[108][vCModelId]  = 508;
    vehicleCreationInformation[108][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[108][vCVehicleName], "journey");

    vehicleCreationInformation[109][vCModelId]  = 509;
    vehicleCreationInformation[109][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[109][vCVehicleName], "bike");

    vehicleCreationInformation[110][vCModelId]  = 510;
    vehicleCreationInformation[110][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[110][vCVehicleName], "mtbike");

    vehicleCreationInformation[111][vCModelId]  = 511;
    vehicleCreationInformation[111][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[111][vCVehicleName], "beagle");

    vehicleCreationInformation[112][vCModelId]  = 512;
    vehicleCreationInformation[112][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[112][vCVehicleName], "cropdust");

    vehicleCreationInformation[113][vCModelId]  = 513;
    vehicleCreationInformation[113][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[113][vCVehicleName], "stunt");

    vehicleCreationInformation[114][vCModelId]  = 514;
    vehicleCreationInformation[114][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[114][vCVehicleName], "petro");

    vehicleCreationInformation[115][vCModelId]  = 515;
    vehicleCreationInformation[115][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[115][vCVehicleName], "rdtrain");

    vehicleCreationInformation[116][vCModelId]  = 516;
    vehicleCreationInformation[116][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[116][vCVehicleName], "nebula");

    vehicleCreationInformation[117][vCModelId]  = 517;
    vehicleCreationInformation[117][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[117][vCVehicleName], "majestic");

    vehicleCreationInformation[118][vCModelId]  = 518;
    vehicleCreationInformation[118][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[118][vCVehicleName], "buccanee");

    vehicleCreationInformation[119][vCModelId]  = 519;
    vehicleCreationInformation[119][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[119][vCVehicleName], "shamal");

    vehicleCreationInformation[120][vCModelId]  = 520;
    vehicleCreationInformation[120][vCVehiclePrice] = 1000000;
    strcpy(vehicleCreationInformation[120][vCVehicleName], "hydra");

    vehicleCreationInformation[121][vCModelId]  = 521;
    vehicleCreationInformation[121][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[121][vCVehicleName], "fcr900");

    vehicleCreationInformation[122][vCModelId]  = 522;
    vehicleCreationInformation[122][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[122][vCVehicleName], "nrg");

    vehicleCreationInformation[123][vCModelId]  = 523;
    vehicleCreationInformation[123][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[123][vCVehicleName], "copbike");

    vehicleCreationInformation[124][vCModelId]  = 524;
    vehicleCreationInformation[124][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[124][vCVehicleName], "cement");

    vehicleCreationInformation[125][vCModelId]  = 525;
    vehicleCreationInformation[125][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[125][vCVehicleName], "towtruck");

    vehicleCreationInformation[126][vCModelId]  = 526;
    vehicleCreationInformation[126][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[126][vCVehicleName], "fortune");

    vehicleCreationInformation[127][vCModelId]  = 527;
    vehicleCreationInformation[127][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[127][vCVehicleName], "cadrona");

    vehicleCreationInformation[128][vCModelId]  = 528;
    vehicleCreationInformation[128][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[128][vCVehicleName], "fbitruck");

    vehicleCreationInformation[129][vCModelId]  = 529;
    vehicleCreationInformation[129][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[129][vCVehicleName], "willard");

    vehicleCreationInformation[130][vCModelId]  = 530;
    vehicleCreationInformation[130][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[130][vCVehicleName], "forklift");

    vehicleCreationInformation[131][vCModelId]  = 531;
    vehicleCreationInformation[131][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[131][vCVehicleName], "tractor");

    vehicleCreationInformation[132][vCModelId]  = 532;
    vehicleCreationInformation[132][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[132][vCVehicleName], "combine");

    vehicleCreationInformation[133][vCModelId]  = 533;
    vehicleCreationInformation[133][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[133][vCVehicleName], "feltzer");

    vehicleCreationInformation[134][vCModelId]  = 534;
    vehicleCreationInformation[134][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[134][vCVehicleName], "remingtn");

    vehicleCreationInformation[135][vCModelId]  = 535;
    vehicleCreationInformation[135][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[135][vCVehicleName], "slamvan");

    vehicleCreationInformation[136][vCModelId]  = 536;
    vehicleCreationInformation[136][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[136][vCVehicleName], "blade");

    vehicleCreationInformation[137][vCModelId]  = 537;
    vehicleCreationInformation[137][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[137][vCVehicleName], "freight");

    vehicleCreationInformation[138][vCModelId]  = 538;
    vehicleCreationInformation[138][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[138][vCVehicleName], "streak");

    vehicleCreationInformation[139][vCModelId]  = 539;
    vehicleCreationInformation[139][vCVehiclePrice] = 1000000;
    strcpy(vehicleCreationInformation[139][vCVehicleName], "vortex");

    vehicleCreationInformation[140][vCModelId]  = 540;
    vehicleCreationInformation[140][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[140][vCVehicleName], "vincent");

    vehicleCreationInformation[141][vCModelId]  = 541;
    vehicleCreationInformation[141][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[141][vCVehicleName], "bullet");

    vehicleCreationInformation[142][vCModelId]  = 542;
    vehicleCreationInformation[142][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[142][vCVehicleName], "clover");

    vehicleCreationInformation[143][vCModelId]  = 543;
    vehicleCreationInformation[143][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[143][vCVehicleName], "sadler");

    vehicleCreationInformation[144][vCModelId]  = 544;
    vehicleCreationInformation[144][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[144][vCVehicleName], "firela");

    vehicleCreationInformation[145][vCModelId]  = 545;
    vehicleCreationInformation[145][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[145][vCVehicleName], "hustler");

    vehicleCreationInformation[146][vCModelId]  = 546;
    vehicleCreationInformation[146][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[146][vCVehicleName], "intruder");

    vehicleCreationInformation[147][vCModelId]  = 547;
    vehicleCreationInformation[147][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[147][vCVehicleName], "primo");

    vehicleCreationInformation[148][vCModelId]  = 548;
    vehicleCreationInformation[148][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[148][vCVehicleName], "cargobob");

    vehicleCreationInformation[149][vCModelId]  = 549;
    vehicleCreationInformation[149][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[149][vCVehicleName], "tampa");

    vehicleCreationInformation[150][vCModelId]  = 550;
    vehicleCreationInformation[150][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[150][vCVehicleName], "sunrise");

    vehicleCreationInformation[151][vCModelId]  = 551;
    vehicleCreationInformation[151][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[151][vCVehicleName], "merit");

    vehicleCreationInformation[152][vCModelId]  = 552;
    vehicleCreationInformation[152][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[152][vCVehicleName], "utility");

    vehicleCreationInformation[153][vCModelId]  = 553;
    vehicleCreationInformation[153][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[153][vCVehicleName], "nevada");

    vehicleCreationInformation[154][vCModelId]  = 554;
    vehicleCreationInformation[154][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[154][vCVehicleName], "yosemite");

    vehicleCreationInformation[155][vCModelId]  = 555;
    vehicleCreationInformation[155][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[155][vCVehicleName], "windsor");

    vehicleCreationInformation[156][vCModelId]  = 556;
    vehicleCreationInformation[156][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[156][vCVehicleName], "monstera");

    vehicleCreationInformation[157][vCModelId]  = 557;
    vehicleCreationInformation[157][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[157][vCVehicleName], "monsterb");

    vehicleCreationInformation[158][vCModelId]  = 558;
    vehicleCreationInformation[158][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[158][vCVehicleName], "uranus");

    vehicleCreationInformation[159][vCModelId]  = 559;
    vehicleCreationInformation[159][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[159][vCVehicleName], "jester");

    vehicleCreationInformation[160][vCModelId]  = 560;
    vehicleCreationInformation[160][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[160][vCVehicleName], "sultan");

    vehicleCreationInformation[161][vCModelId]  = 561;
    vehicleCreationInformation[161][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[161][vCVehicleName], "stratum");

    vehicleCreationInformation[162][vCModelId]  = 562;
    vehicleCreationInformation[162][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[162][vCVehicleName], "elegy");

    vehicleCreationInformation[163][vCModelId]  = 563;
    vehicleCreationInformation[163][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[163][vCVehicleName], "raindanc");

    vehicleCreationInformation[164][vCModelId]  = 564;
    vehicleCreationInformation[164][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[164][vCVehicleName], "rctiger");

    vehicleCreationInformation[165][vCModelId]  = 565;
    vehicleCreationInformation[165][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[165][vCVehicleName], "flash");

    vehicleCreationInformation[166][vCModelId]  = 566;
    vehicleCreationInformation[166][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[166][vCVehicleName], "tahoma");

    vehicleCreationInformation[167][vCModelId]  = 567;
    vehicleCreationInformation[167][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[167][vCVehicleName], "savanna");

    vehicleCreationInformation[168][vCModelId]  = 568;
    vehicleCreationInformation[168][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[168][vCVehicleName], "bandito");

    vehicleCreationInformation[169][vCModelId]  = 569;
    vehicleCreationInformation[169][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[169][vCVehicleName], "freiflat");

    vehicleCreationInformation[170][vCModelId]  = 570;
    vehicleCreationInformation[170][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[170][vCVehicleName], "streakc");

    vehicleCreationInformation[171][vCModelId]  = 571;
    vehicleCreationInformation[171][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[171][vCVehicleName], "kart");

    vehicleCreationInformation[172][vCModelId]  = 572;
    vehicleCreationInformation[172][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[172][vCVehicleName], "mower");

    vehicleCreationInformation[173][vCModelId]  = 573;
    vehicleCreationInformation[173][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[173][vCVehicleName], "duneride");

    vehicleCreationInformation[174][vCModelId]  = 574;
    vehicleCreationInformation[174][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[174][vCVehicleName], "sweeper");

    vehicleCreationInformation[175][vCModelId]  = 575;
    vehicleCreationInformation[175][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[175][vCVehicleName], "broadway");

    vehicleCreationInformation[176][vCModelId]  = 576;
    vehicleCreationInformation[176][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[176][vCVehicleName], "tornado");

    vehicleCreationInformation[177][vCModelId]  = 577;
    vehicleCreationInformation[177][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[177][vCVehicleName], "at400");

    vehicleCreationInformation[178][vCModelId]  = 578;
    vehicleCreationInformation[178][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[178][vCVehicleName], "dft30");

    vehicleCreationInformation[179][vCModelId]  = 579;
    vehicleCreationInformation[179][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[179][vCVehicleName], "huntley");

    vehicleCreationInformation[180][vCModelId]  = 580;
    vehicleCreationInformation[180][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[180][vCVehicleName], "stafford");

    vehicleCreationInformation[181][vCModelId]  = 581;
    vehicleCreationInformation[181][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[181][vCVehicleName], "bf400");

    vehicleCreationInformation[182][vCModelId]  = 582;
    vehicleCreationInformation[182][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[182][vCVehicleName], "newsvan");

    vehicleCreationInformation[183][vCModelId]  = 583;
    vehicleCreationInformation[183][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[183][vCVehicleName], "tug");

    vehicleCreationInformation[184][vCModelId]  = 584;
    vehicleCreationInformation[184][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[184][vCVehicleName], "petrotr");

    vehicleCreationInformation[185][vCModelId]  = 585;
    vehicleCreationInformation[185][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[185][vCVehicleName], "emperor");

    vehicleCreationInformation[186][vCModelId]  = 586;
    vehicleCreationInformation[186][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[186][vCVehicleName], "wayfarer");

    vehicleCreationInformation[187][vCModelId]  = 587;
    vehicleCreationInformation[187][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[187][vCVehicleName], "euros");

    vehicleCreationInformation[188][vCModelId]  = 588;
    vehicleCreationInformation[188][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[188][vCVehicleName], "hotdog");

    vehicleCreationInformation[189][vCModelId]  = 589;
    vehicleCreationInformation[189][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[189][vCVehicleName], "club");

    vehicleCreationInformation[190][vCModelId]  = 590;
    vehicleCreationInformation[190][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[190][vCVehicleName], "freibox");

    vehicleCreationInformation[191][vCModelId]  = 591;
    vehicleCreationInformation[191][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[191][vCVehicleName], "artict3");

    vehicleCreationInformation[192][vCModelId]  = 592;
    vehicleCreationInformation[192][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[192][vCVehicleName], "androm");

    vehicleCreationInformation[193][vCModelId]  = 593;
    vehicleCreationInformation[193][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[193][vCVehicleName], "dodo");

    vehicleCreationInformation[194][vCModelId]  = 594;
    vehicleCreationInformation[194][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[194][vCVehicleName], "rccam");

    vehicleCreationInformation[195][vCModelId]  = 595;
    vehicleCreationInformation[195][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[195][vCVehicleName], "launch");

    vehicleCreationInformation[196][vCModelId]  = 596;
    vehicleCreationInformation[196][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[196][vCVehicleName], "copcarla");

    vehicleCreationInformation[197][vCModelId]  = 597;
    vehicleCreationInformation[197][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[197][vCVehicleName], "copcarsf");

    vehicleCreationInformation[198][vCModelId]  = 598;
    vehicleCreationInformation[198][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[198][vCVehicleName], "policelv");

    vehicleCreationInformation[199][vCModelId]  = 599;
    vehicleCreationInformation[199][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[199][vCVehicleName], "policeru");

    vehicleCreationInformation[200][vCModelId]  = 600;
    vehicleCreationInformation[200][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[200][vCVehicleName], "picador");

    vehicleCreationInformation[201][vCModelId]  = 601;
    vehicleCreationInformation[201][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[201][vCVehicleName], "swatvan");

    vehicleCreationInformation[202][vCModelId]  = 602;
    vehicleCreationInformation[202][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[202][vCVehicleName], "alpha");

    vehicleCreationInformation[203][vCModelId]  = 603;
    vehicleCreationInformation[203][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[203][vCVehicleName], "phoenix");

    vehicleCreationInformation[204][vCModelId]  = 604;
    vehicleCreationInformation[204][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[204][vCVehicleName], "glenshit");

    vehicleCreationInformation[205][vCModelId]  = 605;
    vehicleCreationInformation[205][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[205][vCVehicleName], "sadlshit");

    vehicleCreationInformation[206][vCModelId]  = 606;
    vehicleCreationInformation[206][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[206][vCVehicleName], "bagboxa");

    vehicleCreationInformation[207][vCModelId]  = 607;
    vehicleCreationInformation[207][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[207][vCVehicleName], "bagboxb");

    vehicleCreationInformation[208][vCModelId]  = 608;
    vehicleCreationInformation[208][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[208][vCVehicleName], "tugstair");

    vehicleCreationInformation[209][vCModelId]  = 609;
    vehicleCreationInformation[209][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[209][vCVehicleName], "boxburg");

    vehicleCreationInformation[210][vCModelId]  = 610;
    vehicleCreationInformation[210][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[210][vCVehicleName], "farmtr1");

    vehicleCreationInformation[211][vCModelId]  = 611;
    vehicleCreationInformation[211][vCVehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[211][vCVehicleName], "utiltr1");
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreVehicleCreationInfo(playerid);
    return 1;
}

hook OnPlayerDeath(playerid, killerid, WEAPON:weapon) {
    RestoreVehicleCreationInfo(playerid);
    return 1;
}

hook OnVehicleDeath(vehicleid, killerid) {
    foreach (new i : Player) {
        for (new b = 0; b < MAX_PLAYER_VEHICLES; b++) {
            if (vehicleid == playerVehicleCreationInfo[i][pVVehicles][b]) {
                DestroyVehicle(playerVehicleCreationInfo[i][pVVehicles][b]);
                playerVehicleCreationInfo[i][pVVehicles][b] = INVALID_VEHICLE_ID;
            }
        }
    }
    return 1;
}