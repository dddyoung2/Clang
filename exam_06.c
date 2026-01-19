#include <stdio.h>

int main(void){
    printf("\t\t\tINT\n");
    printf("int 형의 크기\t\t\t==> %d Bytes\n",sizeof(int));
    printf("unsigned int 형의 크기\t\t==> %d Bytes\n\n",sizeof(unsigned int));
    
    printf("\t\t\tSHORT\n");
    printf("short 형의 크기\t\t\t==> %d Bytes\n",sizeof(short));
    printf("unsigned short 형의 크기\t\t==> %d Bytes\n\n",sizeof(unsigned short));
    
    printf("\t\t\tLONG INT\n");
    printf("long int 형의 크기\t\t\t==> %d Bytes\n",sizeof(long int));
    printf("unsigned long int 형의 크기\t\t==> %d Bytes\n\n",sizeof(unsigned long int));
    
    printf("\t\t\tfloat\n");
    printf("float 형의 크기\t\t\t==> %d Bytes\n",sizeof(float));
    printf("double 형의 크기\t\t\t==> %d Bytes\n",sizeof(double));
    printf("long double 형의 크기\t\t\t==> %d Bytes\n\n",sizeof(long double));
    
    printf("\t\t\tchar\n");
    printf("char 형의 크기\t\t\t==> %d Bytes\n",sizeof(char));
    printf("unsigned char 형의 크기\t\t\t==> %d Bytes\n\n",sizeof(unsigned char));

    printf("long long 형의 크기\t\t\t==> %d Bytes\n",sizeof(long long int));
    return 0;
}