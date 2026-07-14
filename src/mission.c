#include <stdio.h>
#include "mission.h"

void showStatus(void)
{
    printf("----------------\n");
    printf(" Current Status\n");
    printf("----------------\n");
    printf("Mission : READY\n\n");
}

void loadMission(void)
{
    printf("Mission Loaded.\n");
}

void startMission(void)
{
    printf("Mission Started.\n");
}

void stopMission(void)
{
    printf("Mission Stopped.\n");
}

