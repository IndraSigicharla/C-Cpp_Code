#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c, m, p, f;
    scanf("%d%d%d", &n, &c, &m);
    p = n/c;
    f = p/m;
    printf("%d", p + f);
    return 0;
}