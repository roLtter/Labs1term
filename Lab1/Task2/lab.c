#include "stdio.h"

void printValue(int number){
    printf("Intermediate: %d\n", number);
}

int main(){
    int number = 0;
    printf("Initial: %d\n", number);
    number += 3;
    printValue(number);
    number *= 71;
    printValue(number);
    number %= 28;
    printValue(number);
    number -= 2;
    printValue(number);
    number /= 99;
    printf("Final value: %d\n", number);
    return 0;
}