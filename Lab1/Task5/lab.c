#include <stdio.h>

int main(){
    int x1, x2, min;
    double y1, y2, y3, max;
    FILE *fp = fopen("data.txt", "r");
    fscanf(fp, "%d %d", &x1, &x2);
    fscanf(fp, "%lf %lf %lf", &y1, &y2, &y3);
    min = x1 < x2? x1 : x2;
    max = y1 > y2? y1 : y2;
    max = y3 > max? y3 : max;
    printf("min = %d\n", min);
    printf("max = %lf\n", max);
    return 0;
}