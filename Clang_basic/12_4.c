#include <stdio.h>
#include <stdlib.h>

void main(){
    int *p, *s;

    printf("malloc(), calloc 함수의 초기값 비교\n\n");

    printf("malloc() 함수 사용\n");
    p = (int *) malloc(sizeof(int) * 3); //malloc의 경우 매개변수가 (포인터 변수 데이터형의 크기 "*" 필요한 크기(사용할 개수))이다.
    for (int i = 0; i < 3; i++)
        printf("할당된 곳의 초기값 p[%d] ==> %d\n", i, *(p+i)); // *(p+i) == p[i]
    free(p);

    printf("\n------------------------------\n\n");

    printf("calloc() 함수 사용\n");
    s = (int *) calloc(sizeof(int), 3); //calloc의 경우 매개변수가 (포인터 변수 데이터형의 크기 "," 필요한 크기(사용할 개수))이다.
    for (int i = 0; i < 3; i++)
        printf("할당된 곳의 초기값 s[%d] ==> %d\n", i, *(s+i)); // *(s+i) == s[i]
    free(s);

    // calloc의 경우 0으로 초기화, malloc의 경우 초기화를 하지않아 쓰레기값이 남는다. 
    // 메모리 반납 free함수도 나중에 하든, 다 쓰고 바로 하든 상관은 없지만 나중에 한 번에 반납을 하면 쓸 수 있었던 공간을 못쓰다가 돌려받는 것이니.. 다 쓰고 바로 반납하는 것이 동적함수의 의미인것같다.

    printf("\n\n\t\t끝\n\n");
}