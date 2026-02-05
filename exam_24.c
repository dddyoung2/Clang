#include <stdio.h>
#include <string.h>

int main(void){
    char s[100]="\0";

    printf("문자열을 입력하세요 : ");
    scanf("%s",s);

    printf("내용을 거꾸로 출력 ==> ");

    for (int i=strlen(s); i>=0; i--){
        printf("%c",s[i]);
    }

    char *p = s;
    printf("\n");
    printf("내용을 거꾸로 출력 ==> ");
    for (int i=0; i<=strlen(s); i++){
        printf("%c",*(p+strlen(s)-i));
    }
    printf("\n");
    return 0;
}