#include <stdio.h>

void main(){
    char str[200] = "\0";
    FILE *rfp;
    FILE *wfp;

    printf("읽기 파일명 : ");
    rfp = fopen(gets(str), "r");
    printf("str %s", str);

    wfp = fopen("C:\\Users\\jads7\\Desktop\\test\\Clang\\C_File\\data4.txt", "w");

    while(1){
        fgets(str, 200 , rfp);
        if (feof(rfp)) break;
        fputs(str, wfp);
    }

    fclose(rfp);
    fclose(wfp);
    
}