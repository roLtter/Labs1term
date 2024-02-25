#include <stdio.h>

int main() {

    char woman_names[10][20];
    for (int i = 0; i < 10; i++) {
        printf("Input name %d -", i + 1);
        scanf("%s", woman_names[i]);
    }

    for (int i = 0; i < 10; i++)
        printf("Name %d - %s\n", i + 1, woman_names[i]);
    return 0;
}
