#include <stdio.h>

void main(){
    //학생이름, 국어점수, 영어점수, 평균 점수 변수.
    //학생이름 입력 최대 9자.
    //국어 점수 영어 점수 입력, 평균 계산. 출력.

    typedef struct student{
        char name[9];
        int kor;
        int eng;
        float avg;
    }stt;

    stt st = {"woohee", 95, 100};
    
    st.avg = (st.kor+st.eng)/2.0f;
    printf("결과 출력.\n");
    printf("\n이름 : %s\n국어점수 : %d\n영어점수 : %d\n평균점수 : %.2f\n", st.name, st.kor, st.eng, st.avg);

    printf("학생이름 입력 : ");
    scanf("%8s",st.name);

    printf("국어점수 입력 : ");
    scanf("%d",&st.kor);

    printf("영어점수 입력 : ");
    scanf("%d",&st.eng);

    st.avg = (st.kor+st.eng)/2.0f;
    printf("결과 출력.\n");
    printf("\n이름 : %s\n국어점수 : %d\n영어점수 : %d\n평균점수 : %.2f\n", st.name, st.kor, st.eng, st.avg);

}