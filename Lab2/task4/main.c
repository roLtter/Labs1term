#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    int count = 0;
    while (number != 0) {
        count++;
        number /= 10;
    }
    printf("%d\n", count);
    return 0;
}
