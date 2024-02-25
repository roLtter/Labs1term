/*
 Author:        Axenvio
 Data:          10.10.2002
 Description:   Образовать новый одномерный массив из положительных элементов исходного одномерного массива
                из N элементов. Вывести на экран исходный и получившийся массив. При создании нового массива
                использовать динамическую память.
                Образовать новый одномерный массив из элементов исходного двумерного массива N*M.
                Элементы нового массива должны быть меньше среднего значения элементов исходного массива.
                Вывести на экран исходный и получившийся массив. При создании нового массива использовать
                динамическую память.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define N 10
#define M 7
#define LEFT_BORDER (-100)
#define RIGHT_BORDER 100

double get_average(int array[N][M]);

int get_count_el(double average, int array[N][M]);


int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "RUS");

    // Часть 1
    // Создание изначального массива
    printf("Часть 1\n");
    printf("Исходный массив:\n");
    int count = 0, h = 0;
    int array[N] = {0};
    for (int i = 0; i < N; ++i) {
        array[i] = LEFT_BORDER + rand() % (RIGHT_BORDER - LEFT_BORDER + 1);
        printf("%3d ", array[i]);
        if (array[i] > 0)
            count++;
    }

    printf("\n");

    // Создание нового динамического массива
    int *new_array;
    new_array = (int *) malloc((sizeof(int) * count));
    printf("Новый динамический массив:\n");
    for (int i = 0; i < N; ++i) {
        if (array[i] > 0) {
            new_array[h] = array[i];
            printf("%3d ", new_array[h++]);
        }
    }
    free(new_array);

    // Часть 2
    // Создание изначального 2-мерного массива
    printf("\n\nЧасть 2\n");
    printf("Исходный 2-мерный массив NxM\n");
    int array_2[N][M];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            array_2[i][j] = LEFT_BORDER + rand() % (RIGHT_BORDER - LEFT_BORDER + 1);
            printf("%5d ", array_2[i][j]);
        }
        printf("\n");
    }

    // Создание нового динамического массива
    printf("Среднее значение элементов исходного массива: %.2lf", get_average(array_2));
    printf("\nНовый массив, элементы которого меньше среднего значения исходного массива:\n");
    double average = get_average(array_2);
    int size = get_count_el(average, array_2);
    int *new_array2;
    new_array2 = (int *) malloc(sizeof(int) * size);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (array_2[i][j] < average) {
                new_array2[h] = array_2[i][j];
                printf("%5d", new_array2[h++]);
            }
        }
    }
    free(new_array2);
    return 0;
}

// Подсчет среднего арифметического значения
double get_average(int array[N][M]) {
    int sum = 0, count = 0, average;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            sum += array[i][j];
            count++;
        }
    }
    average = sum / count;
    return average;
}

// Подсчет размерности массива
int get_count_el(double average, int array[N][M]) {
    int count = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (array[i][j] < average)
                count++;
        }
    }
    return count;
}
