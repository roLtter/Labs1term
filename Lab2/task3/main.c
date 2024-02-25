#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x = 7, rand_num, temp_x;
    srand(time(NULL));
    do {
        temp_x = x;
        rand_num = rand() % 100;
        x += rand_num;
        printf("%d + %d = %d\n", temp_x, rand_num, x);
    } while (x < 100);

    return 0;
}
