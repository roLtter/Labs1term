/*
 Author:        Axenvio
 Data:
 Description:   Ќайти номер строки двумерного массива, котора€ содержит максимальный из минимальных элементов строк.
                ¬ывести на экран исходный массив, промежуточный массив и конечный результат.
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>

#define RIGHT_BORDER 100

void init_array(int **array, int line, int column);

void print_array(int **array, int line, int column);

int  get_min_el_array(int **array, int *min_el_array, int line, int column);

void print_min_el_array(int *min_el_array, int line);

void get_line_num(const int *min_el_array, int line);

int main() {
    setlocale(LC_ALL, "RUS");
    srand(time(NULL));

    int line, column;

    printf("¬едите размерность массива N x M:\n");
    printf("N =");
    scanf("%d", &line);
    printf("M =");
    scanf("%d", &column);


    int **array;
    array = (int **) malloc(sizeof(int *) * line);
    for (int i = 0; i < line; ++i) {
        array[i] = (int *) malloc(sizeof(int *) * column);
    }
    init_array(array, line, column);
    print_array(array, line, column);

    printf("\n");

    int *min_el_array;
    min_el_array = (int *) malloc((sizeof(int) * line));
    get_min_el_array(array, min_el_array, line, column);
    print_min_el_array(min_el_array, line);

    printf("\n");
    get_line_num(min_el_array, line);

    free(array);
    free(min_el_array);

    return 0;
}

void init_array(int **array, int line, int column) {

    for (int i = 0; i < line; ++i) {
        for (int j = 0; j < column; ++j) {
            array[i][j] = rand() % (RIGHT_BORDER + 1);
        }
    }
}

void print_array(int **array, int line, int column) {
    for (int i = 0; i < line; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%5d", array[i][j]);
        }
        printf("\n");
    }
}

int get_min_el_array(int **array, int *min_el_array, int line, int column) {
    int temp = RIGHT_BORDER;
    for (int i = 0; i < line; ++i) {
        for (int j = 0; j < column; ++j) {
            if (array[i][j] < temp)
                temp = array[i][j];
        }
        min_el_array[i] = temp;
        temp = RIGHT_BORDER;
    }
    return *min_el_array;
}

void print_min_el_array(int *min_el_array, int line) {
    for (int i = 0; i < line; ++i) {
        printf("%5d", min_el_array[i]);
    }
}

void get_line_num(const int *min_el_array, int line) {
    int temp = 0, line_num = 0;
    for (int i = 0; i < line; ++i) {
        if (min_el_array[i] > temp) {
            temp = min_el_array[i];
            line_num = i + 1;
        }
    }
    printf("Ќомер строки, содержащей максимальный из минимальных элементов строк - %d", line_num);
}