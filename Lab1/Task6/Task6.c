#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n % 2 == 0 && n % 3 == 0){
        printf("Can be divided by 2 and 3\n");
        printf("Original number: %d\n", n);
        printf("Division results: %d and %d", n/2, n/3);
    }
    else if (n % 3 == 0){
        printf("Can be divided only by 3\n");
        printf("Original number: %d\n", n);
        printf("Division result: %d", n/3);
    }
    else {
        printf("Can be divided only by 2\n");
        printf("Original number: %d\n", n);
        printf("Division result: %d", n/2);
    }
    return 0;
}