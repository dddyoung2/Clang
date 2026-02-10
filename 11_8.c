#include <stdio.h>

void main(){
    char str[200];
    FILE *rfp;

    rfp = fopen("c:\\windows\\win.ini", "r");

    while(1){
        fgets(str, 200, rfp);

        if (feof(rfp)) break;
        printf("%s",str);
    }
    
    fclose(rfp);
}