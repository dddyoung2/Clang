#include <stdio.h>

int main(void){
    int year = 0;

    printf("ddd년도를 입력하세요. : ");
    scanf("%d",&year);

    if (((year%4==0)&&(year%100!=0))||(year%400==0)) printf("%d 년은 윤년입니다.\n",year);
    else printf("윤년아니네요.\n");

    return 0;
}