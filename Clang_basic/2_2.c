#include <stdio.h>

int main (void){
    int a,b;
    int result;

    scanf("%d",&a);
    scanf("%d",&b);

    result = a+b;
    printf("%d + %d = %d\n", a, b, result);

    return 0;
}