#include <stdio.h>
//한글이 깨지지 않게 하려면
#include <windows.h>
//8,16,32,64 비트 부호 있는 없는 정수
#include <stdint.h>

int main(){
//5)파일크기 계산
long fileSize = 5242880; 
//파일크기를 바이트 단위로 5 x 1024 x 1024
double mb = (double)fileSize / (1024 * 1024);
/*
10진수  0 1 2 3 4 5 6 7 8 9
컴퓨터는 2진수 0 1
그래서 저장단위도 2의 거듭제곱을 기준으로 사용
2 10 = 1024
1kb = 1024byte
*/
printf("%.2f MB\n", mb );

//네트워크 패킷 바이트 배열을 자주 다룹니다
uint8_t packet[4] = {0x12, 0x34, 0x56, 0x78};
/*
uint8_t 는 1바이트 (8비트) 4개니까 총 4바이트가 나열
메모리에는 1바이트씩 차례대로 저장
*/

/*비트이동(shift)과 결합(OR)의 원리
각 1바이트 데이터를 32비트 공간안에서 제자리로 찾아가게 만든뒤 
| (OR)연산으로 합치는 과정
*/
uint32_t value =
((uint32_t)packet[0] << 24 ) | //0x12 를 왼쪽으로 24비트(3바이트를 밉)
((uint32_t)packet[1] << 16 ) | //0x34 를 왼쪽으로 16비트(2바이트 밉)
((uint32_t)packet[2] << 8 ) | //0x56 을 왼쪽으로 8비트(1바이트 밉)
((uint32_t)packet[3] ); //이동하지 않고 그대로 둠
/*
0x12000000
0x00340000
0x00005600
0x00000078
0x12345678
*/

printf("0x%X\n", value);

//8비트짜리 데이터를 다루는 센서 값을 저장할때 아주 유용
uint8_t sensorValue = 255; //0 ~255까지만 저장가능 1바이트
int32_t counter = 100000; //32비트 정수 (4바이트) 

printf("센서값: %u\n", sensorValue);
printf("카운터: %d\n", counter);
//정확성 이식성 명확성

//센서 데이터 변환
int adc = 2500;
double voltage = (double)adc * 3.3 / 4095;
printf("%.3fV\n", voltage);

    //실전관련 테스트
int total = 289; int count = 4;
double avg = (double) total / count;
printf("%.2f\n", avg);



//명시적 변환
float q = 9; printf("%f\n", q);
//
int w = 9.99; printf("%d\n", w);

//why
float sum = (float) 5 / 2; 
printf("%f\n", sum);




    SetConsoleOutputCP(CP_UTF8);
    //char
char typeCasting[] = "c에 형변환은 변수나 값의 자료형을 다른 자료형으로 바꾸는 것 입니다 \n 실무에서는 데이터베이스 네트워크통신, 센서 데이터 파일입출력,메모리 제어 모든 분야 사용됨"
"형 변환이 필요한 이유 예를 들어 5를 2로 나누면 정수에서 소수점"
"이런 사유로 형변환을 하는데"
"형변환은 크게 두가지 로 나뉩니다"
"암시적 변환[자동{implicit Conversion}] 컴파일러가 자동으로 바꿈"
"명시적 변환[수동{Explicit Casting}] 프로그래머가 직접 변환"
"그렇다면 메모리에서는 어떻게 될까? 새로운 값을 생성"
"큰 자료형 -> 작은자료형 데이터가 잘림 이런걸 Overflow or Truncation"
"작은 자료형 -> 큰 자료형 빈공간을 채워서 복사"
"실수에서 정수는 반올림이 아닌 버림"
"포인터 형변환  void int* 역참조 "
;    

printf("%s", typeCasting);
    return 0;
}