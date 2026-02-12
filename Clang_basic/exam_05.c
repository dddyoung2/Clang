#include <stdio.h>

int main(){
    int type=0;
    int num=0;
    printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
    scanf("%d",&type);

    printf("값입력 : ");

    if (type == 1){
        scanf("%d",&num);
    }
    else if (type == 2){
        scanf("%X",&num);
    }
    else if (type == 3){
        scanf("%o",&num);
    }
    printf("10진수 ==> %d\n", num);
    printf("16진수 ==> %X\n", num);
    printf("8진수 ==> %o\n", num);
    return 0;
}