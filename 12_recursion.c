#include <stdio.h>

int sum(int k);
/*
함수원형(Prototype )선언 
main함수 아래에 있는 sum함수를 미리 알려주어
main에서 문제없이 호출할수 있게 합니다
*/

int main(){
    int result = sum(10);
    printf("%d", result);
    return 0;
}

/*함수는 호출될때만 실행되는 코드블록 스스로를 호출하는걸 재귀함수
거울을 마주보고 있는 거울처럼 함수가 스스로를 호출
*/
int sum(int k) {//(파라미터) 함수를 호출할때 인수
    if (k > 0) {   
     return k + sum(k - 1);
     /*
     10 + sum(9)를 계산하려고 하는데 sum(9)가 뭔지 모르니 기다린다
     9 + sum(8)을 호출...
     sum(0)까지 호출이 쌓이게 됩니다
     k가 0이 되면 0을 반환하고 이제 거꾸로 쌓여 있던 값들이 
     더해지면서 계산이 완료됩니다

     식탁에 접시를 쌓았다가 하나씩 치우는 과정처럼 처리합니다
     */
    } else {
        return 0;
    }
}