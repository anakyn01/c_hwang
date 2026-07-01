#include <stdio.h>

union myUnion{//메모리가 극도로 부족한 환경에서 메모리를 아낄때
int myNum; char myLetter; char myString[30];
};

int main(){
    union myUnion u1;

    u1.myNum = 1000;

    u1.myLetter = 'A';

    printf("myNum: %d\n", u1.myNum);
    printf("myLetter: %c\n", u1.myLetter);

    return 0;
}

/*
구조체 : 방이 3개가 있는 아파트
방이 따로 있어 동시에 3명이 머무릅니다
와
유니온(공용체) : 아주 큰 원룸
정수,문자,문자열 세명이 살지만
한번에 단 한명만 방을 쓸수 있습니다
새로운 사람이 들어오면 원래 있던 짐을 밖으로 빼버린다
가장 크기가 큰애만 메모리 할당
*/