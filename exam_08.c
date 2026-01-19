#include <stdio.h>

int main(void){
    float first = 0;
    float second = 0;

    printf("첫번째 계산할 값을 입력하세요 ==> ");
    scanf("%f",&first);

    printf("두번째 계산할 값을 입력하세요 ==> ");
    scanf("%f",&second);

    printf(" %.2f + %.2f = %.2f\n", first, second, first + second);
    printf(" %.2f - %.2f = %.2f\n", first, second, first - second);
    printf(" %.2f * %.2f = %.2f\n", first, second, first * second);
    printf(" %.2f / %.2f = %.2f\n", first, second, first / second);
    printf(" %d %% %d = %d\n", (int) first, (int) second, (int) first % (int) second);
    return 0;
}