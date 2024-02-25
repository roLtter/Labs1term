#include <stdio.h>
#include <math.h>


double function(double);

double maximum(double, double, double);

int main() {

    double left_border = -22.0, right_border = 0.8, step = 1.7;

    for (double i = left_border; i <= right_border; i += step) {
        printf("%.1lf ", i);
    }

    printf("\n");

    for (double i = left_border; i <= right_border; i += step) {
        printf("%.1lf ", function(i));
    }

    printf("\n");

    printf("Maximum value function = %.1lf", maximum(left_border, right_border, step));

    return 0;
}

double function(double X) {
    double Y;
    Y = -8 * pow(X, 4) - 8 * pow(X, 2) - 7 * X + 3;
    return Y;
}

double maximum(double left_border, double right_border, double step) {
    double Y, max_Y = 0;
    for (double i = left_border; i < right_border; i += step) {
        Y = -8 * pow(i, 4) - 8 * pow(i, 2) - 7 * i + 3;
        if (Y > max_Y){
            max_Y = Y;
        }
    }
    return max_Y;
}