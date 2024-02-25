#include "stdio.h"
#include "time.h"
#include "stdlib.h"

#define LEFT (-61)
#define RIGHT 83
int main(){
    srand(time(0));
    FILE *file = fopen("values.txt", "w");
    int x1 = LEFT + rand() % (RIGHT - LEFT + 1), x2 = LEFT + rand() % (RIGHT - LEFT + 1);
    float y1 = LEFT + rand() * (RIGHT - LEFT + 1.0) / RAND_MAX;
    fprintf(file, "%d\n%d\n%lf\n", x1, x2, y1);
    fclose(file);
    return 0;
}
