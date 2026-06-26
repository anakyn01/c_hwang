#include <stdio.h>

int main() {
int one;
float two;
double three;
char four;

printf("%zu\n", sizeof(one));
/*
% : 준비해
z 이변수의 크기(Size) 는 ~타입이야라고 알려주는 길이 수정자 
(Length Modifier)
u : Unsigned(부호없는 정수 0과 양수)형태로 출력하라는 의미
*/

printf("%zu\n", sizeof(two));
printf("%zu\n", sizeof(three));
printf("%zu\n", sizeof(four));
/*메모리
[컴퓨터 메모리에서 특정 데이터 유형이 차지하는 공간의 크기]
에서 할당되는 크기

int : 2 ~ 4 bytes
float : 4 bytes
double : 8bytes
char  : 1byte
*/


//수동 소수점 정밀도
float myF = 3.5;
printf("%f\n", myF);//지정한 안한 동그라미 가더 붙어요
//동그라미가 소수점 뒤에 안나오게 할경우
printf("%.1f\n", myF);//3.5
printf("%.2f\n", myF);//3.50

//Scientific Numbers 를 사용하여 지수표현
float f1 = 35e5; printf("%f\n", f1);
double d1 = 12E7; printf("%lf", d1);

//캐릭터 단일문자일때는 형식지정자 c 여러문자일땐 s

    //변수에 타입들이 있음
    int myNum = 5;//변수 마무리가 되면 구분자를 적용해야 됩니다
    float myFloatNum = 5.99;//소수점 정밀도 6~7
    double myDouble = 19.99;//소수점 정밀도가 15자리 까지 가능
    char myLetter = 'D'; //단일 문자열

    //c는 문자를 여러개 표기할때는 어레이 표시를 해야됩니다
    char basicData[] = "c에서 하나이상에 글자를 사용할때는 어레이와 형식지정자 s를 사용한다"; 

    /*c가 좀더 원시적인 프로그램인 이유 프린트할때 포멧사용

    */
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%lf\n", myDouble);//형식지정자 더블은 lf
printf("%c\n", myLetter);
printf("%s\n", basicData);
    return 0;
}
/*
int: 컴퓨터에 돌려줄 결과물의 종류 (Integer[정수 소수점이 없는 숫자])
retrun 0 : 나 문제 없이 잘끝남

main : 프로그래밍에 시작점 : 코드가 아무리 길어도 main이라는 글자가 적힌곳으로 찾아감
() : 이름 뒤에 () 프로그래밍에서는 이름 함수라고 부릅니다

{ : 자 이제  시작한다

} : 끝났다


#(해시기호) : 컴파일러에게 보내는 비밀신호
프로그래밍에서 진짜 코드를 컴퓨터기 읽기 전에
미리(Pre)준비해야될 작업을 지시할때

이를 프로그래밍 용어로 전처리기(Preprocessor)

본 게임(코드 실행이 )시작되기 전에 대기실에서 준비운동을 시키는 명령어

include : 포함하다, 가져오다
내 코드 안으로 이파일을 포함해서 같이 묶어줘 !
다른 사람이 이미 잘 만들어 놓은 도구 상자(라이브러리)를
내 모니터 앞으로 배달시킵니다

<stdio.h> 아래에 앞글자를 따서 만든겁니다
Standard(표준)
Input(입력 - 키보드)
Output(출력-모니터 화면)
.h(Header file - 머리에 해당하는 중요한 기능 정의들이 모여있는 파일)
*/