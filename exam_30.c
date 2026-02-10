#include <stdio.h>

int main(void){
    int i = 1;
    FILE *wfp;
    
    wfp = fopen("C:\\Users\\jads7\\Desktop\\test\\Clang\\C_File\\gugu.txt", "w");

    for (int a=2; a<=9; a++) fprintf(wfp, "#제%d단# ", a);
    fprintf(wfp, "\n");

    for( ; i<=9; i++){
        for(int j=2 ; j<=9; j++) {
            fprintf(wfp, "%dX %d=%2d ", j, i, j*i);
        }
        fprintf(wfp, "\n");
    }

    fclose(wfp);
    return 0;
}