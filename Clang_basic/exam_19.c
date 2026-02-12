#include <stdio.h>

int main(void){
    int origin = 0;
    int num = 0;
    int cnt=0;

    printf("숫자를 여러 개 입력 : ");
    scanf("%d",&origin);

    num = origin;
    while(num>0){
        num /= 10;
        cnt += 1;
    }

    int star[cnt];
    for (int i=0; i<cnt; i++) star[i]=0;

    for (int i=0; i<cnt; i++){
        star[cnt-1-i]=origin%10;
        origin/=10;
    }

    /*
    // check the array
    for (int i=0; i<cnt; i++){
        printf("%d",star[i]);
    }
    */

    //output
    for (int i=0; i<cnt; i++){
        for (int j=0; j<star[i]; j++) printf("*");
        printf("\n");
    }
    return 0;
}