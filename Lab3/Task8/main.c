/*
Author:         Axenvio
Date:           07.10.2023
Description:    Для двумерного массива из 49 элементов, который содержит случайные дробные значения от -40 до 90,
                с помощью функций найти: наименьший положительный элемент первых трех строк; сумму отрицательных
                элементов на побочной диагонали; количество элементов, которые меньше случайного элемента массива.
                Использовать только локальные переменные.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double get_min_positive_element(double array[7][7], double);

double get_sum_negative_elements(double array[7][7]);

int get_count_less(double array[7][7]);

int main() {
    srand(time(NULL));
    double array[7][7];
    double left_border = -40.0, right_border = 90.0;
    int cnt = 0;

    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) {
            array[i][j] = left_border + rand() * (right_border - left_border + 1.0) / RAND_MAX;
            printf("%7.2lf ", array[i][j]);
            cnt++;
            if (cnt % 7 == 0)
                printf("\n");
        }
    }

    printf("\nThe smallest positive element of the first three rows - %.2lf",
           get_min_positive_element(array, right_border));
    printf("\nThe sum of negative elements on the side diagonal - %.2lf",
           get_sum_negative_elements(array));
    printf("\nThe count of number that are less than a random number - %d",
           get_count_less(array));

    return 0;
}

double get_min_positive_element(double array[7][7], double right_border) {
    double min = right_border;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (array[i][j] < min && array[i][j] > 0) {
                min = array[i][j];
            }
        }
    }

    return min;
}

double get_sum_negative_elements(double array[7][7]) {
    int x = 6;
    double sum = 0;
    for (int i = 0; i < 7; ++i) {
        if (array[i][x] < 0) {
            sum += array[i][x];
        }
        x--;
    }

    return sum;
}

int get_count_less(double array[7][7]) {
    int line, column, count = 0;
    line = rand() % (6);
    column = rand() % (6);
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (array[i][j] < array[line][column]) {
                count++;
            }
        }
    }

    return count;
}

