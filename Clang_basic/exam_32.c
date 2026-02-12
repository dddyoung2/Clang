#include <stdio.h>
#include <malloc.h>

void main(){
    printf("계속 입력하시오. (0을 입력 시 종료.)\n");
    int cnt = 0;
    int total = 0;
    int *p;
    int data = 0;

    p = (int *) calloc(sizeof(int), 1);

    while (1){
        printf("%d번째 숫자 : ", cnt+1);
        scanf("%d",&data);

        if (data == 0){
            break;
        }
        else if (data % 2 == 0) {
            p[cnt] = data;
            p = (int *) realloc(p, sizeof(int) * (cnt+2));
            cnt++;
        }
    }

    for (int i =0; i<cnt; i++){
        total+=p[i];
    }

    printf("입력한 짝수합 ==> %d\n", total);

}