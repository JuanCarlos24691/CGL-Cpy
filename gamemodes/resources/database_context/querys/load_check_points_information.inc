forward LoadCheckPointsInformation(const Func:callBack<i>);
public LoadCheckPointsInformation(const Func:callBack<i>) {
    inline const QueryInline() {
        for (new i = 0; i < MAX_CHECK_POINTS; i++)
            RestoreCheckPointInformation(i);

        if (cache_num_rows() > 0) {
            for (new i = 0; i <= cache_num_rows(); i++) {
                if (cache_num_rows() == MAX_CHECK_POINTS)
                    break;

                cache_get_value_index_int(i, 0, checkPointsInformation[i][type]);
                cache_get_value_index_int(i, 1, checkPointsInformation[i][inside]);
                cache_get_value_index_float(i, 2, checkPointsInformation[i][outsideXCoordinate]);
                cache_get_value_index_float(i, 3, checkPointsInformation[i][outsideYCoordinate]);
                cache_get_value_index_float(i, 4, checkPointsInformation[i][outsideZCoordinate]);
                cache_get_value_index_float(i, 5, checkPointsInformation[i][outsideAngle]);
                cache_get_value_index_float(i, 6, checkPointsInformation[i][insideXCoordinate]);
                cache_get_value_index_float(i, 7, checkPointsInformation[i][insideYCoordinate]);
                cache_get_value_index_float(i, 8, checkPointsInformation[i][insideZCoordinate]);
                cache_get_value_index_float(i, 9, checkPointsInformation[i][insideAngle]);
                cache_get_value_index_float(i, 10, checkPointsInformation[i][interactionZoneXCoordinate]);
                cache_get_value_index_float(i, 11, checkPointsInformation[i][interactionZoneYCoordinate]);
                cache_get_value_index_float(i, 12, checkPointsInformation[i][interactionZoneZCoordinate]);
                cache_get_value_index_float(i, 13, checkPointsInformation[i][interactionZoneAngle]);
            }
        }

        if (numberOfCheckPointsCreated != cache_num_rows())
            numberOfCheckPointsCreated = cache_num_rows();

        @.callBack(cache_num_rows());
        Indirect_Release(callBack);
    }

    if (MySQL_TQueryInline(databaseConnection, using inline QueryInline, "SELECT type, inside, outside_x_coordinate, outside_y_coordinate, outside_z_coordinate, outside_angle, inside_x_coordinate, inside_y_coordinate, inside_z_coordinate, inside_angle, interaction_zone_x_coordinate, interaction_zone_y_coordinate, interaction_zone_z_coordinate, interaction_zone_angle FROM `check_points`"))
        Indirect_Claim(callBack);
    return 1;
}