#include <stdio.h>

//구조체(데이터 묶음 틀) 정의 
struct Test {
    int i;//정수를 담는 공간 입니다
    const char *g;
    //g문자열(문자배열의 첫번째 주소)을 가리키는 포인터
};

int main() {

    //구조체 배열 선언 및 초기화
    struct Test test[] = {{1, "AB"},{2, "DC"},{3, "EB"}};

    /*포인터 연결 struct Test *p Test구조체를 가르키는 포인터 p를 만들고
    &test[1] test배열의 두 번째 요소(인덱스1)의 주소(&)를 가리키게 합니다
    이제 포인터 p를 통해 test[1]의 데이터인 {2, "DC"} 접근할수 있다
    */
    struct Test *p = &test[1];

    printf("%s", p->g + (p->i - 1));
    /*
    p->i  2이다
    p->i - 1 결과는 1이다
    p->g 포인터 p가 가르키는 구조체의 g값 즉 문자열의 시작주소
    "D"
    p-<g + 1 다음문자인 c를 가르킵니다
    */

    return 0;
}