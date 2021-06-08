#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seen[10] = {0};
    int rem;
    unsigned long int N;
    printf("Enter a number to check the frequency: ");
    scanf("%u", &N);
    while(N>0){
        rem = N%10;
        seen[rem] += 1;
        N /= 10;
        }
    for(int i = 0; i < 10; i++){
        printf("%d : %d\n", i, seen[i]);
    }
    return 0;
}