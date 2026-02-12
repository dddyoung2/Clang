#include <stdio.h>
#include <malloc.h>

void main(){
    int *p;
    int hap = 0;
    int cnt;

    printf("입력할 개수는 몇개? : ");
    scanf("%d",&cnt);

    p = (int *) malloc(sizeof(int) * cnt);
    
    for (int i = 0; i < cnt; i++){
        printf("%d번째 숫자 : ", i+1);
        scanf("%d", &p[i]);
    }
    
    for (int i = 0; i < cnt; i++){
        hap += p[i];
    }
    
    printf("hap : %d\n", hap);

    
    for (int i = 0; i < cnt; i++){
        printf("*p[%d] : %d\n", i, p[i]);
    }
    free(p);

}