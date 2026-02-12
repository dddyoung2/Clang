#include <stdio.h>

void changer(char []);

void main(){
    char ss[100] = "\0";

    printf("문자열을 입력<100자 이내> : ");
    scanf("%s",ss);

    
    changer(ss);
    printf("원래 결과 ==> %s\n", ss);
}

void changer(char aa[]){
    for (int i=0; aa[i]!='\0'; i++){
        if (aa[i]>='A' && aa[i]<='Z')
            aa[i] = aa[i] + ('a' - 'A');
        else if (aa[i]>='a' && aa[i]<='z')
            aa[i] = aa[i] - ('a' - 'A');
    }
    printf("변환된 결과 ==> %s\n",aa);
}