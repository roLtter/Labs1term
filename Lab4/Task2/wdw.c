#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#define N 5
#define A -20
#define B 20
int main(){
    int old_massiv[N][N], count=0, h=0, g=0, min;
    int *new_array, *new_array2;
    new_array = (int*)malloc((6+N-1) * sizeof (int ));
    new_array2 = (int*)malloc(6 * sizeof(int));
    srand(time(0));
    for (int i=0; i<N; i++){
        for(int k=0; k<N; k++){
            old_massiv[i][k] = A + rand() % (B - A + 1);
            if (i==0){
                new_array[k] = old_massiv[i][k];
            }
        }
    }
    printf("\n\n");
    for (int i=0; i<N; i++) {
        count=0;
        for (int k = 0; k < N; k++){
            if (old_massiv[i][k] % 10 == 0){
                count++;
            }
        }
        new_array[i+N] = count;
    }
    for(int i=0; i<2*N; i++){
        printf("%6d", new_array[i]);
    }
    printf("\n");
    for (int i=1; i<N; i++){
        for (int k=0; k<N; k++){
            printf("%6d", old_massiv[i][k]);
        }
        printf("\n");
    }
    for (int i=0; i<N; i++){
        min = B;
        for (int k=0; k<N; k++){
            if (old_massiv[k][i] % 2 != 0 && old_massiv[k][i] < min){
                min = old_massiv[k][i];
            }
        }
        new_array2[i] = min;
    }
    for(int i=0; i<N; i++){
        printf("%6d", new_array2[i]);
    }
    free(new_array);
    free(new_array2);
    return 0;
}
