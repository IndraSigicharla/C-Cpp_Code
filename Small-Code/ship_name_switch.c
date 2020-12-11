#include <stdio.h>
#include <stdlib.h>

int main()
{
    char m;
    scanf("%c", &m);
    switch (m)
    {
        case 'b' :
        case 'B' : printf("Battleship");
            break;
        case 'c' :
        case 'C' : printf("Cruiser");
            break;
        case 'd' :
        case 'D' : printf("Destroyer");
            break;
        case 'f' :
        case 'F' : printf("Frigate");
            break;
    }

    return 0;
}