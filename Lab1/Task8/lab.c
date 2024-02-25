#include <stdio.h>

int main(){
    int choice;
    scanf("%d", &choice);
    switch(choice){
        case 1:{
            printf("Mercury");
            break;
        }
        case 2:{
            printf("Venus");
            break;
        }
        case 3:{
            printf("Earth");
            break;
        }
        case 4:{
            printf("Mars");
            break;
        }
        case 5:{
            printf("Jupiter");
            break;
        }
        case 6:{
            printf("Saturn");
            break;
        }
        case 7:{
            printf("Uranus");
            break;
        }
        case 8: {
            printf("Neptune");
            break;
        }
        default:{
            printf("Invalid Input");
            break;
        }
    }
    return 0;
}