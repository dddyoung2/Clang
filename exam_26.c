#include <stdio.h>

int main(void){
    int s[10] = {1, 0, 3, 2, 5, 4, 7, 6, 9, 8};
    int tmp = 0;
    int *p = s;

    printf("정렬 전 배열 s ==> ");
    for(int k=0; k<10; k++) printf("%d ", *(p+k));
    printf("\n");

    for (int i = 0; i<9; i++){
        for (int j = i+1; j<10; j++){
            if (*(p+i)>*(p+j)){
                tmp = *(p+j);
                *(p+j) = *(p+i);
                *(p+i) = tmp;
            }
        }
    }
    printf("정렬 후 배열 s ==> ");
    for(int k=0; k<10; k++) printf("%d ", *(p+k));
    printf("\n");
    return 0;
}