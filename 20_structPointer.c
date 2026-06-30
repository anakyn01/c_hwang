#include <stdio.h>

struct Car {//Car라는 이름에 구조체 설계도를 만듬
    char brand[30];
    //자동차브랜드를 저장할때 최대29글자 끝을 알리는 \0
    int year;
};

void updateYear(struct Car *c) {
    //구조체 전체를 복사해서 넘겨받는것이 아니라 구조체가 있는 메모리주소 (포인터c)만 넘겨받는다

    c->year = 2025;
    /*
    -> 화살표 연산자  c가 가르키는 주소로 찾아가서
    (*)그안에 있는 year맴버에 접근하라는 얘기
    예도 상동이다
    (*c).year = 2025
    */
}

int main() {
    struct Car myCar = {"Toyota", 2020};
    updateYear(&myCar);

    printf("Brand: %s\n", myCar.brand);
    printf("Year: %d\n", myCar.year);
}