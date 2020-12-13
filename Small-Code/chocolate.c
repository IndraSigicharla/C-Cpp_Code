#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c, m, p, f;
    printf("Enter the money Bob has: ");
    scanf(" %d", &n);
    printf("\rEnter the cost of one chocolate: ");
    scanf("%d", &c);
    printf("\rEnter the number of wrappers for a free chocolate: ");
    scanf("%d", &m);
    p = n/c;
    f = p/m;
    printf("The number of chocolates Bob can get is: %d", p + f);
    return 0;
}