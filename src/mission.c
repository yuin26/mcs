#include <stdio.h>
#include "mission.h"

enum MissionStatus {
    READY,
    RUNNING,
    COMPLETED,
    UNKNOWN
};

const char *missionStatusToString(enum MissionStatus status) {
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

char missionName[10][30];
enum MissionStatus missionStatus[10];
int missionCount = 0;

void getMissionNumber(int *missionNumber)
{
    printf("Mission Number: ");
    scanf("%d", missionNumber);
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
        printf("Mission %d: %s - %s\n", i + 1, missionName[i], missionStatusToString(missionStatus[i]));
    }
    printf("    \n");
}

void loadMission(void)
{
    int missionNumber = 0;
    printf("Mission Loaded.\n");
    printf("Enter the number of missions to load (max 10): ");
    scanf("%d", &missionNumber);
    if (missionNumber < 1) {
        printf("Minimum number of missions is 1. Setting mission count to 1.\n");
        missionCount = 1;
    } else if (missionNumber > 10) {
        printf("Maximum number of missions is 10. Setting mission count to 10.\n");
        missionCount = 10;
    } else {
        missionCount = missionNumber;
    }

    for (int i = 0; i < missionCount; i++) {
        missionStatus[i] = READY;
    }
    for (int i = 0; i < missionCount; i++) {
        printf("Mission %d Name: ", i + 1);
        scanf("%29s", missionName[i]);
    }
}

void startMission(void)
{
    int missionNumber = 0;
    getMissionNumber(&missionNumber);
    
    missionStatus[missionNumber-1] = RUNNING;

    printf("Mission Started.\n");
}

void stopMission(void)
{
    int missionNumber = 0;
    getMissionNumber(&missionNumber);

    missionStatus[missionNumber-1] = COMPLETED;
    printf("Mission Stopped.\n");
}

