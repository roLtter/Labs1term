/*
Author:         Axenvio
Date:           07.10.2023
Description:    Для одномерного целочисленного массива из 50 элементов с помощью функций найти сумму всех элементов,
                количество элементов, которые больше среднего арифметического значения всех положительных элементов,
                минимальный элемент кратный пяти. Использовать только локальные переменные.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_sum(int *);

int get_count_elements(int *, int);

int get_average(int *);

int minimal_element(int []);

int main() {
    srand(time(NULL));
    int array[50];
    int left_border = -100, right_border = 100;

    // Заполнение массива
    for (int i = 0; i < 50; ++i) {
        array[i] = left_border + rand() % (right_border - left_border + 1);
    }

    int average = get_average(array);

    // Вывод всех необходимых значений
    printf("Sum of all elements = %d\n", get_sum(array));
    printf("The count of elements that are greater than the average of all positive elements = %d\n",
           get_count_elements(array, average));
    printf("the minimum element is a multiple of 5 = %d", minimal_element(array));
    return 0;
}

// Функция нахождения суммы всех элементов
int get_sum(int array[]) {
    int sum = 0;
    for (int i = 0; i < 50; ++i) {
        sum += array[i];
    }
    return sum;
}

// Подсчет количества элементов
int get_count_elements(int array[], int average) {
    int cnt = 0;
    for (int i = 0; i < 50; ++i) {
        if (array[i] > average)
            cnt++;
    }
    return cnt;
}

// Подсчет среднего арифметического значения
int get_average(int array[]) {
    int sum = 0, cnt = 0, average = 0;
    for (int i = 0; i < 50; ++i) {
        if (array[i] > 0) {
            cnt++;
            sum += array[i];
        }
    }
    average = sum / cnt;
    return average;
}

// Поиск минимального элемента, кратного 5
int minimal_element(int array[]) {
    int min = 101;
    for (int i = 0; i < 50; ++i) {
        if (array[i] < min && array[i] % 5 == 0) {
            min = array[i];
        }
    }
    return min;
}
