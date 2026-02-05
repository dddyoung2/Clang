#include <stdio.h>

int main(void){
    char stack[5] = " ";
    int top = 0;
    /*
    // top = 0, [ == empty == ]
    stack[top] = 'A';
    printf(" %c 자동차가 터널에 들어감\n", stack[top]);
    top++;

    // top = 1, [ A, , , , ]
    stack[top] = 'B';
    printf(" %c 자동차가 터널에 들어감\n", stack[top]);
    top++;

    // top = 2, [ A, B, , , ] 
    stack[top] = 'C';
    printf(" %c 자동차가 터널에 들어감\n", stack[top]);
    top++;

    printf("\n");

    // top = 3, [ A, B, C, , ]
    top--;
    printf(" %c 자동차가 터널을 빠져나감.\n", stack[top]);
    stack[top]= ' ';

    // top = 2, [ A, B, , , ]
    top--;
    printf(" %c 자동차가 터널을 빠져나감.\n", stack[top]);
    stack[top]= ' ';

    // top = 1, [ A, , , , ]
    top--;
    printf(" %c 자동차가 터널을 빠져나감.\n", stack[top]);
    stack[top]= ' ';
    */
    int button = 0;
    char carname = 'A';
    printf(" === 주차장 확인 ===\n");
    while(button!=4){
        printf("<1> 자동차 넣기 | <2> 자동차 빼기 | <3> 상태 확인 | <4> 끝 ");
        scanf("%d", &button);
        switch(button){
            case 1 :
                if (top>=sizeof(stack)){
                    printf("주차장이 꽉찼습니다. (%d/%d)\n", top, sizeof(stack));
                }
                else {
                    stack[top] = carname;
                    printf("%c 자동차는 %d번째 칸에 주차되었습니다. (%d/%d)\n", stack[top], top+1, top+1, sizeof(stack));
                    carname++;
                    top++;
                }
                break;
            case 2 :
                if (top>0){
                    top--;
                    printf("%d번째 칸의 %c 자동차를 빼내셨습니다. (%d/%d)\n", top+1, stack[top], top, sizeof(stack));
                    stack[top] = ' ';
                    carname--;
                }
                else {
                    printf("빼낼 차가 없습니다.\n");
                }
                break;
            case 3 :
                printf("주차장의 상태를 출력합니다.\n");
                printf("[ 1 | 2 | 3 | 4 | 5 ]\n");
                printf("[ %c | %c | %c | %c | %c ]\n", stack[0], stack[1], stack[2], stack[3], stack[4]);
                break;
            case 4 : 
                printf("프로그램을 종료합니다.\n");
                break;
            default : 
                printf("올바른 값을 입력하세요.\n");
        }
    }
    return 0;
}