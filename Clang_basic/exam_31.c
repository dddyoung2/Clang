#include <stdio.h>
#include <string.h>

void main(){
    FILE *rfp, *wfp;
    char str[200];

    rfp = fopen("C:\\Users\\jads7\\Desktop\\test\\Clang\\C_File\\in.txt", "r");
    wfp = fopen("C:\\Users\\jads7\\Desktop\\test\\Clang\\C_File\\out.txt", "w");

    while(1){
        fgets(str, 200, rfp);
        for(int i = strlen(str); i>=0; i--){
            fprintf(wfp, "%c", str[i]);
        }
        fprintf(wfp, "\n");
        if (feof(rfp)) break;
    }

    fclose(rfp);
    fclose(wfp);
}