#include <stdio.h>
#include <stdlib.h>

int main(){
    int star = 0;

    scanf("%d",&star);

    for (int i=1; i<=2*star-1; i++){
        for (int j=abs(star-i); j>0; j--) printf(" ");
        if (i<=star)
            for (int k=1; k<=2*i-1; k++) printf("*");
        else if (i>star)
            for (int k=4*star-2*i-1; k>=1; k--) printf("*");
        if (i<2*star-1) printf("\n");
    }
    return 0;
}