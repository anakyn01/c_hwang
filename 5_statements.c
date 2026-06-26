#include <stdio.h>

int main() {
//스위치
int day = 4;
switch(day){
    case 1:
    printf("monday");
    break;
    case 2:
    printf("tusday");
    break;
    default:
    printf(".....");

}


    //if
    int time = 16;
    if(time < 12) {
        printf("Good morning");
    }else if (time < 18) {
        printf("good day");
    }else{
        printf("good evening");
    }

    (time < 18) ? printf("Good day") : printf("good evening");
    return 0;
}