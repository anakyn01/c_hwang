#include <stdio.h>

int main(){

    int myNum; //값을 집어 넣지 않고 정의만 합니다

    printf("Type a number and press enter: \n");

    scanf("%d", &myNum);
    /*
    사용자 입력값을 변수의 주소에 저장
    & 주소 연산자(Adress-of operator)
    변수가 메모리상 어디에 이ㅛ는지 그 주소를 찾아가서
    사용자가 입력한 값을 그 주소에 저장하라는 의미
    */

    printf("your number is :%d", myNum);

    return 0;
}