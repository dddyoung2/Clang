#include <stdio.h>

void main(){
    //학생이름, 국어점수, 영어점수, 평균 점수 변수.
    //학생이름 입력 최대 9자.
    //국어 점수 영어 점수 입력, 평균 계산. 출력.
    //구조체 배열을 활용하여 3명입력

    typedef struct student{
        char name[10];
        int kor;
        int eng;
        float avg;
    }stt;
    stt st[3];
    //stt st = {"woohee", 95, 100};

    for (int i =0; i<3; i++){
        printf("%d번째 학생이름 입력 : ",i+1);
        scanf("%9s",st[i].name);

        printf("국어점수 입력 : ");
        scanf("%d",&st[i].kor);

        printf("영어점수 입력 : ");
        scanf("%d",&st[i].eng);

        st[i].avg = (st[i].kor+st[i].eng)/2.0f;
        printf("\n");
    }
    
    for (int i=0; i<3; i++){
        printf("결과 출력.\n");
        printf("\n이름 : %s\n국어점수 : %d\n영어점수 : %d\n평균점수 : %.2f\n\n", st[i].name, st[i].kor, st[i].eng, st[i].avg);
    }
}