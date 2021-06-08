#include <stdio.h>
#include <math.h>

typedef struct Point {
    int x;
    int y;
} Point;

typedef struct Line {
    Point start, end;
} Line;

void accept(Line *l){
    scanf("%d-%d", &l->start.x, &l->start.y);
    scanf("%d-%d", &l->end.x, &l->end.y);}

int main() {
    Line lines[2];
    for(int i = 0; i < 2; i++)
        accept(&lines[i]);
    
    float d = (float) pow(pow((lines[1].start.x - lines[0].start.x), 2) + pow((lines[1].start.y - lines[0].start.y), 2), 0.5);
    printf("%.2f\n", d);

    printf("%d %d", lines[1].end.x - lines[0].end.x, lines[1].end.y - lines[0].end.y);
}
