#include <stdio.h>
#include <string.h>

int main(void){
    //Upp + 32 = low
    //Low - 32 = Upp
    char in[100]="\0";

    printf(" 문자 입력 : ");
    gets(in);

    printf("변환된 문자 =>");
    for (int i=0; in[i]!='\0'; i++){
        if (in[i]<='Z' && in[i]>='A')   printf("%c",in[i]+32);
        else if (in[i]<='z' && in[i]>='a')  printf("%c",in[i]-32);
        else printf("%c",in[i]);
    }
    
    return 0;
}