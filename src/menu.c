#include <stdio.h>
#include "menu.h"

void showMenu(void)
{
    printf("-----------------\n");
    printf("      Menu\n");
    printf("-----------------\n");
    printf("1. Show Status\n");
    printf("2. Load Mission\n");
    printf("3. Start Mission\n");
    printf("4. Stop Mission\n");
    printf("0. EXIT\n");
    printf("-----------------\n");
}

int getMenu(void)
{
    int menu = 0;
    printf("Select Menu: ");
    scanf("%d", &menu);

    if (menu < 0 || menu > 4)
    {
        menu = -1;
    }

    return menu;
}

