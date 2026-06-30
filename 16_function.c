#include <stdio.h>

//void자바에서 마찬가지로 스스로 해결을 못함
void myFunction() {
    printf("난 누군가 불러야만 해요");
}

//함수 매개변수
void myName(char name[], int age){//파라미터
    //매개값을 넣어주는건..하나만이 아니라는 
    printf("hello %s\n", name);//아규먼트
}

int main() {

    myName("na", 49);

    printf("Hello World");

    //호출
    myFunction();
    return 0;

}