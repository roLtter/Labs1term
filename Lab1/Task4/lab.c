#include "stdio.h"

int main(){
    double x1, x2, x3, x4, x5;
    int y1, y2, y3;
    FILE *file = fopen("data.txt", "r");
    fscanf(file, "%lf %lf %lf %lf %lf", &x1, &x2, &x3, &x4, &x5);
    fscanf(file, "%d %d %d", &y1, &y2, &y3);
    printf("%lf %lf %lf %lf %lf\n", x1, x2, x3, x4, x5);
    printf("%d %d %d", y1, y2, y3);
    printf("\nThe sum of double is: %lf", x1 + x2 + x3 + x4 + x5);
    printf("\nThe sum of int is: %d", y1 + y2 + y3);
    return 0;
}