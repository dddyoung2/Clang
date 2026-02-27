#include <stdio.h>
#include <string.h>

int main(){
    int second = 0;
    
    char code[15] = "\0";

    scanf("%s",code);
    second += 2*strlen(code);
    for (int i=0; i<strlen(code); i++){
        if (code[i] == 'A' || code[i] == 'B' || code[i] == 'C') second += 2-1;
        else if (code[i] == 'D' || code[i] == 'E' || code[i] == 'F') second += 3-1;
        else if (code[i] == 'G' || code[i] == 'H' || code[i] == 'I') second += 4-1;
        else if (code[i] == 'J' || code[i] == 'K' || code[i] == 'L') second += 5-1;
        else if (code[i] == 'M' || code[i] == 'N' || code[i] == 'O') second += 6-1;
        else if (code[i] == 'P' || code[i] == 'Q' || code[i] == 'R' || code[i] == 'S') second += 7-1;
        else if (code[i] == 'T' || code[i] == 'U' || code[i] == 'V') second += 8-1;
        else if (code[i] == 'W' || code[i] == 'X' || code[i] == 'Y' || code[i] == 'Z') second += 9-1;
    }
    
    printf("%d",second);
    return 0;
}