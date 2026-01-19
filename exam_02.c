#include <stdio.h>

int main(void){
    int a, b=0;
    int sep=0;
    printf("첫 번째 계산할 값을 입력하세요. ==> ");
    scanf("%d",&a);

    printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 ==> ");
    scanf("%d", &sep);

    printf("두 번째 계산할 값을 입력하세요. ==> ");
    scanf("%d",&b);
    if (sep == 1){
        printf(" %d + %d = %d\n", a, b, a+b);
    }
    else if (sep == 2){
        printf(" %d - %d = %d\n", a, b, a-b);
    }
    else if (sep == 3){
        printf(" %d * %d = %d\n", a, b, a*b);
    }
    else if (sep == 4){
        printf(" %d / %d = %d\n", a, b, a/b);
    }
    else {
        printf("ERROR!\n");
    }
    return 0;
}