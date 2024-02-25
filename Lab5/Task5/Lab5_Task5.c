/*
Author:         Axenvio
Date:           15.10.2023
Description:    Образовать массив строк из N элементов, записав туда женские имена, введенные с клавиатуры.
                Вывести на экран в столбик все элементы полученного массива.
*/
#include <stdio.h>

#define N 3
#define LENGTH 20

int main(){
    char names[N][LENGTH];
    for (int i = 0; i < N; ++i) {
        scanf("%s",names[i]);
    }
    for (int i = 0; i < N; ++i) {
        printf("%s\n", names[i]);
    }
    return 0;
}

