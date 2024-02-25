/*
Author:         Axenvio
Date:           16.10.2023
Description:    Создать вручную англоязычный текстовый файл небольшого объема. Найти и вывести в другой файл сколько
                и какие цифры встречаются в исходном файле.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE_STR 512

int main(){

    char array[SIZE_STR];
    unsigned int digit[], digit_cnt[128], temp = 0, h = 0;
    FILE *data = fopen("C:\\Users\\aksen\\Documents\\Lab\\Lab5\\Task 8\\data.txt", "r");
    if (data == NULL) {
        perror("C:\\Users\\aksen\\Documents\\Lab\\Lab5\\Task 8\\data.txt");
        return EXIT_FAILURE;
    }

    fgets(array, SIZE_STR, data);

    unsigned long long N = strlen(array);

    for (int i = 0; i < N; ++i) {
        if (isdigit(array[i])){
            digit[h] = array[i];
            h++;
        }
    }




}