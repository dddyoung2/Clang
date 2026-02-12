#include <stdio.h>

int main(void){
    int a, b, tmp;
    int *p1, *p2;
    
    p1 = &a;
    p2 = &b;

    printf("a 값을 입력 : ");
    scanf("%d",&a);

    printf("b 값을 입력 : ");
    scanf("%d",&b);
    
    printf("test, a: %d b: %d tmp: %d *p1: %d *p2: %d\n", a, b, tmp, *p1, *p2);

    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
    
    printf("test, a: %d b: %d tmp: %d *p1: %d *p2: %d\n", a, b, tmp, *p1, *p2);
    return 0;
}