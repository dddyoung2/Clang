#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main(){
    char *p[3];
    char imsi[100];
    int size;

    for (int i=0; i<3; i++){
        printf(" %d번째 문자열 : ", i+1);
        gets(imsi);

        size = strlen(imsi);
        p[i] = (char *) malloc((sizeof(char) * size)+1);

        strcpy(p[i], imsi);
    }

    printf("\n 입력과 반대로 출력 \n");
    for (int i = 2; i>=0; i--){
        printf("%d :", i+1);
        for (int j=strlen(p[i]); j>=0; j--)
            printf("%c",p[i][j]);
        printf("\n");
    }

    for(int i=0; i<3; i++)
        free(p[i]);

}