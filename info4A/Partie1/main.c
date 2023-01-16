#include <stdio.h>
#include <stdlib.h>
#include "robot.h"

int main(void)
{
    int min=-1;
    int max=1;
    affiche();
    for (int i = 0; i < 10; i++)
    {
        int direction = min + rand() % (max + 1 - min);
        printf("%d\n", direction);
    }
    
    return 0;
}
