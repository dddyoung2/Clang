#include <stdio.h>

int main(void){
    int money = 0;
    
    printf("## 교환할 돈은 ? ");
    scanf("%d", &money);

    printf("\n");
    printf(" 오백원짜리 ==> %d 개\n", money/500);
    
    printf(" 백원짜리 ==> %d 개\n", (money%500)/100);

    printf(" 오십원짜리 ==> %d 개\n", ((money%500)%100)/50);

    printf(" 십원짜리 ==> %d 개\n", (((money%500)%100)%50)/10);

    printf(" 바꾸지 못한 잔돈 ==> %d 원\n", (((money%500)%100)%50)%10);
    return 0;
}