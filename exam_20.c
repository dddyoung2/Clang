#include <stdio.h>
#include <string.h>

int main(void){
    char aa[100];

    printf("문자열을 입력하세요 : ");
    scanf("%s",aa);

    printf("내용을 거꾸로 출력 ==> ");
    for (int i=strlen(aa)-1; i>=0; i--) printf("%c",aa[i]);

    return 0;
}