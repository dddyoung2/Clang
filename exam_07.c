#include <stdio.h>

int main(void){
    char input[10] = "";

    printf("문자열을 입력 ==> ");
    scanf("%s",input);

    for (int i=sizeof(input) -1 ; i>=0; i--){
        printf("%c",input[i]);
    }
    printf("\n");

    return 0;
}