#include <stdio.h>
#include "menu.h"
#include "mission.h"
#include "types.h"

static Menu menuFunctions[] = {
    {1, "Show Status", showStatus},
    {2, "Load Mission", loadMission},
    {3, "Start Mission", startMission},
    {4, "Stop Mission", stopMission}
};

#define MENU_COUNT (sizeof(menuFunctions) / sizeof(menuFunctions[0]))

void showMenu(void)
{
    printf("-----------------\n");
    printf("      Menu\n");
    printf("-----------------\n");
    for (size_t i = 0; i < MENU_COUNT; i++)
    {
        printf("%d. %s\n", menuFunctions[i].id, menuFunctions[i].name);
    }
    printf("0. EXIT\n");
    printf("-----------------\n");
}

int getMenu(void)
{
    int menu = 0;
    printf("Select Menu: ");
    scanf("%d", &menu);

    if (menu < 0 || menu > (int)MENU_COUNT)
    {
        menu = -1;
    }

    return menu;
}

void dispatchMenu(int menu)
{
    if (menu > 0 && menu <= (int)MENU_COUNT)
    {
        menuFunctions[menu - 1].handler();
    }
    else
    {
        printf("Invalid menu selection. Please try again.\n");
    }
}
