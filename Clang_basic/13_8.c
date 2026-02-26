#include <stdio.h>

void main(){
    //enum은 typedef 못함
    enum week{
        sun, mon, tue, wed, thu, fri, sat
    };
    enum week ww;
    ww=sun;
    printf("%s %d %d\n", ww, sun, mon);
}