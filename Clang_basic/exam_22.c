#include <stdio.h>

int main(void){
    int nn[9][9]={};
    
    for (int i=1; i<=9; i++){
        for (int j=1; j<=9; j++){
            nn[i-1][j-1]=i*j;
        }
    }

    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            printf("%dX%d=%2d  ", j+1, i+1, nn[j][i]);
        }
        printf("\n");
    }
}