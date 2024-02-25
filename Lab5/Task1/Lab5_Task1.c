/*
Author:         Axenvio
Date:           15.10.2023
Description:    Записать в текстовый файл через пробел N целых чисел, закрыть его, а потом дописать туда еще M символов.
*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define N 5
#define M 5

int main() {
    setlocale(LC_ALL, "rus");
    FILE *data = fopen("data.txt", "w");
    int array[N], array1[M];
    if (data == NULL) {
        printf("Ошибка записи/чтения файла");
    } else {
        for (int i = 0; i < N; ++i) {
            scanf("%d", &array[i]);
            fprintf(data, "%d ", array[i]);
        }
    }
    fclose(data);

    FILE *data1 = fopen("data.txt", "a+");
    if (data1 == NULL){
        printf("Ошибка записи/чтения файла");
    }else {
        for (int i = 0; i < N; ++i) {
            scanf("%d", &array1[i]);
            fprintf(data, "%d ", array1[i]);
        }
    }
    fclose(data1);
    return 0;
}
