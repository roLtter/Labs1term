/*
Author:         Axenvio
Date:           15.10.2023
Description:    Создать вручную англоязычный текстовый файл небольшого объема. Найти и вывести на экран слова с
                четным количеством букв. Найти и вывести на экран количество этих слов.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define N 700
#define COUNT_STR 70
#define LENGTH_STR 30


int main() {
    setlocale(LC_ALL, "rus");
    char array[N], array2[COUNT_STR][LENGTH_STR];
    int cnt = 0;

    FILE *data = fopen("C:\\Users\\aksen\\Documents\\Lab\\Lab5\\Task4\\data.txt", "a+");
    if (data == NULL) {
        perror("C:\\Users\\aksen\\Documents\\Lab\\Lab5\\Task4\\data.txt");
        return EXIT_FAILURE;
    }
    int i = 0;
    while (!feof(data)) {
        fscanf(data, "%s", array);
        if (strchr(array, '.') == NULL && strchr(array, ',') == NULL) {
            if (strlen(array) % 2 == 0) {
                strcpy(array2[i], array);
                i++;
            }
        }
    }
    printf("Количество слов = %d\n", i);
    printf("Слова с четным количеством букв:\n");
    for (int j = 0; j < i; ++j) {
        printf("%15s ", array2[j]);
        cnt++;
        if (cnt % 5 == 0){
            printf("\n");
        }
    }

    fclose(data);
    return 0;
}
