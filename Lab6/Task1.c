/*
Author:        Axenvio
Date:           13.10.2023
Description:    Задать двумерный массив N*M и заполнить его целыми числами из диапазона [A, B]. Вывести на экран
                массив в прямоугольном виде. Вывести на экран массив в прямоугольном виде, так чтобы отображались
                только  элементы, которые больше среднего значения массива. Использовать функцию заполнения массива
                и две функции вывода массива на экран.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define M 6
#define N 5
#define A (-100)
#define B 100

void init_array(int [M][N]);

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    int array[M][N];
}

void init_array(int array[M][N]) {
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            array[i][j] = A + rand() % (B - A + 1);
        }
    }
}

void print_array(int array[M][N]) {

}
