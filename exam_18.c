#include <stdio.h>
#include <string.h>

int main(void){
    char a[100] = " ";

    printf("문자열을 입력<100자 이내> : ");
    scanf("%s",a);
    
    int i = 0;
    int upp = 0;
    int down = 0;
    int num = 0;

    while(i<strlen(a)){
        if (a[i]>='A' && a[i]<='Z') upp+=1;
        else if (a[i]>='a' && a[i]<='z') down+=1;
        else if (a[i]>='0' && a[i]<='9') num+=1;

        if (i>=100) break;
        i+=1;
    }

    printf("대문자 %d개, 소문자 %d개, 숫자 %d개\n", upp, down, num);
    
    return 0;
}