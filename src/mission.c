#include <stdio.h>
#include "mission.h"
#include "types.h"

#define MAX_MISSIONS 10

static Mission missions[MAX_MISSIONS];
static int missionCount = 0;

const char *missionStatusToString(MissionStatus status) {
    switch (status) {
        case READY:
            return "READY";
        case RUNNING:
            return "RUNNING";
        case COMPLETED:
            return "COMPLETED";
        default:
            return "UNKNOWN";
    }
}

void getMissionNumber(int *missionNumber)
{
    printf("Mission Number: ");
    scanf("%d", missionNumber);
    if (missionCount == 0)
    {
    printf("No mission loaded.\n");
    return;
}  

    if (*missionNumber < 1) {
        printf("Minimum mission index is 1. Setting mission index to 1.\n");
        *missionNumber = 1;
    }
    if (*missionNumber > missionCount) {
        printf("Maximum mission index is %d. Setting mission index to %d.\n", missionCount, missionCount);
        *missionNumber = missionCount;
    }
}
void showStatus(void)
{
    printf("----------------\n");
    printf(" Current Status\n");
    printf("----------------\n");
    for (int i = 0; i < missionCount; i++) {
        printf("Mission %d: %s - %s\n", i + 1, missions[i].name, missionStatusToString(missions[i].status));
    }
    printf("    \n");
}

void loadMission(void)
{
    int missionNumber = 0;
    printf("Mission Loaded.\n");
    printf("Enter the number of missions to load (max %d): ", MAX_MISSIONS);
    scanf("%d", &missionNumber);
    if (missionNumber < 1) {
        printf("Minimum number of missions is 1. Setting mission count to 1.\n");
        missionCount = 1;
    } else if (missionNumber > MAX_MISSIONS) {
        printf("Maximum number of missions is %d. Setting mission count to %d.\n", MAX_MISSIONS, MAX_MISSIONS);
        missionCount = MAX_MISSIONS;
    } else {
        missionCount = missionNumber;
    }

    for (int i = 0; i < missionCount; i++) {
        missions[i].status = READY;
    }
    for (int i = 0; i < missionCount; i++) {
        printf("Mission %d Name: ", i + 1);
        scanf("%29s", missions[i].name);
    }
}

void startMission(void)
{
    int missionNumber = 0;
    getMissionNumber(&missionNumber);
    
    missions[missionNumber-1].status = RUNNING;

    printf("Mission Started.\n");
}

void stopMission(void)
{
    int missionNumber = 0;
    getMissionNumber(&missionNumber);

    missions[missionNumber-1].status = COMPLETED;
    printf("Mission Stopped.\n");
}

