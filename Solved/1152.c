#include <stdio.h>
#include <string.h>

int main(){
    int cnt = 0;
    char s[1000002]="\0";
    //fgets는 enter도 구분한다.
    fgets(s, sizeof(s), stdin);
    //printf("%d\n",strlen(s));
    for(int i=0; s[i]!='\0'; i++){
        //printf("%c", s[i]);
        if((i>0 && !(s[i]=='\n' && s[i-1]==' '))&& ((s[i]=='\n' || s[i]==' ') && s[i-1]!=' ')) cnt++;//printf("*");
    }

    printf("%d",cnt);
    return 0;
}