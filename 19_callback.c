#include <stdio.h>

//호출해야만 하는 함수 스스로 해결못하는
void sayHello(){
    printf("난 평범한 함수");
}

//남을 불러주는 함수
void runCallback(void (*callback)()) {
    //매개변수도 없고 반환값도 없는 void 함수의 주소만 내게 넘겨주면 내가 그것을 callback이라는 이름의 리모콘으로 쓰겠다
printf("before calling the callback...\n");
callback();//전달받은 함수실행
printf("after calling the callback.\n");
}

int main() {
    runCallback(sayHello);
    return 0;
}
/*
콜백을 사용하는 이유
껍데기(시스템)와 알맹이(사용자 로직)를 분리할수 잇다
소프트웨어 아키텍처를 짤대 부품을 갈아 끼우기 쉽게 
(Decoupling)을 만드는 훌륭한 설계 방식이다.
단 너무 치우치면 콜백함수지옥에 빠질수 잇다
*/