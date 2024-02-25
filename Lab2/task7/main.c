#include <stdio.h>
#include "math.h"

double function(double);

int main() {

    FILE *input = fopen("C:\\Users\\aksen\\Documents\\Lab\\Lab2\\task7\\input.txt", "r");
    if (input == NULL)
        printf("File reading ERROR");
    else {
        double X, Y, b;
        fscanf(input, "%lf %lf", &X, &Y);
        b = 1 / (Y - 7) + 1 / (X + 10);
        if ((X != -10 && Y != 7) && b > 0)
            printf("Q = ln(1 / (Y - 7) + 1 / (X + 10) = %lf", function(b));
        else {
            if (X == -10 || Y == 7)
                printf("Error! Subdivision on 0");
            if (b <= 0)
                printf("Error! The domain of the logarithm definition can contain only positive values");
        }
    }
    return 0;
}


double function(double b) {
    return log(b);
}