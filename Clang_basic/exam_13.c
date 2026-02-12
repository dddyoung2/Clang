#include <stdio.h>

int main(void){
    int a = 0;
    int b = 0;
    char sep = ' ';
    //계산기
    printf("띄어쓰기로 구분하여 첫번째수 연산자 두번째수 식으로 입력 : ");
    scanf("%d %c %d",&a,&sep,&b);
    
    switch(sep){
        case '+' :
            printf("%d %c %d = %d\n", a, sep, b, a+b);
            break;
        case '-' :
            printf("%d %c %d = %d\n", a, sep, b, a-b);
            break;
        case '*' :
            printf("%d %c %d = %d\n", a, sep, b, a*b);
            break;
        case '/' :
            printf("%d %c %d = %f\n", a, sep, b, a / ((float) b));
            break;
        case '%' :
            printf("%d %c %d = %d\n", a, sep, b, a % b);
            break;
        default :
            printf("error\n");
    }
    return 0;
}