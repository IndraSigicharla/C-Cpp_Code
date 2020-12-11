#include <stdio.h>
#include <stdlib.h>

int main()
{
    char m;
    scanf("%c", &m);
    if (m == 'b' || m == 'B')
    {
        printf("Battleship");
    }
    else if (m == 'c' || m == 'C')
    {
        printf("Cruiser");
    }
    else if (m == 'd' || m == 'D')
    {
        printf("Destroyer");
    }
    else if (m == 'f' || m == 'F')
    {
        printf("Frigate");
    }

    return 0;
}