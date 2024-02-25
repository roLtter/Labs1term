#include "stdio.h"
#include "math.h"

#define STEP 1.7


int main() {
    double X, Y;
    double left_border = -22.0, right_border = 0.8;

    printf("X: ");
    for (double i = left_border; i <= right_border; i += STEP) {
        printf("%.1lf ", i);
    }
    printf("\nY: ");
    for (double i = left_border; i <= right_border; i += STEP) {
        Y = -8 * pow(i, 4) - 8 * pow(i, 3) - 7 * i + 3;
        printf("%.1lf ", Y);
    }
    printf("\n");

    double max_value;
    X = 0.1;
    max_value = -8 * pow(X, 4) - 8 * pow(X, 3) - 7 * X + 3;
    printf("Max value = %.1lf", max_value);
    return 0;
}
