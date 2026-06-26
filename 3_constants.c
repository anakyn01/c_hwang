#include <stdio.h>

//1 #define 매크로 상수
#define PI 3.14159f

int main() {

  //2.const 키워드 상수: 자료형과 함께 선언하여 값이 변하지 않음을 보장
  const int MAX_THREADS = 8;
  const char* APP_NAME = "My_System_Controller";

  printf("%s\n", APP_NAME);
  printf("%d\n", MAX_THREADS);

  //연산에 상수를 활용
  float radius = 5.0f;
  float area = PI * radius * radius;
  printf("%.2f\n", PI, area);
  //메모리로 표현하는 변수(언제든 값을 덮어슬수 있는 빈상자)와 
  //상수 잠금자치를 채운 전시용 상자


  char Const[] = "c언에서 뿐만 아니라 상수는"
  "프로그램이 실행되는 동안 값이 절대 변하지 않는 데이터"
  "변수가 데이터를 담는 상자라면 상수는 바뀌지 않는 고정된 값"
  "c언어의 상수 종류"
  "리터널 상수 : 코드에 직접 적어 넣은 값 그 자체"
  "매크로 상수 : preprocessor를 사용하여 이름을 붙인 상수"
  "키워드 상수 : 읽기전응 수정 불가능"
  "왜 상수를 사용할까 가독성,유지보수,안정성 실수로 라도 값에 변경을 컴파일 단계에서"
  "막아주어 버그를 예방"
  ; 

    return 0;
}