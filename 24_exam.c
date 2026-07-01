//연결리스트 만들기 Linked List
#include <stdio.h>

struct Node{//구조체 정의 훗날 class
    struct Node* next; //다음 상자를 가르키는 화살표
    unsigned int x;//숫자 공간 데이터를 담는공간
};

int main(){

    //처음에는 화살표(next)가 아무것도 가르키지 않는 0(NULL) 상태
    struct Node t1 = {0, 5u};
    struct Node t2 = {0, 7u};
    struct Node t3 = {0, 11u};

    t3.next = &t2; //t3화살표가 t2를
    t2.next = &t1;

//결과적으로 데이터에 흐름은 11(t3) -> 7(t2) -> 5(t1) 순서로 기차로 연결됨
//리스트 순회 및 연산(while 루프)

struct Node* curr = &t3;
//포인터 curr가 기차의 맨 앞칸인 t3부터 시작하여 다음칸으로 계속 이동
int sum = 0;

while (curr) {
    sum = sum * 3 + curr-> x;
    curr = curr->next;
}


/*
단계  가리키는 노드(curr->x) 공식(sum = sum *3 +x) 결과(sum)
1회차 t3(11)               0 * 3 + 11            11
2회차 t2(7)                11 * 3 + 7            40
3회차 t1(5)                40 * 3 + 5            125
반복이 끝날때 sum은 125
*/
/*비트 연산과 최종 계산(XOR연산 배타적 논리합 ) ^
두숫자를 이진수(0과 1로 나눴을때 각자리수가 서로 다르면 1 같으면 0이 되는 계산법)
*/
sum = (sum ^ 42u) + 100u;
/*
125랑 42이진수로 바꿈
8번째 둘다 0   => 0
7번째 1과 0    =>1
6번째 둘다1    => 0
5번째 1과0    1
4번째 둘다 1   0
3번째 1과 0 1
2번째 0과 1 1
1번째 1과 0 1

0101 0111
이결과를 우리가 읽으려면 십진수

64 1 16 1 4 1 2 1 11
64+16+4+2+1 = 87
*/
printf("%u\n", sum);

    return 0;
}