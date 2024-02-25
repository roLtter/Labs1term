/*
Author:         Axenvio
Date:           15.10.2023
Description:    Поместить в символьный массив (строку) предложение и без помощи стандартных функций вывести каждое
                слово предложения на отдельной строке.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

// РАБОТАЕТ ТОЛЬКО С АНГЛИЙСКИМ ЯЗЫКОМ!!!

#define SIZE_ARRAY 255

int main() {

    char array[SIZE_ARRAY];
    gets(array);
    unsigned long long  N = strlen(array);

    for (int i = 0; i <= N; ++i) {
        if (isalpha(array[i])) {
            printf("%c",array[i]);
        } else {
            if (i == 0) {
                continue;
            }
            if (isalpha(array[i - 1])) {
                printf("\n");
            }
        }
    }

    return 0;
}
