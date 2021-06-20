// 내장 함수

#include <stdio.h>
#include <string.h> // 문자열 함수의 헤더 파일
#include <math.h> // 수학 함수의 헤더 파일
#include <stdlib.h> // 데이터 변환, 난수 관련, 메모리 관련 함수의 헤더 파일

int main(void)
{
    printf("%f\n", pow(2, 3)); // 2의 3제곱
    printf("%f\n", sqrt(25)); // 25의 제곱근
    printf("%d\n", abs(-20)); // -20의 절대값

    char a[] = "ad";
    char b[] = "ac";
    printf("%d\n", strcmp(a, b)); // a=b -> 0, a>b -> 1, a<b -> -1 
    strcpy(a, b); // a에 b를 복사
    printf("%d\n", strcmp(a, b));

    char c[] = "123";
    char d[] = "456";
    printf("%d\n", atoi(c) + atoi(d)); // 문자열을 정수형으로 변환

    char e[] = "12.3";
    char f[] = "45.6";
    printf("%f\n", atof(e) + atof(f)); // 문자열을 double형으로 변환
}
