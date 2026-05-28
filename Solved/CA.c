#include <stdio.h>

int HW2(int a, int b)
{
    int a5 = a;
    if (a5 == 0){
        a5 = b;
        a5 = -a5;
    } else{
        a5 = b;
        if (a5 == 0)
            a5 = a;
        else{
            a5 = a;
            int a4 = a5 - 1;
            a5 = b;
            a5 = a5 -1;
            b = a5;
            a = a4;
            return HW2(a, b);
        }
    }
    a=a5;
    return a;
}


int main(){
    int input_a = 5;
    int input_b = 7;
    int output = HW2(input_a, input_b);
    printf("Input is %d and %d.\n", input_a, input_b);
    printf("Output is %d.\n", output);
    return 0;
}
