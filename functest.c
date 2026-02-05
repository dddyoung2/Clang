#include <stdio.h>

void fun1(int a){
    printf("a's address : %d\n", &a);
    a += 1;
    printf("222 a's address : %d\n", &a);
    printf("222 a's val : %d\n\n", a);
    int *p = &a;
    printf("p's address, pointer address, value : %d, %d, %d\n\n", &p, p, *p);
}

void fun2(int *b){ //pointer b = &a
    printf("a's address : %d\n", &b);
    *b += 1;
    printf("333 a's address : %d\n", &b);
    printf("333 a's val : %d\n\n", *b);
    int *p = b;
    printf("p's address, pointer address, value : %d, %d, %d\n\n", &p, p, *p);
    *p += 1;
    printf("p's address, pointer address, value : %d, %d, %d\n", &p, p, *p);
    printf("333 a's val : %d\n\n", *b);

    printf("para b private address, para b linked address, pointer address, pointer private address : %d %d %d %d\n\n\n", &b, b, p, &p);

}

void main(){
    /*
    매개변수의 방식이 일반 변수냐, 포인터 변수냐에 따라 메인함수에 끼치는 영향이 다름. 이라는 개념을 기준으로 주소값에 대한 실험.
    1. 매개변수들은 기본적으로 메인의 전달받는 변수랑은 다른 주소를 가짐.
    2. 그러나 개념처럼 값 전달의 매개변수는 메인함수 변수에 영향을 끼치지는 못하지만, 포인터 매개변수는 메인함수에 영향을 끼침.
    2-1. 포인터 매개변수의 경우 메인함수에 영향을 끼치니 연결되어 있다 생각하여 매개변수랑 메인함수의 전달하는 변수랑 같은 주소를 가질 것이라 생각함. 맞음.
    */
    int a = 3;

    printf("origin a's address : %d\n",&a);
    printf("origin a's val : %d\n\n",a);

    fun1(a);

    printf("origin a's address : %d\n",&a);
    printf("origin a's val : %d\n\n",a);


    fun2(&a);
    printf("origin a's address : %d\n",&a);
    printf("origin a's val : %d\n\n",a);
}