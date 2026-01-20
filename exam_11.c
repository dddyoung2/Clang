#include <stdio.h>

int main(void){
    int a = 0;
    int b = 0;
    char sep = ' ';
    //계산기
    printf("첫번째 수를 입력하세요 : ");
    scanf("%d",&a);
    
    printf("계산할 연산자를 입력하세요 : ");
    scanf(" %c",&sep);

    printf("두번째 수를 입력하세요 : ");
    scanf("%d",&b);

    if (sep == '+') printf("%d %c %d = %d\n", a, sep, b, a+b);
    else if (sep == '-') printf("%d %c %d = %d\n", a, sep, b, a-b);
    else if (sep == '*') printf("%d %c %d = %d\n", a, sep, b, a*b);
    else if (sep == '/') printf("%d %c %d = %f\n", a, sep, b, a / ((float) b));
    else if (sep == '%') printf("%d %c %d = %d\n", a, sep, b, a % b);
    else printf("error\n");
    return 0;
}