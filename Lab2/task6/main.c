#include <stdio.h>

void print_range(int, int);

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    print_range(a, b);
    return 0;
}

void print_range(int a, int b) {
    for (int i = a; i <= b; i++) {
        printf("%d ", i);
    }
}
