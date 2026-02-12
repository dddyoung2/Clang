#include <stdio.h>

int main(void){
    int a, b=0;
    char sep;
    printf("첫 번째 계산할 값을 입력하세요. ==> ");
    scanf("%d",&a);

    printf("+ - * / ==> ");
    scanf(" %c", &sep);
    printf("두 번째 계산할 값을 입력하세요. ==> ");
    
    scanf("%d",&b);
    if (sep == '+'){
        printf(" %d + %d = %d\n", a, b, a+b);
    }
    else if (sep == '-'){
        printf(" %d - %d = %d\n", a, b, a-b);
    }
    else if (sep == '*'){
        printf(" %d * %d = %d\n", a, b, a*b);
    }
    else if (sep == '/'){
        if (b == 0) printf(" 0으로 나누면 안됩니다.\n");
        else printf(" %d / %d = %d\n", a, b, a/b);
    }
    else {
        printf("ERROR!\n");
    }
    return 0;
}