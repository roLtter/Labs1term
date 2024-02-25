
#include <stdio.h>
#include "string.h"

#define SIZE_ARRAY 128

int main() {
    char first_str[SIZE_ARRAY], second_str[SIZE_ARRAY], third_str[SIZE_ARRAY];

    gets(first_str);
    gets(second_str);
    gets(third_str);
    printf("First str - %s\n", first_str);
    printf("Second str - %s\n", second_str);
    printf("Third str - %s\n", third_str);
    printf("One str - %s%s%s\n", first_str, second_str, third_str);

    strcat(first_str, second_str);
    strcat(first_str, third_str);
    printf("One str - %s", first_str);

    return 0;
}