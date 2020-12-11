#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int h, m, amt = 0;
    printf("Enter the number of hours used: ");
    scanf("%d", &h);
    printf("\rEnter the number of minutes used: ");
    scanf("%d", &m);
    if(h >= 7 && m > 0)
    {
        printf("\rEnter valid hours!");
    }
    else if(h >= 5)
    {
        amt = amt + 200 + (h-5)*50 + m;
        printf("The cost of web browsing is: %d", amt);
    }
    else
    {
        amt = h*50 + m;
        printf("The cost of web browsing is: %d", amt);
    }
    return 0;
}