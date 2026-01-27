#include <stdio.h>
#include <string.h>

int main(void){
    char cha[101] = " ";

    int i=0;
    printf("영문자 및 숫자를 입력 <100자 이하> : ");
    scanf("%s",cha);


    printf("입력한 문자열 ==> ");
    for (; i < strlen(cha); i++) 
        printf("%c",cha[i]);
    printf("\n");

    i-=1;

    printf("변환된 문자열 ==> ");
    for (; i >= 0; i--) 
        printf("%c",cha[i]);

    return 0;
}