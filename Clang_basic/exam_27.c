#include <stdio.h>

void seven(int a){
    for (int i = 1; i<=9; i++)
        printf("%2d X %2d= %2d\n", a, i, a*i);
}

void main(){
    int a = 0;

    printf("출력하고 싶은 단을 입력 : ");
    scanf("%d",&a);
    seven(a);

}