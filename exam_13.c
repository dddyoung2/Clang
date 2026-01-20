#include <stdio.h>

int main(void){
    int a, b;
    char ch;

    printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
    scanf("%d %c %d", &a, &ch, &b);

    switch(ch) {
        case '+' : 
            printf("%d %c %d = %d 입니다.", a, ch, b, a+b);
            break;
        case '-' :
            printf("%d %c %d = %d 입니다.", a, ch, b, a-b);
            break;
         case '*' :
            printf("%d %c %d = %d 입니다.", a, ch, b, a*b);
            break;
         case '/' :
            printf("%d %c %d = %f 입니다.", a, ch, b, a/(float)b);
            break;
         case '%' :
            printf("%d %c %d = %d 입니다.", a, ch, b, a%b);
            break;
        default :
            printf("error\n");
    }
    
    return 0;
}