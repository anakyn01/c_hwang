#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);

    int myNum = 10; //일반 정수 변수 메모리 주소 0x1000

    int *ptr = &myNum; 
    //ptr은 myNum의 주소 저장 실제값 0x1000 메모리주소 0x2000
    
    int **pptr = &ptr;//더블 포인터

    printf("myNum = %d\n", myNum);
    printf("*ptr = %d\n", *ptr);
    printf("**pptr = %d\n", **pptr);
    

char PointerToPointer[] = 
"포인터가 다른 포인터를 가르키는 경우가 있습니다"
"이를 포인터를 가리키는 포인터 (또는 이중 포인터) 라고 합니다"
"처음에는 혼란스럽지만"
"단지 간접 참조 단계가 하나 더 추가된 것일 뿐이다"
"다른 포인터의 주소를 저장하는 포인터인 샘이다";
printf("%s\n", PointerToPointer);

    return 0;
}