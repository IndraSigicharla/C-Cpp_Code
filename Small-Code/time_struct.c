#include <stdio.h>

typedef struct time{
    int hour;
    int min;
    int sec;
} time;

void take_time(time *t){
    scanf("%d:%d:%d", &t->hour, &t->min, &t->sec);}

void give_time(time t){
    printf("%d:%d:%d\n", t.hour, t.min, t.sec);}

void sorter(time timer[], int n){
    for(int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (timer[j].hour * 3600 + timer[j].min * 60 + timer[j].sec > timer[j + 1].hour * 3600 + timer[j + 1].min * 60 + timer[j + 1].sec){
                time temp;
                temp = timer[j];
                timer[j] = timer[j + 1];
                timer[j + 1] = temp;}}}}

int main(){
    int n;
    scanf("%d", &n);
    time timer[n];

    for(int i = 0; i < n; i++)
        take_time(&timer[i]);

    sorter(timer, n);

    give_time(timer[0]);
}
