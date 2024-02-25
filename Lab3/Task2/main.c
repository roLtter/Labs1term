/*
 Author:        Axenvio
 Data:          06.10.2023
 Description:   Заполнить массив array[N] согласно формуле у = (х+3)/2, где х — это случайное число, у — это элемент
                массива. Вывести массив на экран в строку.
 */

#include <stdio.h>

#define N 16

int main() {
    int array[N];

    for (int i = 0; i < N; ++i) {
        array[i] = 2 * (i + 1) - 3;
    }

    for (int i = 0; i < N; ++i) {
        printf("%d ", array[i]);
    }

    return 0;
}
