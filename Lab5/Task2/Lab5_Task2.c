/*
Author:         Axenvio
Date:           15.10.2023
Description:    Создать вручную англоязычный текстовый файл небольшого объема. Прочитать файл посимвольно и вывести
                на экран все символы из файла.
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define N 700

int main() {
    setlocale(LC_ALL, "rus");

    char buff[N], ch;
    int i = 0;
    FILE *data = fopen("C:\\Users\\aksen\\Documents\\Lab\\Lab5\\Task2\\data.txt", "r");
    if (data == NULL) {
        printf("Ошибка записи/чтения файла");
        return EXIT_FAILURE;
    } else {
        while ((ch = fgetc(data)) != EOF)
            buff[i++] = ch;
        buff[i] = '\0';
        puts(buff);
    }
    fclose(data);
    return 0;
}