#include <stdio.h>

int main(void){
    int start = 0;
    int end = 0;
    int mult = 0;

    printf("합계의 시작값 ==> ");
    scanf("%d",&start);

    printf("합계의 끝값 ==> ");
    scanf("%d",&end);

    printf("배수 ==> ");
    scanf("%d",&mult);
    
    int total = 0;

    for (int i = start; i <= end; i++){
        if(i%mult==0)  total+=i;
    }

    printf("%d부터 %d까지의 %d배수의 합계 ==> %d\n", start, end, mult, total);
    
    return 0;
}