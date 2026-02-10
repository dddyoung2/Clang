#include <stdio.h>

void main(){
    char s[20];
    FILE *wfp;

    wfp = fopen("C:\\Users\\jads7\\Desktop\\test\\Clang\\C_File\\data3.txt", "a");

    printf("문자열을 입력, 최대 19자까지. : ");
    gets(s);

    fputs(s, wfp);

    fclose(wfp);
}