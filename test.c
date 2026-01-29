#include <stdio.h>

int main(void){

    printf("0 %d, 9 %d\n", '0', '9');
    printf("a %d, z %d\n", 'a', 'z');
    printf("A %d, Z %d\n", 'A', 'Z');

    char a = '\0';
    char b = ' ';
    char c = '\n';

    printf("\\0 %c %d\n", a, a);
    printf(" \' \' %c %d\n", b, b);
    printf("\\n %c %d\n", c, c);

    
    return 0;
}