#include <stdio.h>
#include <malloc.h>

void main(){
    typedef struct student{
        char name[10];
        int age;
    }student;
    
    student *s;
    int stu_num = 0;

    printf("입력할 학생 수 : ");
    scanf("%d",&stu_num);

    s = (student *) malloc(sizeof(student) * stu_num);
    
    for (int i=0; i<stu_num; i++){
        printf("%d번째 학생 이름과 나이 입력. : ", i+1);
        scanf("%s %d",(s+i)->name, &(s+i)->age);
    }

    printf("\n\n\n 학생 명단 \n");
    for (int i=0; i<stu_num; i++){
        printf("%d번째 학생 이름 : %s\n\t\t나이 : %d\n",i+1, s[i].name, s[i].age);
    }
    free(s);
}