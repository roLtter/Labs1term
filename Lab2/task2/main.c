#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    FILE *data = fopen("C:\\Users\\aksen\\Documents\\Lab\\Lab2\\task2\\data.txt", "w");

    srand(time(NULL));
    int left_border = 836, right_border = 1973;

    if (data == NULL)
        printf("File reading ERROR");
    else {
        int rand_num, count_rand_num = 0;

        for (int i = 0;; i++) {
            rand_num = left_border + rand() % (right_border - left_border + 1);

            if (rand_num % 10 == 9) {
                count_rand_num++;
                fprintf(data, "%d  ", rand_num);

                if (count_rand_num % 5 == 0)
                    printf("\n");
            }

            if (count_rand_num == 15)
                break;
        }
    }

    fclose(data);

    return 0;
}
