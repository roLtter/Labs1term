/*
 Author:        Axenvio
 Data:          07.10.2023
 Description:   Заполнить одномерный массив из N элементов из файла input.txt и вывести его на экран.
                Изменить элементы массива, обнулив все отрицательные элементы. Вывести измененный массив на экран
                на новой строке.

 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 16

int main() {
    srand(time(NULL));

    int array[N];

    FILE *input = fopen("C:\\Users\\aksen\\Documents\\Lab\\Lab3\\Task4\\input.txt", "r");

    if (input == NULL)
        printf("File reading ERROR");
    else {

        // Заполнение массива из файла
        for (int i = 0; i < N; ++i) {
            fscanf(input, "%d", &array[i]);
        }

        // Вывод элементов изначального массива
        for (int i = 0; i < N; ++i) {
            printf("%d ", array[i]);
        }

        printf("\n");

        // Обнуление отрицательных элементов и вывод нового массива
        for (int i = 0; i < N; ++i) {
            if (array[i] < 0)
                array[i] = 0;
            printf("%d ", array[i]);
        }
    }

    fclose(input);
    return 0;
}
