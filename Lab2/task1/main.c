#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *data = fopen("C:\\Users\\aksen\\Documents\\Lab\\Lab2\\task1\\data.txt", "r");
    int a, b, cnt = 0;
    if (data == NULL)
        printf("File reading ERROR");
    else {
        fscanf(data, "%d%d", &a, &b);
        for (int i = a; i <= b; i++) {
            printf("%d\n", i);
        }
        for (int i = a; i <= b; i++) {
                printf("%d ", i);
                cnt++;
                    if(cnt % 3 == 0) printf("\n");
        }
    }
    fclose(data);

    return 0;
}
