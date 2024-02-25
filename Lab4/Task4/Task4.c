/*
Author:         Axenvio
Date:           12.10.2023
Description:    Для квадратного двумерного массива поменять местами первую и среднюю строку массива.
                Затем поменять местами последний столбец и вторую строку массива. Вывести на экран массив до
                изменений и после каждого из обменов.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>

#define N 5
#define LEFT_BORDER (-100)
#define RIGHT_BORDER 100



int main() {
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    int array[N][N], new_array[N][N];
    int temp;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            array[i][j] = LEFT_BORDER + rand() % (RIGHT_BORDER - LEFT_BORDER + 1);
            printf("%5d", array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            new_array[i][j] = array[i][j];
        }
    }

    printf("\n");

    for (int j = 0; j < N; ++j) {
        temp = new_array[0][j];
        new_array[0][j] =new_array[2][j];
        new_array[2][j] = temp;
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%5d", new_array[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            temp = new_array[1][j];
            new_array[1][j] = new_array[i][4];
            new_array[i][4] = temp;
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%5d", new_array[i][j]);
        }
        printf("\n");
    }

    return 0;
}


