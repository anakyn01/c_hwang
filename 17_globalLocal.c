#include <stdio.h>

//함수 위에 있는것 전역변수 어디서든 사용 함수안에 있는것 지역변수 함수에서만 사용
int x = 5;

void myNums(){
    printf("%d\n", x);
}

int main() {
    myNums();
    printf("%d\n", x);
    return 0;
}