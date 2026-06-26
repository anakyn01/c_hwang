#include <stdio.h>

int main(){

    int i = 5;
    printf("---전위 연산자 (++i)---\n");
    printf("초기값: % d\n", i);
    //먼저 증가시키고 그 다음에 대입해라
    int result_pre = ++i;
    printf("연산후 i: %d\n", i);
    printf("연산후 result_pre: %d\n\n", result_pre);

    //후위연산자
    int j = 5;
    printf("---후위 연산자 (j++)---\n");
    printf("초기값 j: % d\n", j);
    //먼저 값을 사용하고  그 다음에 증가시켜라
    int result_post = j++;
    printf("연산후 j: %d\n", j);
    printf("연산후 result_post: %d\n\n", result_post);






/*증가 연산자 두가지 종류 전위전산자 후위전산자
전위(prefix)연산자 먼저 값을 증감시킨후 그 결과를 사용
후위는 그에 반대
왜 이렇게 동작할까요 ?
메모리 관점 
전위 가 메모리에 관점에서는 효율적
후의는 복사과정이 들어가므로 
*/
    int x = 5;
    ++x; //6
    --x; //5
    //후위 연산자 x++ x--

printf("5d\n", x);

    return 0;
}