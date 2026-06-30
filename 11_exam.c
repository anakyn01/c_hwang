#include <stdio.h> //표준 입출력

//배열을 받아 평균을 계산하는 함수
double arr1(int p[], int len){
    
    //평균 계산에 사용할 합계를 저장할 변수
    double av = 0;
    
    //변수 선언만
    int i;

    //배열의 처음부터 끝까지 반복
    for (i=0; i<len; i++) {
        //배열의 각 값을 double형으로 변환하여 합계에 더합니다
        av += (double) p[i];
    }

    return av / len; //합계를 배열의 길이로 나우어 평균 반환
}

double arr2(int *p, int len) {
    double av = 0;
    int i;
    for(i=0; i<len; i++ ){
        av += (double)( * (p + i));
//포인터의 연산으로 배열의 값을 가져와 합계에 더합니다
    }
    return av / len;
}

int main() {

    int arr[10] = {
80,20,50,55,45,95,55,10,40,80        
    };

    int len = 10;

    printf("%.2f", arr1(arr, len) + arr2(arr, len));
    //53.00+53.00 = 106.00 

    return 0;
}