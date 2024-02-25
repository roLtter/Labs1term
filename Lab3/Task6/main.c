/*
Author:         Axenvio
Date:           07.10.2023
Description:    Осуществить заполнение двухмерного массива init_array[10][10] целыми числами из диапазона [-500; 500].
                Вывести массив в файл array.txt в прямоугольном виде. Прочитав получившийся файл, заполнить значениями
                другой двумерный массив new_array[10][10]. Найти и вывести на экран максимальный отрицательный элемент,
                среднее арифметическое значение элементов в четных строках и количество отрицательных элементов ниже
                главной диагонали для массива new_array.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define A (-500)
#define B 500

int main() {
    srand(time(NULL));
    int init_array[10][10], new_array[10][10];
    int max_negative_element = -501, count_negative_elements = 0, average = 0;
    FILE *array = fopen("C:\\Users\\aksen\\Documents\\Lab\\Lab3\\Task6\\array.txt", "w");
    if (array == NULL) {
        printf("Error");
    } else {

        // Заполнение и вывод элементов массива
        int cnt = 0;
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                cnt++;
                init_array[i][j] = A + rand() % (B - A + 1);
                fprintf(array, "%5d", init_array[i][j]);
                if (cnt % 10 == 0)
                    fprintf(array, "\n");
            }
        }
    }
    fclose(array);

    FILE *newarray = fopen("C:\\Users\\aksen\\Documents\\Lab\\Lab3\\Task6\\array.txt", "r");
    if (newarray == NULL) {
        printf("Error");
    } else {

        // Заполнение нового массива
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                fscanf(newarray, "%d", &new_array[i][j]);
            }
        }

        // Поиск и вывод минимального элемента максимального отрицательного массива
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (new_array[i][j] < 0 && new_array[i][j] > max_negative_element){
                    max_negative_element = new_array[i][j];
                }
            }
        }
        printf("Max negative element = %d\n", max_negative_element);

        // Нахождение и вывод среднего арифметического
        int cnt_num = 0, sum = 0;
        for (int i = 0; i < 10; i += 2) {
            for (int j = 0; j < 10; ++j) {
                cnt_num++;
                sum += new_array[i][j];
            }
        }
        average = sum / cnt_num;
        printf("Average = %d\n", average);

        // Нахождение количества отрицательных элементов ниже главной диагонали
        int x = 0;
        for (int i = 1; i < 10; ++i) {
            x++;
            for (int j = 0; j < x; ++j) {
                if (new_array[i][j] < 0)
                    count_negative_elements++;
            }
        }
        printf("Count of negative elements = %d", count_negative_elements);
    }

    return 0;
}
