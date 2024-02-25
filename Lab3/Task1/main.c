/*
 Author:      Axenvio
 Data:        06.10.2023
 Description: Заполнить целочисленный массив array_int[N] числами из диапазона [A; B] и массив array_double[N]
              дробными числами из диапазона [C; D]. Вывести массивы на экран в две строки. Вывести массивы в
              файл в два столбца в формате "array_int[индекс] = значение; array_double[индекс] = значение\n".
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE_ARRAY 32

int main() {
    int A = 25, B = 67, array_int[SIZE_ARRAY];
    double C, D, array_double[SIZE_ARRAY];

    srand(time(NULL));

    // Заполнение массива целыми числами
    for (int i = 0; i < SIZE_ARRAY; i++) {
        array_int[i] = A + rand() % (B - A + 1);
    }

    // Заполнение массива вещественными числами
    for (int i = 0; i < SIZE_ARRAY; i++) {
        array_double[i] = A + rand() * (B - A + 1.0) / RAND_MAX;
    }

    // Вывод в файл
    FILE *output = fopen("C:\\Users\\aksen\\Documents\\Lab\\Lab3\\Task1\\output.txt", "w");
    if (output == NULL) {
        printf("File reading ERROR");
    } else {
        for (int i = 0; i < SIZE_ARRAY; ++i) {
            fprintf(output, "Array_int [%d] - %d\tArray_double[%i] - %.2f\n", i + 1, array_int[i], i + 1, array_double[i]);
        }
    }
    fclose(output);

    return 0;
}
