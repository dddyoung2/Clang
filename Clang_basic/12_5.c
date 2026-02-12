#include <stdio.h>
#include <malloc.h>

void main(){
    int *p;
    int hap = 0;
    int cnt = 0;
    int data = 0;

    p = (int *) calloc(sizeof(int), 1);
    while(1){
        printf("%d번째 숫자 : ", cnt+1);
        scanf("%d",&data);

        if (data != 0){
            if (cnt>0) p = (int *) realloc(p, sizeof(int) * (cnt+1));
            p[cnt] = data;
            cnt++;
        } else {   
            break;
        }
    }

    for (int i=0; i<cnt; i++){
        hap+=p[i];
        printf("합계에 %d추가.\n", p[i]);
    }
    free(p);
    printf("합계 : %d\n", hap);
}