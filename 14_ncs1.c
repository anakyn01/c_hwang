#include<stdio.h>

//함수선언 미리 알리기
int calculate_total(int, int, int);//총점
float calculate_average(int);//평균
char determine_grade(float);//평균에따라 학점결정

//총점계산함수
int calculate_total(int kor, int eng, int math) {
    //함수의 시작
    int total = kor + eng + math;
    return total;
}
//평균 계산 함수
float caculate_average(int total){
    float average = total / 3.0;
    //float average = (float)total / 3;
    return average;
}

char determine_grade(float average) {

    char grade;

    //학점을 저장할 문자형 변수
if (average >= 90) { 
    grade = 'A';
   }else if(average >= 80){
    grade ='B';
   }else if(average >= 70){
    grade ='C';
   }else{
    grade ='F';
   }
   return grade;
}

int main() {
/*
변수준비 데이터 담을 그릇을 만들기
char name[10]; 이름을 저장할공간 
알파벳 기준 최대 9글자 마지막은
끝은 알이는 \0자리 까지 저장합니다
*/
    char name[10];
    int kor, eng, math, total;
    //총점 저장에 정수형 변수
    int choice=0;//초기화를 시킴 초기값으로 0을 대입
    float average;//소수점이 나올수 있어서 float을 사용
    char grade; //학점 한글자 저장

   do{
    //데이터 입력받기 부분
    printf("이름");scanf("%s", name);
    printf("국어");scanf("%d", &kor);
    printf("영어");scanf("%d", &eng);
    printf("수학");scanf("%d", &math);
    //& 이변수가 있는 주소로가서 값을 넣어라

    /*데이터의 처리 (함수에게 일 시키기) 
    입력받은 점수들으 ㄹ미리 만들어준 함수들에게 넘거주고
    계산된 결과값들을 다시 변수에 받아옵니다
    */
    total = calculate_total(kor, eng, math);
    average = calculate_average(total);
    grade = determine_grade(average);
    //결과 출력하기
    printf("\n이름: %s\n", name);
    printf("총점 : %d\n", total);
    printf("평균 : %.2f\n", average);
    printf("학점 : %c\n", grade);

    printf("\n0:exit anyKey:continue :");
    scanf("%d", &choice);
    puts("");
   }while(choice != 0);

    return 0;
}