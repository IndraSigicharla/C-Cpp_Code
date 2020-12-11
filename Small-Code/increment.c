#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a, b, c;
    a = 4;
    b = 2;
    c = a++;
    printf("a = %d\n", c);
    c = ++b;
    printf("b = %d\n", c);
    c = -a+b--;
    printf("c = %d\n", c);
    return 0;
}