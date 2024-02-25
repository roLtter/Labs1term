#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-err34-c"
/*
 Author:        Axenvio
 Data:          10.10.2002
 Description:   Для каждой строки двумерного массива найти и записать в одномерный массив произведение элементов,
                кратных 5. Для каждого столбца двумерного массива найти и записать в одномерный массив среднее
                арифметическое всех элементов. Вывести на экран двумерный массив в прямоугольном виде так,
                чтобы справа от него был записан массив произведений, а снизу – массив средних арифметических значений.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <conio.h>

#define RIGHT_BORDER 100


void get_line_multiple_array(int **array, int *multiple_array, int line, int column);

void get_column_average_array(int **arr, double *average_array, int line, int column);

void init_array(int **arr, int line, int column);

void print_array(int **arr, double *average_arr, int *multiple_arr, int line, int column);

int main() {
    setlocale(LC_ALL, "RUS");
    srand(time(NULL));

    int line, column;

    printf("Ведите размерность массива N x M:\n");
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


    int *multiple_array;
    multiple_array = (int *) malloc(sizeof(int *) * line);

    printf("\n");
    double *average_array;
    average_array = (double *) malloc(sizeof(double *) * column);


    get_line_multiple_array(array, multiple_array, line, column);
    print_array(array, average_array, multiple_array, line, column);
    get_column_average_array(array, average_array, line, column);

    free(average_array);
    free(multiple_array);
    free(array);

    return 0;
}

void init_array(int **arr, int line, int column) {
    for (int i = 0; i < line; ++i) {
        for (int j = 0; j < column; ++j) {
            arr[i][j] = rand() % (RIGHT_BORDER + 1);
        }
    }
}

void print_array(int **arr, double *average_arr, int *multiple_arr, int line, int column) {
    printf("Массив:\n");
    for (int i = 0; i < line; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%10d", arr[i][j]);
        }
        printf("%15d", multiple_arr[i]);
        printf("\n");
    }
}

void get_line_multiple_array(int **arr, int *multiple_array, int line, int column) {
    int h = 0, multiple;
    for (int i = 0; i < line; ++i) {
        multiple = 1;
        for (int j = 0; j < column; ++j) {
            if (arr[i][j] % 5 == 0) {
                multiple *= arr[i][j];
            }
        }
        multiple_array[h] = multiple;
        h++;
    }
}

void get_column_average_array(int **arr, double *average_array, int line, int column) {
    int h = 0;
    double average, sum;
    if (line > column) {
        for (int i = 0; i < line; ++i) {
            sum = 0;
            for (int j = 0; j < column; ++j) {
                sum += arr[j][i];
            }
            average = sum / line;
            average_array[h] = average;
            h++;
            printf("%10.2lf ", average);
        }
    } else {
        for (int i = 0; i < column; ++i) {
            sum = 0;
            for (int j = 0; j < line; ++j) {
                sum += arr[j][i];
            }
            average = sum / column;
            average_array[h] = average;
            h++;
            printf("%10.2lf ", average);
        }
    }
}


#pragma clang diagnostic pop