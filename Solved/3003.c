#include <stdio.h>

int main(){
    int input[6]={0, 0, };
    int set[6]={1, 1, 2, 2, 2, 8};
    int output[6]={0, 0, };

    for (int i=0; i<6; i++){
        scanf("%d",&input[i]);
        output[i]=set[i]-input[i];
    }

    for (int i=0; i<6; i++)
        printf("%d ",output[i]);

    return 0;
}