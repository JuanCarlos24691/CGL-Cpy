forward UpdateAssault(bool:skipRequiredTime);
public UpdateAssault(bool:skipRequiredTime) {
    if (skipRequiredTime == false && (timeInformation[hour] != 0 || timeInformation[minute] != 0))
        return 1;

    RestoreAMapIcon();
    RestoreACheckPoint();

    CreateAMapIcon();
    CreateACheckPoint();
    return 1;
}