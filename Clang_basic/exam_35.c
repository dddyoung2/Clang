#include <stdio.h>

void main(){
    typedef struct _person{
        char name[10];
        union _id{
            char phone[15];
            char personid[15];
        }id;
    }person;

    person pr;

    printf("이름 -->");
    scanf("%s",pr.name);

    printf("전화번호 또는 주민번호 -->");
    scanf("%s",pr.id.phone);

    printf("\n\n출력\n\n");
    printf("name : %s\n",pr.name);
    printf("phone-number or resident-number : %s\n", pr.id.phone);

}