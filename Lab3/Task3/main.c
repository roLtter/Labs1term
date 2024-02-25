/*
Author:         Axenvio
Date:           06.10.2023
Description:    Заполнить одномерный массив из N элементов случайными дробными числами от A до B.
                Вывести массив на экран в строку. Найти первое с начала массива отрицательное число и
                вывести его на экран, если таких чисел нет, то вывести сообщение о том, что отрицательных чисел
                не обнаружено. Использовать оператор break.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 16
#define A (-10)
#define B 100

int main() {
    double array[N];
    srand(time(NULL));
    // Заполнение массива дробными числами
    for (int i = 0; i < N; ++i) {
        array[i] = A + rand() * (B - A + 1.0) / RAND_MAX;
    }

    // Вывод элементов массива на экран
    for (int i = 0; i < N; ++i) {
        printf("%.2f ", array[i]);
    }

    // Поиск отрицательного числа
    int cnt = 0;
    for (int i = 0; i < N; ++i) {
        if (array[i] < 0) {
            printf("\nNegative number - %.2f", array[i]);
            cnt++;
            break;
        }
    }
    if (cnt == 0) printf("\nNegative numbers are not detected");

    return 0;
}
