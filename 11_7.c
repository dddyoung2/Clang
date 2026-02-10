#include <stdio.h>

void main(){
    char s[20];
    FILE *rfp;

    // 파일 열기
    rfp = fopen("C:\\Users\\jads7\\Desktop\\test\\Clang\\C_File\\data1.txt", "r");

    // 파일 문자열 읽기
    fgets(s, 20, rfp);

    // 출력하기
    printf("파일에서 읽은 문자열 : ");
    puts(s);

    // 파일 닫기
    fclose(rfp);

}