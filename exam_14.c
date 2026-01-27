#include <stdio.h>

int main(void){
    int i = 1;

    for (int a=2; a<=9; a++) printf("#제%d단# ",a);
    printf("\n");

    for( ; i<=9; i++){
        for(int j=2 ; j<=9; j++) {
            printf("%dX %d=%2d ", j, i, j*i);
        }
        printf("\n");
    }

    return 0;
}