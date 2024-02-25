/*
Author:         Axenvio
Date:           06.10.2023
Description:    Заполнить одномерный массив из N элементов случайными целыми числами от A  до B и вывести его в файл.
                Найти и дописать в файл сумму минимума и максимума этого массива.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 16
#define A (-100)
#define B 100

int main() {
    srand(time(NULL));
    int array[N];
    FILE *output = fopen("C:\\Users\\aksen\\Documents\\Lab\\Lab3\\Task5\\output.txt", "w");
    if (output == NULL)
        printf("File reading ERROR");
    else {
        // Заполнение массива
        for (int i = 0; i < N; ++i) {
            array[i] = A + rand() % (B - A + 1);
        }

        // Вывод элементов массива в файл
        for (int i = 0; i < N; ++i) {
            fprintf(output, "%d ", array[i]);
        }

        // Нахождение и запись в файл суммы максимального и минимального элементов массива
        int min = 0, max = 0, sum = 0;
        for (int i = 0; i < N; ++i) {
            if (array[i] < min)
                min = array[i];
            if (array[i] > max)
                max = array[i];
        }
        sum = max + min;
        fprintf(output, "\nThe sum of the maximum and minimum elements of the array = %d", sum);
    }
    fclose(output);
    return 0;
}
