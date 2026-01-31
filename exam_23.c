#include <stdio.h>
#include <string.h>

int main(void){
    char text[100]="\0";
    char change[2]="\0";

    printf("여러 글자를 입력 : ");
    gets(text);

    printf("기존 문자와 새로운 문자 : ");
    scanf("%c %c",&change[0], &change[1]);

    printf("변환된 결과 ==> ");
    for(int i=0; i<=strlen(text); i++){
        if (text[i]==change[0]) text[i]=change[1];
        printf("%c",text[i]);
    }
    return 0;
}