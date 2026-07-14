#include <stdio.h>
#include "menu.h"
#include "mission.h"

int main(void) 
{
    int running = 1;

    while(running)
    {
        showMenu();

        int menu = getMenu();

        switch(menu)
        {
            case 1:
            showStatus();
            break;
            case 2:
            loadMission();
            break;
            case 3:
            startMission();
            break;
            case 4:
            stopMission();
			break;
            case 0:
            running = 0;
            break;
            default:
            printf("Invalid Menu, retry\n");
            break;
        }
    }
    printf("Program Exit\n");
    return 0;
}




