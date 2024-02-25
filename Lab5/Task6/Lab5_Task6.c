/*
Author:         Axenvio
Date:           15.10.2023
Description:    Задать три строки с клавиатуры и с помощью стандартных функций осуществить склейку этих строк всеми
                возможными способами и записать в новые строки. Вывести на экран изначальные и получившиеся строки.
*/
#include <stdio.h>
#include <string.h>

#define SIZE_ARRAY 128

int main(){
    char first_str[SIZE_ARRAY], second_str[SIZE_ARRAY], third_str[SIZE_ARRAY];
    char a[SIZE_ARRAY] = {0}, b[SIZE_ARRAY] = {0}, c[SIZE_ARRAY] = {0};

    gets(first_str);
    gets(second_str);
    gets(third_str);
    printf("First str - %s\n", first_str);
    printf("Second str - %s\n", second_str);
    printf("Third str - %s\n", third_str);

    strcat(a, first_str);
    strcat(a, second_str);
    puts(a);

    strcat(a, third_str);
    puts(a);

    strcat(b, first_str);
    strcat(b, third_str);
    puts(b);

    strcat(c, second_str);
    strcat(c, third_str);
    puts(c);

    return 0;
}