#include <stdio.h>
#include "menu.h"
#include "mission.h"
#include "types.h"

int main(void) 
{
    int running = 1;

    while(running)
    {
        showMenu();

        int menu = getMenu();

        if (menu == 0)
        {
            running = 0;
        }
        else
        {
            dispatchMenu(menu);
        }
    }
    printf("Program Exit\n");
    return 0;
}




