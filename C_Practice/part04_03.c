#include <stdio.h>
#include <stdlib.h>
#include <time.h> // 난수 관련 함수의 헤더 파일

int main(void)
{
    int n = 0;
    srand(time(NULL));
    // srand(시드) : 난수의 기준이 되는 값을 설정한다.
    // time() : 정수 형태로 된 현재 시간 값을 반환한다.
    
    while (n!=1) {
        n = rand() % 6 + 1; // rand() : 난수를 발생시킴
        printf("%d\n",n);
    }
}