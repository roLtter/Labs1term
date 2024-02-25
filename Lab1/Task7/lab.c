#include <stdio.h>
#include <math.h>
int main(){
    double a, b, sum = 0, L, x;
    scanf("%lf %lf %lf %lf", &a, &b, &L, &x);
    for (int n = 1; n <= 10; ++n){
        sum += (a*cos(M_PI*n*x/L) + b*sin(M_PI*n*x/L));
    }
    printf("%lf", sum);
    return 0;
}