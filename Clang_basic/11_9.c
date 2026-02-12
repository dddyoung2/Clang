#include <stdio.h>

void main(){
    FILE *rfp;
    int hap = 0;
    int in;
    
    rfp = fopen("C:\\Users\\jads7\\Desktop\\test\\Clang\\C_File\\data2.txt", "r");

    printf("total : %d\n", hap);
    for (int i = 0; i < 5; i++){
        fscanf(rfp, "%d", &in);
        hap += in;
        printf("합계에 %d를 더하였습니다.\n", in);
    }
    printf("합계 : %d\n", hap);
}
