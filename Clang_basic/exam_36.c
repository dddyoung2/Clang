#include <stdio.h>

void main(){
    enum month{
        January = 1, February, March, April, May, June, July, August, September, October, November, December
    };
    enum month mm;
    printf("월 입력 : ");
    scanf("%d",&mm);

    switch(mm){
        case January :
            printf("입력하신 월은 %d월, January입니다.\n",mm);
            break;
        case February :
            printf("입력하신 월은 %d월, February입니다.\n",mm);
            break;
        case March :
            printf("입력하신 월은 %d월, March입니다.\n",mm);
            break;
        case April :
            printf("입력하신 월은 %d월, April입니다.\n",mm);
            break;
        case May :
            printf("입력하신 월은 %d월, May입니다.\n",mm);
            break;
        case June :
            printf("입력하신 월은 %d월, June입니다.\n",mm);
            break;
        case July :
            printf("입력하신 월은 %d월, July입니다.\n",mm);
            break;
        case August :
            printf("입력하신 월은 %d월, August입니다.\n",mm);
            break;
        case September :
            printf("입력하신 월은 %d월, September입니다.\n",mm);
            break;
        case October :
            printf("입력하신 월은 %d월, October입니다.\n",mm);
            break;
        case November :
            printf("입력하신 월은 %d월, November입니다.\n",mm);
            break;
        case December :
            printf("입력하신 월은 %d월, December입니다.\n",mm);
            break;
        default :
            printf("%d월은 존재하지도 않는다. 똑바로 쳐라.\n",mm);
    }
    
}