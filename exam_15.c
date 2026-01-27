#include <stdio.h>

int main(void){

    for (int i=0; i<128; i++){
        if (i%16==0){
            printf("---------------------\n");
            printf("10진수  16진수  문자\n");
            printf("---------------------\n");
        }
        if (i==10) printf("%5d %5x     \\n\n", i, i);
        else printf("%5d %5x %6c\n", i, i, i);
    }

    return 0;
}