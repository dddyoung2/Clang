#include <stdio.h>

void main(){
    FILE *wfp;
    int hap = 0;
    int in;
    wfp = fopen("C:\\Users\\jads7\\Desktop\\test\\Clang\\C_File\\data5.txt", "rw");

    for (int i = 0; i<5; i++){
        printf("숫자 %d : ", i+1);
        scanf("%d", &in);
        hap+=in;
    }

    fprintf(wfp, "합계 : %d\n", hap);
    
    fclose(wfp);

}