#include <stdio.h>
//아래는 Standard Library 메모리들 동적으로 할당하는 ..
#include <stdlib.h>

int main(){// 프로그램에 진입점(Entry Point)
/*엑세스 메모리
stack : 미리 정해진 크기만 가능해 나중에 크기를 바꿀수 없어
Heap : 네가 필요할때 내가 원하는 만큼 빌려줄께 다 썼으면
나한테 다시 반납해

프로그램이 실행될때 메모리 구조에서의 위치
코드영역 : 작성한 소스 코드가 기계어로 바뀌어 저장되는곳
데이터영역 : 전역 변수나 정적변수가 저장되는곳
스택영역 : 함수 호출시 생성되는 지역 변수나 매개변수가 저장되는곳
힙영역 : 개발자가 malloc, calloc등으로 직접 할당하는곳(수동관리) 
*/

int *ptr;//포인터 선언
ptr = calloc(4, sizeof(*ptr));
//calloc(n, size) n개의 요소에 대해서 각 요소당 size바이트 만큼의 메모리를 힙 영역에 할당
//malloc과의 차이점 할당된 메모리공간을 모두 0으로 초기화 합니다
*ptr = 2;//첫번째 공간 (index 0)에 2를 저장
ptr[1] = 4;//두번째 공간 (index 1)에 4를 저장
ptr[2] = 6;//세번째 공간 (index 2)에 6를 저장
//ptr[3]은 0이 그대로 들어가 있음
printf("%d\n", *ptr);
printf("%d %d %d\n", ptr[1], ptr[2], ptr[3]);

//동적으로 할당받은 메모리는 반드시 직접해제 되어야 합니다
free(ptr);

    int *students; 
/*int형 데이터를 가리키는 포인터변수 students선언
나중에 메모리 공간을 확보했을때 그 공간의 시작주소를 저장하기 위한 
바구니를 만드는 과정
*/
    int numStudents = 12; //학생수 12명이다

    students = calloc(numStudents, sizeof(*students));
    /*
    calloc 은 Contiguous Allocation(연속 할당)의 약자
    numStudents = 12  만큼의 공간을 확보
    sizeof(*students) int 크기인 4바이트를 각 요소의 크기로 사용
    총 48바이트를 메모리에서 빌려옵니다
    할당된 공간의 첫번째 주소를 students포인터에 저장합니다

    */
   printf("%d\n", numStudents * sizeof(*students));



/*그리하여 동적메모리를 사용합니다..프로그램이 시작된후 할당되는 메모리
또는 런타임 메모리 할당이라고 합니다
특정시점에 사용되는 메모리양을 완벽하게 제어할수 있습니다
*/

    /*정적메모리 Static 프로그램실행전에 변수를 위해 예약되는 메모리 프로그램 컴파일시 모든 변수에 대해 자동으로 메모리 할당
    20명의 하생을 저장하는 정수 배열*/
int sts[20];
printf("%zu\n", sizeof(sts));
//그러나 학기가 시작하니 실제로 12명의 학생만 참석하는것으로 밝혀짐
//char(20) varchar(100) varchar2()

printf("=================================");



    
    /*
    프로그램이 과도하거나 불필요한 메모리를 차지하면 속도가 느려지고 성능저하
    메모리주소와 포인터를 배운이유가 이런것 때문입니다
    */

    //변수형태마다의 바이트 sizeof연산자 사용 %zu
    int myInt; //4bytes
    float myFloat; //4bytes
    double myDouble; //8bytes
    char myChar; //1bytes

    printf("%zu\n", sizeof(myInt));
    printf("%zu\n", sizeof(myFloat));
    printf("%zu\n", sizeof(myDouble));
    printf("%zu\n", sizeof(myChar));

    char memory[] = "메모리관리"
    "프로그램이 사용하는 메모리 양을 할당"
    "재할당 및 할당 해제(흔히 '해제'라고도 함)"
    "Allocate Memory"
    "정적메모리 : 프로그램 실행 전에 변수를 위해 예약되는 메모리"
    "동적메모리 : 프로그램 실행이 시작된 후에 할당되는 메모리"
    "동적메모리에 엑세스 : 배열과 같이 인덱스 번호를 참조"
    "메모리 재할당 : 예약한 메모리 용량이 부족하면 메모리를 재할당하여 더크게 만듭니다"
    "메모리를 더할당 할수 없는 경우 realloc반환"
    "메모리 할당 해제 : 더필요없는 메모리 블록은 할당해제 free()"
    ;

    return 0;
}