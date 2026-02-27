#include <stdio.h>
#include <stdlib.h>

int main(){
    //\0 넣어줄 공간 없으면 그냥 이어서 받음 ㅋㅋ;;
    char num[2][4]={{"\0"}};
    int result[2] = {0,};
    char temp ='\0';

    scanf("%s %s", &num[0][0], &num[1][0]);

    //문자열 거꾸로
    for (int i=0; i<2; i++){
        temp = num[i][0];
        num[i][0] = num[i][2];
        num[i][2] = temp;
    }
    
    //문자열 정수로
    result[0]=atoi(num[0]);
    result[1]=atoi(num[1]);

    //output
    printf("%d", result[0]>result[1] ? result[0] : result[1]);

    /* test
    for(int i=0; i<2; i++)
        for (int j=0; j<3; j++)
            printf("%c",num[i][j]);
    */
    return 0;
}