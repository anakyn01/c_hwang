#include <stdio.h>

/*구조체는 어느시점에서 보느냐에 따라 클래스와 객체를 의미한다
아래가 클래스에 개념 구조체 정의 마침표를 찍어야함
struct키워드로 틀을 만들어 놓으면 필요할때 마다
그틀을 이용해 실제 데이터를 담을 붕어빵(변수)를 찍어 낼수 
있습니다

*/
struct myStructure{//구조체 정의
    int myNum;//이구조체 안에 들어갈 데이터 맴버라한다
    char myLetter;
};

int main(){

    struct myStructure s1;
    //훗날 객체로 변신

    s1.myNum = 13;
    s1.myLetter = 'B';

    printf("내 숫자는 : %d\n", s1.myNum);
    printf("내 단일문자는 : %c\n", s1.myLetter);

    return 0;
}
